#ifdef BASE_CONVERT_H
#define BASE_CONVERT_H

#include<stdio.h>
#include<string.h>
void dec_to_str(int num,int base.char buf[]);
int str_to_dec(const char str[],int base);
void base_to_base(const char in[],int in_base,int out_base,char out[]);
#endif
