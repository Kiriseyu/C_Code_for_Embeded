#include<stdio.h>


int main(void) {
    int a, b, c;
    for (int i = 1; i < 1000; i++) {
        c = i % 10;
        b = (i / 10) % 10;
        a = i / 100;
        if (a * 100 + b * 10 + c == a * a * a + b * b * b + c * c * c)
            printf("%d是水仙花数\n", i);
    }
    return 0;
}
