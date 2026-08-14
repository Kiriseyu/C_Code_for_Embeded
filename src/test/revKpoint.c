//
// Created by 26790 on 2026/8/13.
//
#include<stdio.h>

struct Llist {
    int val;
    struct Llist *next;
};

struct Llist *func(struct Llist *handler, int k) {
    struct Llist *fast = handler;
    struct Llist *slow = handler;

    while (k--) {
        //快指针走k步
        if (fast == NULL) {
            return NULL;
        }
        fast = fast->next;
    }
    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
