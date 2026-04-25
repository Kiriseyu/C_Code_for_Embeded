#include <stdio.h>

void sum(int n) {
    int nums = 0;
    for (int i = 1; i <= n; i++) {
        nums += i;
    }
    printf("%d\n", nums);
}

int main() {
    int n;
    scanf("%d", &n);
    sum(n);
    return 0;
}
