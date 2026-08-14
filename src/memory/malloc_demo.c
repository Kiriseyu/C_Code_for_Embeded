//
// Created by 26790 on 2026/8/14.
//
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int *p = NULL;
    p = malloc(sizeof(*p));
    if (p = NULL) {
        printf("malloc failed\n");
        return -1;
    }
    *p = 100;
    printf("%d\n %p\n", *p, p);
    free(p);
    p = NULL;
    return 0;
}
