#include<stdio.h>

int main() {
    int n = 0;
    int num;
    scanf("%d", &n);
    while (n != 0) {
        num = n % 10;
        printf("%d\n", num);
        n /= 10;
    }
    return 0;
}
