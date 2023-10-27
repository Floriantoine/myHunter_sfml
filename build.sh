#!/bin/bash

WORK_DIR="$(dirname "$(readlink -f "$0")")"
BUILD_DIR="$WORK_DIR/build"

mkdir -p "$BUILD_DIR"

if [ $1 = "-t" ]; then
    cmake -S "$WORK_DIR" -B "$BUILD_DIR" -DBUILD_TESTS=ON 
else 
    cmake -S "$WORK_DIR" -B "$BUILD_DIR" -DBUILD_TESTS=OFF
fi
cmake --build "$BUILD_DIR" 