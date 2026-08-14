//
// Created by 26790 on 2026/8/14.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
    int id;
    char name[10];
    int math;
} st;

int main(void) {
    st *p = malloc(sizeof(*p));
    if (p = NULL)return -1;
    p->id = 1;
}
