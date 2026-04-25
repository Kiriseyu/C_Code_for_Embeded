//
// Created by 26790 on 2026/8/10.
//
struct A {
    char a; //1 byte
    int b; // 4 byte
};

//sizeof(struct A) = 8
//因为结构体内存会自动对齐

//可使用#pragma pack(n)强制对齐
#pragma pack(1);
struct B {
    char c;
    long d;
};

#pragma pack(push)//保存当前默认对齐状态
#pragma pack(1)
struct C {
    int a;
    short b;
};
#pragma pack(pop)//恢复之前的默认对齐状态，避免影响后面的代码
