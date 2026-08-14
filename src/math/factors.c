#include <stdio.h>

void func(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
    printf("\n");
}

int main(void) {
    int n = 0;
    scanf("%d", &n);
    func(n);
    return 0;
}
