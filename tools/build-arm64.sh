#!/bin/bash
set -ex

root_dir=$(cd `dirname $0`/.. && pwd -P)

TOOLCHAIN_VERSION="14.2.rel1"
TOOLCHAIN_ARCHIVE="arm-gnu-toolchain-${TOOLCHAIN_VERSION}-x86_64-aarch64-none-linux-gnu.tar.xz"
TOOLCHAIN_URL="https://developer.arm.com/-/media/Files/downloads/gnu/${TOOLCHAIN_VERSION}/binrel/${TOOLCHAIN_ARCHIVE}"
TOOLCHAIN_DIR="$root_dir/cache/cross-tools-arm64"

mkdir -p $root_dir/cache
if [ ! -f "$root_dir/cache/${TOOLCHAIN_ARCHIVE}" ]; then
    cd $root_dir/cache
    wget -c "${TOOLCHAIN_URL}"
fi
if [ ! -d "${TOOLCHAIN_DIR}" ]; then
    cd $root_dir/cache
    tar -xf "${TOOLCHAIN_ARCHIVE}"
    mv "arm-gnu-toolchain-${TOOLCHAIN_VERSION}-x86_64-aarch64-none-linux-gnu" "cross-tools-arm64"
fi

export PATH="${TOOLCHAIN_DIR}/bin:$PATH"
cd $root_dir
rm -rf build/*
mkdir -p build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=$root_dir/tools/toolchains/toolchain-arm64.cmake -DTARGET_ARCH=arm64
cmake --build . --config Release --target wcsc
cmake --build . --config Release --target wcc
cmake --build . --config Release --target wcc_module
cmake --build . --config Release --target wcsc_module
readelf -s ./wcc  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcsc  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcc_module.node  | grep -oP "GLIBC.*" | sort | uniq
readelf -s ./wcsc_module.node  | grep -oP "GLIBC.*" | sort | uniq
