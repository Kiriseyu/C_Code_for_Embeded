#include <math.h>
#include<stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        //1和小于1的不是
        return 0;
    }
    if (n == 2) {
        //2是
        return 1;
    }
    if (n % 2 == 0) {
        //除二以外的偶数都可以排除
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        //3开始，步进2检查奇数
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    int x = is_prime(n);
    printf("%d", x);
    return 0;
}
