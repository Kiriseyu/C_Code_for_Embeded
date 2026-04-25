//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>

// 1. #pragma: 强制1字节对齐
#pragma pack(push, 1)
struct Packet {
    char a;
    int b;
};
#pragma pack(pop)

// 2. #error: 环境检查
#if !defined(__x86_64__) && !defined(_M_X64)
#error 仅支持64位系统
#endif

// 3. #warning: 废弃提示
#warning 此功能已弃用

// 4. #line: 伪造源码位置/绕过报错的中间文件直指源文件简化调试过程
#line 999 "fake.c"

int main() {
    printf("Size: %zu\n", sizeof(struct Packet));
    return 0;
}
