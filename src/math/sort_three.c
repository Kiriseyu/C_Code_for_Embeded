#include<stdio.h>

void res(int x, int y, int z) {
    int max = (x > y ? x : y) > z ? (x > y ? x : y) : z;
    int min = (x < y ? x : y) < z ? (x < y ? x : y) : z;
    int mid = (x + y + z) - max - min;
    printf("%d,%d,%d\n", min, mid, max);
}

int main(void) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    res(x, y, z);
    return 0;
}