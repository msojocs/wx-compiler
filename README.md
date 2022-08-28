# 微信小程序编译器 Linux 版本

# 说明

本项目在官方 Linux 简版的基础上，实现了适用于 Linux 的懒加载版本。

# 实现思路

## 实现语言

由于项目中用到了 `NodeJS` ，所以为了避免多余的环境依赖，使用 `NodeJS` 实现。

## 实现方案

经过查找，官方有开放出一个 npm 包 [miniprogram-compiler](https://www.npmjs.com/package/miniprogram-compiler)；

此 npm 包中包含了 Linux 的原生实现，但没有懒加载功能；

懒加载实现是对比 windows 版本 与 Linux 简版 的生成代码，找出其中的规律；

按照规律，将 Linux 版本代码修改为符合 windows 版本结构的代码。

```
.
├── generatemd5.js
├── nodejs                        --- 预览编译器
├── node_modules
├── package.json
├── package-lock.json
├── README.md
├── test
├── wcc_node                      --- 可视化编译器
├── wcc_node_old                  --- 可视化编译器 - 旧
├── wcsc_node_old                 --- 可视化编译器 - 旧
└── wine                          --- windows版本编译器
```