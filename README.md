# 微信小程序编译器 Linux 版本

# 说明

本项目基于官方 Windows 版本运行逻辑实现。

# 实现思路

1. 使用 IDA 取得伪代码，与函数地址
2. 使用frida配合函数地址，对各个函数进行hook，参见 [frida-wx-compiler](https://github.com/msojocs/frida-wx-compiler)
3. 在Linux下根据伪代码复现逻辑，使用frida来校对函数处理前和处理后的数据是否符合实际

# Electron 运行环境

Linux 模块测试使用 Electron 的 Node 模式（`ELECTRON_RUN_AS_NODE=1`），不创建窗口，也不需要 DISPLAY 或 Xvfb。Electron 固定为 36.6.0。

```bash
pnpm install
# Debian/Ubuntu 缺少运行库时执行
tools/install-electron-dependency.sh

# 构建 Node-API 模块，产物可直接由 Electron 加载
cmake -S . -B build
cmake --build build --target wcc_module wcsc_module

pnpm start wcsc test/spec/issue/137/data/example.json
pnpm start wcc test/spec/wcc/module/data/options-202505012307.json
pnpm run test-electron
```

`pnpm start <wcc|wcsc> <options.json>` 执行一次编译并退出，成功返回 0，参数或编译错误返回非零状态。`pnpm test` 中的 Linux 模块测试同样使用 Electron。

`pnpm --dir test/node-gyp install` 会调用 `test/node-gyp/build.sh`，使用根目录安装的 Electron 版本及其官方头文件构建 V8 原生模块示例。该示例需要支持 C++20 的编译器。编译器本身使用 Node-API，仍沿用现有 CMake 构建流程。

Windows 官方对照测试使用 `test/runner/addon/win/wcc-electron/build/Release` 中的 Electron 版模块，通过本机 Wine 运行 Windows Electron，同样设置 `ELECTRON_RUN_AS_NODE=1`。不再需要 Docker、NW.js、skyline-node、`node.dll`、DISPLAY 或 Xvfb，也不启动 HTTP 服务。

本机需安装 64 位 Wine（包含 `wine` 和 `winepath`）、curl 和 unzip。准备脚本根据已安装的 Electron 版本下载 Windows x64 运行时，校验 SHA-256 后缓存到 `cache/electron-v<版本>-win32-x64`，并检查两个官方模块能否加载。

```bash
# 仅准备 Windows 模块运行环境
test/runner/addon/addon-prepare.sh
pnpm start:windows wcsc test/spec/issue/137/data/example.json
pnpm run test-windows-electron

# 准备完整对照测试，包括测试项目数据
pnpm run test-prepare
```

`pnpm start:windows <wcc|wcsc> <options.json>` 每次启动一个编译进程并在完成后退出，自动转换选项文件和 `cwd` 的 Linux 路径。Wine 下通过临时文件接收标准输出和错误输出，以兼容 Electron 的 Node 流，进程结束后自动清理。

# 测试

测试使用 Vitest，建议使用 Node.js 22.12 或更高的 22.x 版本，与 CI 保持一致。运行前需安装依赖并完成上述构建；完整对照测试还需执行 `pnpm run test-prepare`。

```bash
pnpm test                              # 运行编译器对照测试
pnpm run test-electron                  # 运行 Electron 运行环境测试
pnpm run test-windows-electron          # 运行 Windows Electron/Wine 运行环境测试
pnpm run test:watch                     # 监听并重跑编译器测试
pnpm test test/spec/wcc/module          # 按文件路径筛选
pnpm test -t 'issue - 137'              # 按测试名称筛选
pnpm exec vitest run                    # 运行全部测试
```

Vitest 仅收集 `test/spec/**/*.spec.ts`、`test/runner/electron.spec.js` 和 `test/runner/windows-electron.spec.ts`，不运行 `test/projects` 子模块自带的测试。对照测试共用 Wine 环境，因此测试文件串行执行。
