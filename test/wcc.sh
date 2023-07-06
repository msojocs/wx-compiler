#!/bin/bash
cd /mnt/d/Work/WeChatProjects/miniprogram-demo/miniprogram
/root/github/wx-compiler/build/wcc "--config-path" "/mnt/d/Work/disassembly/wcc-exec/wcc/cmd1.txt" > /root/github/wx-compiler/test/wcc_linux.json
/mnt/d/Work/disassembly/wcc-exec/wcc/wcc.exe "--config-path" "d:/Work/disassembly/wcc-exec/wcc/cmd1.txt" > /root/github/wx-compiler/test/wcc_win.json
