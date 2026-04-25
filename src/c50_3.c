#include <stdio.h>

void count(int *nums) {
    int count = 0;
    int num = 0;
    for (int i = 0; i < 20; i++) {
        if (nums[i] > 0) {
            count++;
            num += nums[i];
        }
    }
    printf("正数的个数为:%d\n", count);
    printf("正数之和为:%d\n", num);
}

int main() {
    int n;
    int nums[20];
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n);
        nums[i] = n;
    }
    count(nums);
    return 0;
}
