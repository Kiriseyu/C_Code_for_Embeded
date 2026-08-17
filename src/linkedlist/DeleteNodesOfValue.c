//
// Created by 26790 on 2026/8/17.
//删除链表中等于给定值的所有节点
#include <stdio.h>
#include<stdlib.h>

struct llist_node {
    int val;
    struct llist_node *next;
};

struct llist_node *func(struct llist_node *l, int val) {
    while (l != NULL && l->val == val) {
        //当头节点不为空且值为val,移动头指针并释放旧头节点
        struct llist_node *temp = l;
        l = l->next;
        free(temp);
    }
    if (l == NULL) {
        //如果链表被删空了,直接返回NULL
        return NULL;
    }
    struct llist_node *cur = l;
    //处理中间和尾部节点
    while (cur->next != NULL) {
        if (cur->next->val == val) {
            struct llist_node *temp = cur->next; //跳过该节点
            cur->next = temp->next; //释放内存
            free(temp);
        } else {
            //不是目标节点，指针后移
            cur = cur->next;
        }
    }
    return l;
}
