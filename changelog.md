## 🌈 v0.1.6 / 2025-11-

🚀Features
- 架构：添加龙芯支持

## 🌈 v0.1.5 / 2025-05-02

🚀Features

- Node模块：使用NAPI重写

## 🌈 v0.1.4 / 2025-05-01

🐞 Bug Fixes
- `WXSS::CSSTreeLib::CSSSyntaxTree::RenderCode`: Arch linux会崩溃.(数组访问越界)

## 🌈 v0.1.3 / 2025-02-17

🐞 Bug Fixes

- `WXML::Rewrite::RewriteImg`: 输出了多余的右括号。（上个版本修改不正确）

## 🌈 v0.1.2 / 2025-02-16

🐞 Bug Fixes

- `WXML::RPX::accept`: 数组出现负数的问题。
- `WXML::Rewrite::RewriteImg`: 输出了多余的右括号。

## 🌈 v0.1.1 / 2024-08-10

🐞 Bug Fixes

- `WXML::DOMLib::Parser::Error`: 标签未闭合的异常导致崩溃，感谢 [@yutent](https://github.com/yutent) ( [issue ref](https://github.com/msojocs/wechat-web-devtools-linux/issues/115) )

## 🌈 v0.1.0 / 2024-07-13

🚀Features

- 编译器：支持 `--wxs` 参数

## 🌈 v0.0.9 / 2024-07-07

🚀Features

- 编译器：新增nwjs的模块编译器

## 🌈 v0.0.8 / 2024-06-30

🚀Features

- 版本：更新至 -> 3c3eb3ac0ec1f85e5a72a9e7608a770a  wcc.exe, 472fef6c6e0f6b3217e3d3dfa85188b2  wcsc.exe

## 🌈 v0.0.5 / 2023-09-23

🐞 Bug Fixes

- `WXMLDom::RenderNonDefine`: 内部逻辑错误，感谢 @Silentdoer [issue ref](https://github.com/msojocs/wechat-web-devtools-linux/issues/91)

## 🌈 v0.0.4 / 2023-08-31

🐞 Bug Fixes

- `WXML::Rewrite::RewriteImg`: 变量赋值的错误
- `WXSS::CSSTreeLib::RewriteSelectorRule::MarkGood`: 比较字符串错误

🚀Features

- feat: 添加新的`wcsc`的测试用例

## 🌈 v0.0.3 / 2023-08-31

🐞 Bug Fixes

- `NSASTParse::make_call_or_just_expression`: 修复括号缺失的错误
- `NSASTParse::ast_obj_op`: 修复比较字符串地址错误
- `NSASTParse::ast_call`: 修复忘记赋值的问题

🚧 Others
- 优化发生异常时，没有输出的问题

## 🌈 v0.0.2 / 2023-08-31

🚀Features
- feat: 添加非懒加载模式的支持

🐞 Bug Fixes
- fix: 修复一些逻辑错误
