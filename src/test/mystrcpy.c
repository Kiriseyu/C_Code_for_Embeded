//
// Created by 26790 on 2026/8/5.
//
char *mystrcpy(char *dest, const char *src) {
    char *p = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return p;
}

//将原始字符串完整复制到目标缓冲区【但是strcpy不会检查目标缓冲区的大小
//容易造成缓冲区溢出】
