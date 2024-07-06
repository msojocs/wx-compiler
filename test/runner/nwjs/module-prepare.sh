#! /bin/bash

set -ex
root_dir=$(cd `dirname $0`/../../.. && pwd -P)
cur_dir=$(cd `dirname $0` && pwd -P)

nw_version="0.55.0"
mkdir -p "$root_dir/cache"
if [ ! -f "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip" ];then
    wget -c -O "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "https://dl.nwjs.io/v0.55.0/nwjs-sdk-v0.55.0-win-x64.zip"
    mv "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip"
fi
if [ ! -f "$root_dir/cache/nwjs-sdk-v$nw_version-linux-x64.tar.gz" ];then
    wget -c -O "$root_dir/cache/nwjs-sdk-v$nw_version-linux-x64.tar.gz.tmp" "https://dl.nwjs.io/v0.55.0/nwjs-sdk-v0.55.0-linux-x64.tar.gz"
    mv "$root_dir/cache/nwjs-sdk-v$nw_version-linux-x64.tar.gz.tmp" "$root_dir/cache/nwjs-sdk-v$nw_version-linux-x64.tar.gz"
fi

if [ ! -d "$root_dir/cache/nwjs-sdk-v$nw_version-linux-x64" ];then
    cd "$root_dir/cache"
    tar -zxf "nwjs-sdk-v$nw_version-linux-x64.tar.gz"
fi

rm -rf "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64/package.nw"
cp -r "$cur_dir/package.nw" "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64"

docker run -d -it\
    --volume=$root_dir:/workspace\
    --env=USE_XVFB=yes\
    --env=XVFB_SERVER=:95\
    --env=XVFB_SCREEN=0\
    --env=XVFB_RESOLUTION=320x240x8\
    --env=DISPLAY=:95\
    --rm\
    --hostname=DESKTOP-1TV4OAG\
    --name=wine\
    --shm-size=1g\
    --workdir=/home/wineuser\
    --env=TZ=Asia/Shanghai\
    --volume=winehome:/home/wineuser\
    -p 8083:8083\
    scottyhardy/docker-wine:latest\
    wine /workspace/cache/nwjs-sdk-v$nw_version-win-x64/nw.exe

sleep 10
curl http://localhost:8083
exit 0
# curl http://localhost:8083/close
# docker stop wine