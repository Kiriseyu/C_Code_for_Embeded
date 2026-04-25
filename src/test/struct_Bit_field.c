//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>

//定义一个状态寄存器结构体，一共占用一个字节(8 bit)
struct Flags {
    unsigned int error: 1; //错误
    unsigned int warning: 1; //警告
    unsigned int mode: 4; //模式
    unsigned int unused: 3; //未用
};

//在  结构体成员变量的声明 后 + : [位数];
//位域 类型只能是 int unsigned int 或 char
//一个位域不能跨越底层类型的边界，如底层是32位unsigned int,
//所有位域总长度不能超过32位，否则编译器会自动将其分配到下一个32位空间

//位域在内存中的排列顺序高度依赖编译器和硬件架构(大小端)
//不适合用作跨平台网络通信或严格的硬件协议解析

int main() {
    struct Flags reg = {0};
    reg.error = 1;
    reg.warning = 0;
    reg.mode = 5;
    printf("Reserved:%u\n", reg.error);
    printf("Reserved:%u\n", reg.warning);
    printf("Reserved:%u\n", reg.mode);
    printf("Size of Flags: %zu bytes\n", sizeof(struct Flags));
    return 0;
}

//输出: 4 bytes (注意：虽然只用了8个bit，但编译器通常会按int对齐，所以占4字节)
