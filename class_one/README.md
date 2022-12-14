# the way to compile

```
// compile phase 
clang -ccc-print-phases .\helloword.c
```

```
// preprocessing stage
clang -E helloworl.c
```

```
// lexical analysis
clang -fmodules -fsyntax-only -Xclang -dump-tokens .\helloworld.c

// Gramma analysis
clang -fmodules -fsyntax-only -Xclang -ast-dump .\helloworld.c
```

```
// Intermediate code generation
clang -S -fobjc-arc -emit-llvm .\helloword.c

@ 全局标识
% 局部标识
alloca 开辟空间
align 内存对齐
i32 32个bit, 4个字节
store 写入内存
load 读取数据
call 调用函数
ret 返回
```

```
// generate assembly code
clang -S -fobjc-arc .\helloword.ll -o .\helloword.s
```

tips: 目标文件和可执行文件都由机器语言指令组成。但是目标文件只包含编译器为你编写的代码翻译的机器语言代码，可执行文件中还包含你编写程序中使用的库函数和启动代码的机器代码。

```
// generate object file
clang -fmodules -c .\helloword.s -o .\helloword.o
```

```
// generate executable file and link
clang .\helloword.o -o .\helloword.exe
```