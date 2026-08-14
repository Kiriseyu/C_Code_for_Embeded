//
// Created by 26790 on 2026/8/14.
//
#include"stack.h"

int main(void) {
    int data[] = {11, 22, 33, 44, 55, 66, 77, 88, 99}; //数据源
    int i = 0; //循环变量
    int ret = 0; //接收函数返回值
    for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        stack_push(data[i]); //入栈
        if (ret != 0) {
            //判断入栈是否失败
            printf("stack_push failed\n");
            break; //栈满跳出循环
        }
    }
    stack_display(); //遍历栈
    ret = stack_pop(&save); //出栈
    if (ret != 0) {
        printf("Stack Is Empty!\n");
    } else {
        printf("save = %d\n", save); //打印出栈的数据
    }
    stack_display(); //遍历栈
    stack_push(9527); //入栈
    stack_display(); //遍历栈
    return 0;
}
