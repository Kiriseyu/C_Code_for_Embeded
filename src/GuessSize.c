#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
    int n = 0;
    srand(getpid());
    int num = rand() % 1000 + 1;
    printf("guess the randnum\n");
    while (n != num) {
        printf("guess num\n");
        scanf("%d", &n);
        if (n > num) {
            printf("num is greater than guess num\n");
        } else if (n < num) {
            printf("num is less than guess num\n");
        } else {
            printf("guess num is equal to guess num\n");
        }
    }
    return 0;
}
