#!/bin/bash

# 代码里不要启动gui
docker run -it --volume=.:/c --env=USE_XVFB=yes --env=XVFB_SERVER=:95 --env=XVFB_SCREEN=0 --env=XVFB_RESOLUTION=320x240x8 --env=DISPLAY=:95 --rm --hostname=DESKTOP-1TV4OAG --name=wine --shm-size=1g --workdir=/home/wineuser --env=TZ=Asia/Shanghai --volume=winehome:/home/wineuser -p 8083:8083 scottyhardy/docker-wine:latest wine /c/nwjs-sdk-v0.55.0-win-x64/nw.exe

