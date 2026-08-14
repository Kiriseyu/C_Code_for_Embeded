//
// Created by 26790 on 2026/8/11.
//
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define HEADINSERT 1
#define TAILINSERT 2

typedef struct llist_node {
    int data;
    struct llist_node *next;
} LLIST;

int llist_node(LLIST *handler, const void *data, int mode) {
    LLIST *newnode = (LLIST *) malloc(sizeof(LLIST));
    newnode->next = NULL;
    LLIST *p = handler;
    switch (mode) {
        case HEADINSERT:
            break;
        case TAILINSERT:
            while (p->next != handler) {
                p = p->next;
            }
            break;
        default:
            free(newnode);
            return -2;
    }
    newnode->next = p->next; //插入链表
    p->next = newnode;
}


void llist_display(LLIST *handler) {
    LList *cur = NULL;
    for (cur = handler->next; cur != handler; cur = cur->next) {
        printf("%d ", cur->data);
    }
}
