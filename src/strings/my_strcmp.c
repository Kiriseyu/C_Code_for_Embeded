//
// Created by 26790 on 2026/8/5.
//
int mystrcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return s1[i] - s2[i];
}

//逐字符字典序比较两个字符串
int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *(unsigned char *) s1 - *(unsigned char *) s2;
}
