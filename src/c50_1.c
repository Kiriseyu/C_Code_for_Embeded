#include<stdio.h>

void reverse(int n) {
    int nums[5];
    int num = 0;
    while (n != 0) {
        nums[num++] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < num; i++) {
        printf("%d", nums[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    reverse(n);
    return 0;
}
