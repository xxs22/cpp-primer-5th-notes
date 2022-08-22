# C++ 开发环境搭建

> Update Time: 2022.08.22

本人使用 Mac, 先用 Mac 系统做记录。

## MacOS 下开发环境搭建

> 本地系统: MacOS11.6.7 - Intel Core i7

#### 系统环境 -- clang/clang、cmake

* clang/clang++: Mac 系统下，终端内执行: `xcode-select --install`，然后以此点击 "安装"、"同意" 即可
* cmake: 使用 homebrew 安装即可: `brew install cmake`

#### 代码编辑 -- VSCODE

> 鉴于 vscode 版本与插件版本更新太快，下文不列出详细版本，选择最新版安装即可

##### 1. 安装插件:

- C/C++: vscode 语言支持
- Better C++ Syntax: 更好的 C++ 语法支持
- CMake: CMakefile 语法支持、代码提示
- CMake Tool: CMake 全功能支持
- Generate Doxygen Comments in VS Code: 便捷注释生成器
- C/C++ Runner: C/C++ 代码运行配置
- C/C++ Themes: C/C++ 相关主题配置

##### 2. 插件配置

> VsCode 的所有插件基本都是安装即可使用(插件使用了默认配置)，更多时候自定义配置的插件才能发挥更好的作用

- 开启自定义配置: 项目目录下新建 `.vscode` 目录，目录下新建 `settings.json`;
- 插件配置:
  - CMake: 安装之后只需添加执行路径即可: 
  ```json
  { "cmake.cmakePath": "/usr/local/bin/cmake" }
  ```


#### 参考文档

- [MacOS 下 C++开发环境搭建](https://github.com/EricOo0/zhifengwei.blog/blob/main/MacOS%E4%B8%8BC%2B%2B%E5%BC%80%E5%8F%91%E7%8E%AF%E5%A2%83%E6%90%AD%E5%BB%BA.md)
