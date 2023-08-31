#!/bin/bash

root_dir=$(cd `dirname $0`/.. && pwd -P)

cd /mnt/d/Work/WeChatProjects/miniprogram-1

# list="cmd1 cmd2"
# for cmd in $list;
# do
#     echo $cmd
#     /root/github/wx-compiler/build/wcc "--config-path" "/mnt/d/Work/disassembly/wcc-exec/wcc/config/$cmd.txt" > /root/github/wx-compiler/test/wcc_linux.json
#     /mnt/d/Work/disassembly/wcc-exec/wcc/wcc.exe "--config-path" "d:/Work/disassembly/wcc-exec/wcc/config/$cmd.txt" > /root/github/wx-compiler/test/wcc_win.json
# done;
filename="WeChatProjects/miniprogram-1/wcc/2535335225445086ae78aa14d79fe1d5"
/root/github/wx-compiler/build/wcc "--config-path" "/mnt/d/Work/$filename" > /root/github/wx-compiler/test/wcc_linux.json
/mnt/d/Work/disassembly/wcc-exec/wcc/wcc.exe "--config-path" "d:/Work/$filename" > /root/github/wx-compiler/test/wcc_win.json
