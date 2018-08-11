#!/bin/bash

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

cd "$DIR/Contents/Resources/wineprefix/dosdevices"
rm -rf c:

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/lib"
rm -rf libasprintf.dylib
rm -rf libexslt.dylib
rm -rf libfreetype.dylib
rm -rf libgettextlib.dylib
rm -rf libgettextpo.dylib
rm -rf libgettextsrc.dylib
rm -rf libgphoto2.dylib
rm -rf libgphoto2_port.dylib
rm -rf libgsm.dylib
rm -rf libintl.dylib
rm -rf libjpeg.dylib
rm -rf liblcms2.dylib
rm -rf libltdl.dylib
rm -rf libmpg123.dylib
rm -rf libpng.dylib
rm -rf libpng16.dylib
rm -rf libsane.dylib
rm -rf libtiff.dylib
rm -rf libtiffxx.dylib
rm -rf libusb-1.0.dylib
rm -rf libusb.dylib
rm -rf libwine.1.dylib
rm -rf libwine.dylib
rm -rf libxml2.dylib
rm -rf libxslt.dylib
rm -rf libtalloc.dylib
rm -rf libtalloc.dylib.2
rm -rf libtdb.dylib
rm -rf libtdb.dylib.1
rm -rf libpng.la
rm -rf libwbclient.dylib


cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/bin"
rm -rf winecpp
rm -rf wineg++
rm -rf libpng-config

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Resources/include"
rm -rf png.h
rm -rf pngconf.h
rm -rf pnglibconf.h
rm -rf gphoto2/gphoto2

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework/Versions"
rm -rf Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/WBottler.framework"
rm -rf WBottler
rm -rf Resources
rm -rf Headers

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework/Versions"
rm -rf Current

cd "$DIR/Contents/Resources/Wine.bundle/Contents/Frameworks/Sparkle.framework"
rm -rf Sparkle
rm -rf Resources
rm -rf Headers

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework/Versions"
rm -rf Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/KBActionWindow.framework"
rm -rf Resources
rm -rf Headers
rm -rf KBActionWindow

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions"
rm -rf Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework"
rm -rf Resources
rm -rf Headers
rm -rf WBottler

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions/A/Frameworks/KBActionWindow.framework/Versions"
rm -rf Current

cd "$DIR/Contents/Resources/Winetricks.app/Contents/Frameworks/WBottler.framework/Versions/A/Frameworks/KBActionWindow.framework"
rm -rf Resources
rm -rf Headers
rm -rf KBActionWindow
