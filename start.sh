#!/bin/bash

echo "..........:|:|:---*---:|*|:.........."
echo "- ACE Stream HD for macOS."
echo "- Made by github.com/und3fined"
echo "- Original source github.com/und3fined/ace-stream-hd"
echo ""
echo "Script starting (Ctrl + C for stop script)."
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

bash "$DIR/Contents/MacOS/startwine"
