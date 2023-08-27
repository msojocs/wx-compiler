# 微信小程序编译器 Linux 版本

# 说明

本项目基于官方 Windows 版本运行逻辑实现。

# 实现思路

1. 使用 IDA 取得伪代码，与函数地址
2. 使用frida配合函数地址，对各个函数进行hook，参见 [frida-wx-compiler](https://github.com/msojocs/frida-wx-compiler)
3. 在Linux下根据伪代码复现逻辑，使用frida来校对函数处理前和处理后的数据是否符合实际