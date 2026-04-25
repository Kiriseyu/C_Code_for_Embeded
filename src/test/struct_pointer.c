//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node data = {1, NULL};
    struct node *head = &data;
    printf("%d\n", head->data); //struct使用->访问结构体成员
}
