#-plugin-sig:iIw3xzkL6ZCYUSFzhiofN9qVMr8vtw0QoeVxbE/6VdOh4H2OW1s6pA8a8IEj8IWlW9RRFv+1bvVa+pqYDpLW5aSLYCo5htyC+XHVFZFsQYgXGf9BIkWCSzB/fXuOCipC2qwFgqO334+XUnq0nSjoxVXFm1VE9iylAvYpmQ/FcJsKsl1+UbFHFOQLXWGHa+WrzXE5Yj2iY7ENgMc2wypV0Quvt+3+R8XdXdFb11/S5ZC4fH52F1/p7Cd2LT6LsIAZtZpq+zL+NLczW1MPvFlkw6gnALSsDGcKwmHr3LlrBw8U5p2iKwDN4oA7OyS2LA8V7qxmisuMWjfj3Uu6tLzrLg==
"""Plugin for Viasat's on demand content sites, such as tv6play.se."""

import re

from ACEStream.PluginsContainer.livestreamer.exceptions import PluginError
from ACEStream.PluginsContainer.livestreamer.plugin import Plugin
from ACEStream.PluginsContainer.livestreamer.plugin.api import StreamMapper, http, validate
from ACEStream.PluginsContainer.livestreamer.stream import HDSStream, HLSStream, RTMPStream
from ACEStream.PluginsContainer.livestreamer.utils import rtmpparse

STREAM_API_URL = "http://playapi.mtgx.tv/v3/videos/stream/{0}"

_swf_url_re = re.compile("data-flashplayer-url=\"([^\"]+)\"")
_player_data_re = re.compile("window.fluxData\s*=\s*JSON.parse\(\"(.+)\"\);")

_url_re = re.compile("""
    http(s)?://(www\.)?
    (?:
        tv(3|6|8|10)play |
        viasat4play |
        play.tv3 |
        juicyplay |
        viafree
    )
    \.
    (?:
        dk|ee|lt|lv|no|se|com
    )
    (/.+?/|/embed\?id=)
    (?P<stream_id>\d+)
""", re.VERBOSE)

_stream_schema = validate.Schema(
    {
        "streams": validate.all(
            {validate.text: validate.any(validate.text, int, None)},
            validate.filter(lambda k, v: isinstance(v, validate.text))
        )
    },
    validate.get("streams")
)


class Viasat(Plugin):
    @classmethod
    def can_handle_url(cls, url):
        return _url_re.match(url)

    def _get_swf_url(self):
        res = http.get(self.url)
        match = _swf_url_re.search(res.text)
        if not match:
            raise PluginError("Unable to find SWF URL in the HTML")

        return match.group(1)

    def _create_dynamic_streams(self, stream_type, parser, video):
        try:
            streams = parser(self.session, video[1])
            return streams.items()
        except IOError as err:
            self.logger.error("Failed to extract {0} streams: {1}", stream_type, err)

    def _create_rtmp_stream(self, video):
        name, stream_url = video
        params = {
            "rtmp": stream_url,
            "pageUrl": self.url,
            "swfVfy": self._get_swf_url(),
        }

        if stream_url.endswith(".mp4"):
            tcurl, playpath = rtmpparse(stream_url)
            params["rtmp"] = tcurl
            params["playpath"] = playpath
        else:
            params["live"] = True

        return name, RTMPStream(self.session, params)

    def _extract_streams(self, stream_id):
        res = http.get(STREAM_API_URL.format(stream_id), raise_for_status=False)
        stream_info = http.json(res, schema=_stream_schema)

        mapper = StreamMapper(lambda pattern, video: re.search(pattern, video[1]))
        mapper.map(
            r"/\w+\.m3u8",
            self._create_dynamic_streams,
            "HLS", HLSStream.parse_variant_playlist
        )
        mapper.map(
            r"/\w+\.f4m",
            self._create_dynamic_streams,
            "HDS", HDSStream.parse_manifest
        )
        mapper.map(r"^rtmp://", self._create_rtmp_stream)

        return mapper(stream_info.items())

    def _get_streams(self):
        match = _url_re.match(self.url)
        stream_id = match.group("stream_id")

        return self._extract_streams(stream_id)


__plugin__ = Viasat
