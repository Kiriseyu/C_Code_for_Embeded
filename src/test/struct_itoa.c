//
// Created by 26790 on 2026/8/10.
//
#include<stdio.h>

struct User {
    int id;
    char name[20];
};

void user_increment(struct User *usr) {
    usr->id++;
    //显式实现自增逻辑
}

void itoa_struct(struct User *start, struct User *end, struct User value) {
    for (; start != end; ++start) {
        *start = value; //结构整体赋值
        user_increment(&value); //调用自增函数
    }
}
