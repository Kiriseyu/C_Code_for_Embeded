//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>

union feature {
    //全成员共用一片空间
    //大小取决于最大成员且要满足内存对齐原则

    //应用场景为节省内存开销以及数据类型的转换和拆分
    // 判断系统的大小端存储
    int a;
    char b;
};

int main(void) {
    union feature tmp;
    tmp.a = 1;
    //1在内存中最低位是1，其余是0
    //如果b(char)读取到1，说明低地址存的是低字节(小端格式)
    if (tmp.b == 1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
    return 0;
}
