#include<stdio.h>

void func(int n) {
    if (n / 10 == 0) {
        printf("%d ", n);
        return;
    }
    printf("%d ", n % 10);
    func(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
