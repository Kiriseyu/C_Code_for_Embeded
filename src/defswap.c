//
// Created by 26790 on 2026/8/6.
//
#include<stdio.h>

#define SWAP(a,b){int temp = (a);(a) = (b);(b) = temp;}

int main() {
    int a = 5;
    int b = 10;
    SWAP(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

