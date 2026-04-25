//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Llist {
    int data;
    struct List *next;
} Llist;

int main(void) {
    Llist *L = NULL; //空链表的节点
    Llist *tail = NULL; //尾结点
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        //新建节点并读入数据
        Llist *s = (Llist *) malloc(sizeof(Llist)); //不手动free会一直存在
        scanf("%d", &s->data);
        s->next = NULL;

        //接入链表
        if (L == NULL) {
            L = tail = s;
        } else {
            tail->next = s;
            tail = s;
        }
    }
}
