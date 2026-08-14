//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Llist {
    int data; //数据域
    struct Llist *next; //指针域
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
            L = s;
            tail = s;
        } else {
            tail->next = s;
            tail = s;
        }
    }

    Llist *p = L;
    while (p != NULL) {
        //遍历并打印链表
        printf("%d\n", p->data);
        p = p->next;
    }
    while (L != NULL) {
        //销毁链表释放内存
        Llist *temp = L;
        L = L->next;
        free(temp);
    }
    return 0;
}
