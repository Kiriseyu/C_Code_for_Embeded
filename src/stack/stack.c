//
// Created by 26790 on 2026/8/14.
//
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 6

int stack_arr[STACK_SIZE]; //全局数组用作顺序栈
int stack_ind; //全局变量当作栈顶元素的标记

static int isfull(void) {
    return stack_ind == STACK_SIZE;
}

static int isempty(void) {
    return !(stack_ind);
}

int stack_push(int data) {
    if (isfull()) {
        return -1;
    }
    stack_arr[stack_ind++] = data; //客户数据进行入栈操作
    return 0;
}

int stack_pop(int *data) {
    if (isempty()) {
        return -1;
    }
    *data = stack_arr[--stack_ind]; //stack_ind标记的数据出栈
    return 0;
}

void stack_display(void) {
    int i = stack_ind;
    while (i--) {
        printf("  %d\n", stack_arr[i]);
    }
    printf("-----------------\n\n");
}
