#!/bin/sh

SOURCE="phi.c"
BINARY="phi"

rm -f "$BINARY"

gcc "$SOURCE" -o "$BINARY"

./"$BINARY"

