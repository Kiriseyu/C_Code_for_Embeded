//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int length;
    char data[]; //柔性数组，不占用结构体本身的大小
} Packet;

int main(void) {
    //但在分配内存时要把柔性数组的空间也算进去
    Packet *p = malloc(sizeof(Packet) + 100);
    p->length = 100;
}
