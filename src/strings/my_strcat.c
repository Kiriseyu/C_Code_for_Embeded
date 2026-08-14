//
// Created by 26790 on 2026/8/6.
//
#include<stdio.h>
//将源字符拼接到目标字符的末尾
char mystrcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

//dest - Destination[目标]
//src - Source[源]
