#!/bin/bash
SHELL_FOLDER=$(dirname $(readlink -f "$0"))
echo "Install path is $INSTALL_PATH"
if [ -d 'build' ]; then
echo 'Have folder build'
rm -r "build"
fi
if [ -d 'linux' ]; then
echo 'Have folder build'
rm -r "linux"
fi
mkdir build
cd build
cmake ..
make -j7
make install

