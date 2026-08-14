#include<stdio.h>

int main(void) {
    int n = 0, res[32], i = 0, j = 0;
    scanf("%d", &n);
    while (n % 10 != 0) {
        res[i] = n % 10;
        n /= 10;
        i++;
    }
    while (i != 0) {
        printf("%d", res[j]);
        j++;
        i--;
    }
    return 0;
}
