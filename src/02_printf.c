#include<stdio.h>
int main(){
    /*
     十进制        int a = 567;printf("%d",a);
     十六进制无符号    int a = 255;printf("%x",a);
     十进制无符号     inta = 65;printf("%u",a);
     单字符        char a = 65;printf("%c",a);
     字符串        printf("%s","ABC");
     指数浮点数      float a = 567.789; printf("%e",a);
     小数浮点数      float a = 567.789; printf("%c",a);
     */
    // 1. 基础数值类型
    int myInt = 100;
    float myFloat = 3.14159;
    double myDouble = 12345.6789;
    // 2. 字符与字符串
    char myChar = 'A';
    char myString[] = "Hello C";
    // 3. 指针
    int *myPointer = &myInt;
    // 整数
    printf("整数 (int): %d\n", myInt);
    // 浮点数：默认保留6位小数，不足补0
    printf("浮点 (float): %f\n", myFloat);
    // 浮点数：保留2位小数 (四舍五入)
    printf("浮点 (保留2位): %.2f\n", myFloat);
    // 双精度
    printf("双精度 (double): %lf\n", myDouble);
    // 字符
    printf("字符 (char): %c\n", myChar);
    // 字符串
    printf("字符串 (string): %s\n", myString);
    // 指针地址
    printf("指针地址 (pointer): %p\n", (void*)myPointer);
    // 进制转换演示
    printf("十六进制 (hex): %x\n", myInt);
    return 0;
}