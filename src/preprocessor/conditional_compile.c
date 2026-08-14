//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>

#define VERSION 2  // 1. 定义宏

int main() {
    // 2. 执行语句必须放在函数内
#if VERSION == 1   // 3. 使用正确的宏名称 VERSION
    printf("运行V1版本代码\n");
#elif VERSION == 2
    printf("运行V2版本代码\n");
#else
    printf("未知版本\n");
#endif

    return 0;
}
