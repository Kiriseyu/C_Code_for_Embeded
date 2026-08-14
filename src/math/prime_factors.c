#include <stdio.h>

int prime(int n) {
    //判断一个数是否是质数
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void fac(int n) {
    printf("因数：");
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void factor(int n) {
    //因数
    printf("质因数：");
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            //因数
            if (prime(i)) {
                printf("%d ", i); //给出质数
            }
        }
    }
    printf("\n");
}

void composite(int n) {
    //合数
    printf("合因数：");
    for (int i = 4; i <= n; i++) {
        if (n % i == 0) {
            //因数
            if (!prime(i)) {
                printf("%d ", i); //不是质数
            }
        }
    }
    printf("\n");
}

int main(void) {
    int input = 0;
    scanf("%d", &input);
    fac(input);
    factor(input);
    composite(input);
    return 0;
}
