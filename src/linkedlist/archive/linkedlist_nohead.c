//
// Created by 26790 on 2026/8/12.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct LNode {
    int data;
    struct LNode *next;
} lnode;

lnode *headInsert(lnode **L, int data) {
    lnode *new_node = (lnode *) malloc(sizeof(lnode)); //申请空间给新节点
    new_node->data = data; //值传递到新节点的data数据域中

    new_node->next = L; //新节点的next指向原先的链表头
    return new_node; //新节点自己成为头节点
}

lnode *tailInsert(lnode **L, int data) {
    lnode *new_node = (lnode *) malloc(sizeof(lnode));
    new_node->data = data;
    new_node->next = NULL; //尾节点next为null,不循环

    if (L == NULL) {
        return new_node; //若链表为空则新节点就是头节点
    }
    lnode *p = L; //p指针指向当前头节点-寻找当前的尾节点
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = new_node;
    return L; //返回原来的L
}

void display(lnode *L) {
    lnode *p = L;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void delete_node(lnode **L, int target) {
    if (L == NULL) {
        return;
    }
    lnode *cur = L; //当前
    lnode *prev = NULL; //上一个
    while (cur != NULL) {
        if (cur->data == target) {
            //如果当前指针值等于目标值
            if (prev == NULL) {
                //第一个节点情况
                *L = cur->next;
                free(cur);
                return;
            } else {
                prev->next = cur->next;
                free(cur);
                return;
            }
        }
        prev = cur;
        cur = cur->next;
    }
}

int main(void) {
    lnode *L = NULL; //初始头节点为NULL
}
