#!/bin/bash
set -ex

root_dir=$(cd `dirname $0`/.. && pwd -P)
mkdir -p $root_dir/cache
if [ ! -f "$root_dir/cache/x86_64-cross-tools-loongarch64-binutils_2.45-gcc_15.1.0-glibc_2.42.tar.xz" ]; then
    cd $root_dir/cache
    wget -c https://github.com/loongson/build-tools/releases/download/2025.08.08/x86_64-cross-tools-loongarch64-binutils_2.45-gcc_15.1.0-glibc_2.42.tar.xz
fi
if [ ! -d "$root_dir/cache/cross-tools" ]; then
    cd $root_dir/cache
    tar -xf x86_64-cross-tools-loongarch64-binutils_2.45-gcc_15.1.0-glibc_2.42.tar.xz
fi

export PATH="$root_dir/cache/cross-tools/loongarch64-unknown-linux-gnu/bin:$root_dir/cache/cross-tools/bin:$PATH"
cd $root_dir
rm -rf build/*
mkdir -p build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=$root_dir/tools/toolchain.cmake
cmake --build . --config Release --target wcsc
cmake --build . --config Release --target wcc
cmake --build . --config Release --target wcc_module
cmake --build . --config Release --target wcsc_module
readelf -s ./wcc  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcsc  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcc_module.node  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcsc_module.node  | grep -oP "GLIBC.*" | sort | uniq