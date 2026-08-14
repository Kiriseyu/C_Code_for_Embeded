#include <stdio.h>
#include <stdlib.h>
//
// Created by 26790 on 2026/8/11.
//
typedef struct node {
    int data;
    struct node *next;
} Lnode;

int main(void) {
    Lnode *L = NULL; //初始化链表的头指针
    Lnode *tail = NULL; //初始化链表的尾指针
    int n; //链表节点总数
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        Lnode *p = malloc(sizeof(Lnode)); //临时指针接收用户输入的数据
        scanf("%d", &p->data);

        if (L == NULL) {
            L = p;
            tail = p;
        } else {
            tail->next = p;
            tail = p;
        }
    }
}
