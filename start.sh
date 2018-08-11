#!/bin/bash

echo "..........:|:|:---*---:|*|:.........."
echo "- ACE Stream HD for macOS."
echo "- Made by github.com/und3fined"
echo "- Original source github.com/und3fined/ace-stream-hd"
echo ""

SOURCE="${BASH_SOURCE[0]}"
while [ -h "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  TARGET="$(readlink "$SOURCE")"
  if [[ $TARGET == /* ]]; then
    SOURCE="$TARGET"
  else
    DIR="$( dirname "$SOURCE" )"
    SOURCE="$DIR/$TARGET" # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
  fi
done

DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"

echo "Patch: starting"

cd "$DIR/Contents/Resources/wineprefix/dosdevices"
rm -rf c: && ln -sf ../drive_c c:

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/lib"
rm -rf libasprintf.dylib && ln -s libasprintf.0.dylib libasprintf.dylib
rm -rf libexslt.dylib && ln -s libexslt.0.dylib libexslt.dylib
rm -rf libfreetype.dylib && ln -s libfreetype.6.dylib libfreetype.dylib
rm -rf libgettextlib.dylib && ln -s libgettextlib-0.18.2.dylib libgettextlib.dylib
rm -rf libgettextpo.dylib && ln -s libgettextpo.0.dylib libgettextpo.dylib
rm -rf libgettextsrc.dylib && ln -s libgettextsrc-0.18.2.dylib libgettextsrc.dylib
rm -rf libgphoto2.dylib && ln -s libgphoto2.2.dylib libgphoto2.dylib
rm -rf libgphoto2_port.dylib && ln -s libgphoto2_port.0.dylib libgphoto2_port.dylib
rm -rf libgsm.dylib && ln -s libgsm.1.0.13.dylib libgsm.dylib
rm -rf libintl.dylib && ln -s libintl.8.dylib libintl.dylib
rm -rf libjpeg.dylib && ln -s libjpeg.8.dylib libjpeg.dylib
rm -rf liblcms2.dylib && ln -s liblcms2.2.dylib liblcms2.dylib
rm -rf libltdl.dylib && ln -s libltdl.7.dylib libltdl.dylib
rm -rf libmpg123.dylib && ln -s libmpg123.0.dylib libmpg123.dylib
rm -rf libpng.dylib && ln -s libpng16.dylib libpng.dylib
rm -rf libpng16.dylib && ln -s libpng16.16.dylib libpng16.dylib
rm -rf libsane.dylib && ln -s libsane.1.dylib libsane.dylib
rm -rf libtiff.dylib && ln -s libtiff.5.dylib libtiff.dylib
rm -rf libtiffxx.dylib && ln -s libtiffxx.5.dylib libtiffxx.dylib
rm -rf libusb-1.0.dylib && ln -s libusb-1.0.0.dylib libusb-1.0.dylib
rm -rf libusb.dylib && ln -s libusb-0.1.4.dylib libusb.dylib
rm -rf libwine.1.dylib && ln -s libwine.1.0.dylib libwine.1.dylib
rm -rf libwine.dylib && ln -s libwine.1.dylib libwine.dylib
rm -rf libxml2.dylib && ln -s libxml2.2.dylib libxml2.dylib
rm -rf libxslt.dylib && ln -s libxslt.1.dylib libxslt.dylib
rm -rf libtalloc.dylib && ln -s libtalloc.dylib.2 libtalloc.dylib
rm -rf libtalloc.dylib.2 && ln -s libtalloc.dylib.2.0.5 libtalloc.dylib.2
rm -rf libtdb.dylib && ln -s libtdb.dylib.1 libtdb.dylib
rm -rf libtdb.dylib.1 && ln -s libtdb.dylib.1.2.9 libtdb.dylib.1
rm -rf libpng.la && ln -s libpng16.la libpng.la
rm -rf libwbclient.dylib && ln -s libwbclient.dylib.0 libwbclient.dylib


cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/bin"
rm -rf winecpp && ln -s winegcc winecpp
rm -rf wineg++ && ln -s winegcc wineg++
rm -rf libpng-config && ln -s libpng16-config libpng-config

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/include"
rm -rf png.h && ln -s libpng16/png.h png.h
rm -rf pngconf.h && ln -s libpng16/pngconf.h pngconf.h
rm -rf pnglibconf.h && ln -s libpng16/pnglibconf.h pnglibconf.h
rm -rf gphoto2/gphoto2 && ln -s gphoto2 gphoto2/gphoto2

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework/Versions"
rm -rf Current && ln -s A Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework"
rm -rf WBottler && ln -s Versions/Current/WBottler WBottler
rm -rf Resources && ln -s Versions/Current/Resources Resources
rm -rf Headers && ln -s Versions/Current/Headers Headers

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework/Versions"
rm -rf Current && ln -s A Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework"
rm -rf Sparkle && ln -s Versions/Current/Sparkle Sparkle
rm -rf Resources && ln -s Versions/Current/Resources Resources
rm -rf Headers && ln -s Versions/Current/Headers Headers

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework/Versions"
rm -rf Current && ln -s A Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework"
rm -rf Resources && ln -s Versions/Current/Resources Resources
rm -rf Headers && ln -s Versions/Current/Headers Headers
rm -rf KBActionWindow && ln -s Versions/Current/KBActionWindow KBActionWindow

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions"
rm -rf Current && ln -s A Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework"
rm -rf Resources && ln -s Versions/Current/Resources Resources
rm -rf Headers && ln -s Versions/Current/Headers Headers
rm -rf WBottler && ln -s Versions/Current/WBottler WBottler

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions/A/Frameworks/KBActionWindow.framework/Versions"
rm -rf Current && ln -s A Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions/A/Frameworks/KBActionWindow.framework"
rm -rf Resources && ln -s Versions/Current/Resources Resources
rm -rf Headers && ln -s Versions/Current/Headers Headers
rm -rf KBActionWindow && ln -s Versions/Current/KBActionWindow KBActionWindow

echo "Patch: successful"

echo "Script starting."
echo ""

cd $DIR
bash "$DIR/Contents/MacOS/startwine"