//
// Created by 26790 on 2026/8/17.
//
#include<stdio.h>

struct llist_node {
    int val;
    struct llist_node *next;
};

struct llist_node *func(struct llist_node *l) {
    struct llist_node *prev = NULL;
    struct llist_node *curr = l;
    struct llist_node *next_temp = NULL;

    while (curr != NULL) {
        next_temp = curr->next; //保存下一个节点防止断链
        curr->next = prev; //反转操作的核心：反转指向
        prev = curr; //指针整体后移，prev前进到当前节点
        curr = next_temp; //curr前进到原来的下一个节点
    }
    return prev;
}
