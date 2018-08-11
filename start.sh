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
ln -sf ../drive_c c:

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/lib"
ln -sf libasprintf.0.dylib libasprintf.dylib
ln -sf libexslt.0.dylib libexslt.dylib
ln -sf libfreetype.6.dylib libfreetype.dylib
ln -sf libgettextlib-0.18.2.dylib libgettextlib.dylib
ln -sf libgettextpo.0.dylib libgettextpo.dylib
ln -sf libgettextsrc-0.18.2.dylib libgettextsrc.dylib
ln -sf libgphoto2.2.dylib libgphoto2.dylib
ln -sf libgphoto2_port.0.dylib libgphoto2_port.dylib
ln -sf libgsm.1.0.13.dylib libgsm.dylib
ln -sf libintl.8.dylib libintl.dylib
ln -sf libjpeg.8.dylib libjpeg.dylib
ln -sf liblcms2.2.dylib liblcms2.dylib
ln -sf libltdl.7.dylib libltdl.dylib
ln -sf libmpg123.0.dylib libmpg123.dylib
ln -sf libpng16.dylib libpng.dylib
ln -sf libpng16.la libpng.la
ln -sf libpng16.16.dylib libpng16.dylib
ln -sf libsane.1.dylib libsane.dylib
ln -sf libtalloc.dylib.2 libtalloc.dylib
ln -sf libtalloc.dylib.2.0.5 libtalloc.dylib.2
ln -sf libtdb.dylib.1 libtdb.dylib
ln -sf libtdb.dylib.1.2.9 libtdb.dylib.1
ln -sf libtiff.5.dylib libtiff.dylib
ln -sf libtiffxx.5.dylib libtiffxx.dylib
ln -sf libusb-1.0.0.dylib libusb-1.0.dylib
ln -sf libusb-0.1.4.dylib libusb.dylib
ln -sf libwbclient.dylib.0 libwbclient.dylib
ln -sf libwine.1.0.dylib libwine.1.dylib
ln -sf libwine.1.dylib libwine.dylib
ln -sf libxml2.2.dylib libxml2.dylib
ln -sf libxslt.1.dylib libxslt.dylib


cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/bin"
ln -sf winegcc winecpp
ln -sf winegcc wineg++
ln -sf libpng16-config libpng-config

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/include"
ln -sf libpng16/png.h png.h
ln -sf libpng16/pngconf.h pngconf.h
ln -sf libpng16/pnglibconf.h pnglibconf.h
ln -sf gphoto2 gphoto2/gphoto2

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework/Versions"
ln -sf A Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework"
ln -sf Versions/Current/WBottler WBottler
ln -sf Versions/Current/Resources Resources
ln -sf Versions/Current/Headers Headers

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework/Versions"
ln -sf A Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework"
ln -sf Versions/Current/Sparkle Sparkle
ln -sf Versions/Current/Resources Resources
ln -sf Versions/Current/Headers Headers

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework/Versions"
ln -sf A Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework"
ln -sf Versions/Current/Resources Resources
ln -sf Versions/Current/Headers Headers
ln -sf Versions/Current/KBActionWindow KBActionWindow

echo "Patch: successful"

echo "Script starting."
echo ""

cd $DIR
bash "$DIR/Contents/MacOS/startwine"


