#! /bin/sh

build_dir="./build"

if [ ! -d $build_dir ]
then
    mkdir build
fi

cmake -S . -B build
cmake --build build
./sv_app