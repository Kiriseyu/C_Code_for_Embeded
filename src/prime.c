#include<stdio.h>

int main(void) {
    int count = 0, j;
    for (int i = 10000; i <= 20000; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (i == j) {
            printf("%d\n", i);
            count++;
            printf("[ %d ]\n", count);
        }
    }
    return 0;
}
