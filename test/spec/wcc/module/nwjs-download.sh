#! /bin/bash

set -e
root_dir=$(cd `dirname $0`/../../../.. && pwd -P)

nw_version="0.55.0"

if [ ! -f "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip" ];then
    wget -c -O "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "https://dl.nwjs.io/v0.55.0/nwjs-v0.55.0-win-x64.zip"
    mv "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip"
fi

if [ ! -d "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64" ];then
    cd "$root_dir/cache"
    unzip "nwjs-sdk-v$nw_version-win-x64.zip"
fi