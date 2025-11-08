#! /bin/bash

set -ex

Xvfb :98 & # Start xvfb on display :98
export DISPLAY=:98
root_dir=$(cd `dirname $0`/../../.. && pwd -P)
cur_dir=$(cd `dirname $0` && pwd -P)

nw_version="0.55.0"
mkdir -p "$root_dir/cache"
if [ ! -f "$root_dir/cache/node.exe" ];then
    wget -c -O "$root_dir/cache/node.exe.tmp" "https://github.com/msojocs/skyline-node/releases/download/v16.4.0-1/node.exe"
    mv "$root_dir/cache/node.exe.tmp" "$root_dir/cache/node.exe"
fi
if [ ! -f "$root_dir/cache/node.dll" ];then
    wget -c -O "$root_dir/cache/node.dll.tmp" "https://github.com/msojocs/skyline-node/releases/download/v16.4.0-1/node.dll"
    mv "$root_dir/cache/node.dll.tmp" "$root_dir/cache/node.dll"
fi

docker_start(){
    docker run -d -i\
        --rm\
        --volume=$root_dir:/workspace\
        --env=USE_XVFB=yes\
        --env=XVFB_SERVER=:95\
        --env=XVFB_SCREEN=0\
        --env=XVFB_RESOLUTION=320x240x8\
        --env=DISPLAY=:95\
        --hostname=DESKTOP-1TV4OA1\
        --name=wine\
        --shm-size=1g\
        --workdir=/workspace/cache\
        --env=TZ=Asia/Shanghai\
        -p 8083:8083\
        scottyhardy/docker-wine\
        wine node.exe ../test/runner/addon/win/main.js

    i=0
    until $(curl --output /dev/null --silent --head --fail http://127.0.0.1:8083/check); do
        printf '.'
        curl http://127.0.0.1:8083/check
        sleep 1
        let i=$i+1
        if [ $i -ge 20 ];then
            echo "error"
            docker ps -a
            docker logs wine
            return 1
        fi
    done
    return 0
}

for ((j=0; j<5; j++));
do
    if docker_start; then
        printf "Docker started successfully.\n"
        break
    elif [[ $j -eq 4 ]]; then
        printf "Failed to start Docker after 5 attempts.\n"
        docker ps -a
        docker logs wine
        exit 1
    fi
    sleep 1
done
echo "success"