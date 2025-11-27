#!/bin/bash

root_dir=$(cd `dirname $0`/.. && pwd -P)

docker run --rm -i \
    -v "$root_dir:/workspace" \
    -e WINE=${WINE:-false} \
    -e LOCAL_USER_ID=${DOCKER_UID:-1000} \
    -e LOCAL_GROUP_ID=${DOCKER_GID:-1000} \
    jiyecafe/wechat-devtools-build:v3 \
    /workspace/docker/docker-entrypoint

