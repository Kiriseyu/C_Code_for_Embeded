//
// Created by 26790 on 2026/8/10.
//
#include<stdio.h>
#include<stdint.h>

//判断字节序
int check_endian() {
    int a = 1;
    return *(char *) &a; //返回1为小端，0为大端
}

//字节流读取小端32位整数
uint32_t read_le32(uint8_t *buf) {
    return buf[0] | (buf[1] << 8) | (buf[2] << 16) | (buf[3] << 24);
}

//手动实现32位主机转网络字节序(大端)
uint32_t my_htonl(uint32_t host_val) {
    return ((host_val & 0xFF000000) >> 24) |
           ((host_val & 0x00FF0000) >> 8) |
           ((host_val & 0x0000FF00) << 8) |
           ((host_val & 0x000000FF) << 24);
}
