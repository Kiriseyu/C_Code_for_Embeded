#include<stdio.h>
#include<string.h>

char *mystrcpy(char *dest, const char *src) {
    int i = 0;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

int main() {
    char src[] = "The quick brown fox jumps over the lazy dog";
    char dest[50];
    mystrcpy(dest, src);
    printf("%s\n", src);
    printf("%s\n", dest);
    return 0;
}
