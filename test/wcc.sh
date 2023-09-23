#!/bin/bash

root_dir=$(cd `dirname $0`/.. && pwd -P)

cd /mnt/d/Work/WeChatProjects/issue/91/build

# list="cmd1 cmd2"
# for cmd in $list;
# do
#     echo $cmd
#     /root/github/wx-compiler/build/wcc "--config-path" "/mnt/d/Work/disassembly/wcc-exec/wcc/config/$cmd.txt" > /root/github/wx-compiler/test/wcc_linux.json
#     /mnt/d/Work/disassembly/wcc-exec/wcc/wcc.exe "--config-path" "d:/Work/disassembly/wcc-exec/wcc/config/$cmd.txt" > /root/github/wx-compiler/test/wcc_win.json
# done;
filename="issue/91/cmd/case1-cmd.txt"
echo "linux:"
/root/github/wx-compiler/build/wcc "--config-path" "/mnt/d/Work/WeChatProjects/$filename" > /root/github/wx-compiler/test/wcc_linux.json

echo "windows:"
/mnt/d/Work/disassembly/wcc-exec/wcc/wcc.exe "--config-path" "d:/Work/WeChatProjects/$filename" > /root/github/wx-compiler/test/wcc_win.json
