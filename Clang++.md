# Clang++ 基础

> 注: Clang++ 是更为先进的 C++ 编译器。学习过程中使用 clang 进行 cpp 代码的编译，此处用于记录 Clang 的使用经验

> 注: Clang++ 与 Clang 的区域基本就是 gcc & g++ 的区别。 Clang 主要用于处理 C, Clang++ 主要用于处理 C++

> 注: 本文使用版本:

```bash
  > clang++ -v
  Homebrew clang version 12.0.1
  Target: x86_64-apple-darwin20.6.0
  Thread model: posix
  InstalledDir: /usr/local/opt/llvm/bin
```

## 基础编译

- 编译单个文件: `clang++ <filename.cpp> -o <execname> -std=c++2a`
