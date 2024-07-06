#! /bin/bash

Xvfb :98 & # Start xvfb on display :98
export DISPLAY=:98
set -x
root_dir=$(cd `dirname $0`/../../.. && pwd -P)
cur_dir=$(cd `dirname $0` && pwd -P)

nw_version="0.55.0"
mkdir -p "$root_dir/cache"
if [ ! -f "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip" ];then
    wget -c -O "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "https://dl.nwjs.io/v0.55.0/nwjs-sdk-v0.55.0-win-x64.zip"
    mv "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip.tmp" "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64.zip"
fi
if [ ! -d "$root_dir/cache/nwjs-sdk-v$nw_version-win-x64" ];then
    cd "$root_dir/cache"
    unzip "nwjs-sdk-v$nw_version-win-x64.zip"
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

docker run -d -i\
    --volume=$root_dir:/workspace\
    --env=USE_XVFB=yes\
    --env=XVFB_SERVER=:95\
    --env=XVFB_SCREEN=0\
    --env=XVFB_RESOLUTION=320x240x8\
    --env=DISPLAY=:95\
    --hostname=DESKTOP-1TV4OA1\
    --name=wine\
    --shm-size=1g\
    --workdir=/home/wineuser\
    --env=TZ=Asia/Shanghai\
    --volume=winehome:/home/wineuser\
    -p 8083:8083\
    scottyhardy/docker-wine:latest\
    wine /workspace/cache/nwjs-sdk-v$nw_version-win-x64/nw.exe
i=0
until $(curl --output /dev/null --silent --head --fail http://127.0.0.1:8083/check); do
    printf '.'
    curl http://127.0.0.1:8083/check
    sleep 1
    let i=$i+1
    if [ $i -ge 50 ];then
        echo "error"
        docker ps -a
        docker logs wine
        exit 1
    fi
done
echo "success"