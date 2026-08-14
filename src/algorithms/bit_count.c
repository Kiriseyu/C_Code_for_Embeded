#include <stdio.h>

int count_findOne(unsigned int i) {
    int count = 0;
    while (i) {
        i &= (i - 1);
        count++;
    }
    return count;
}

int main() {
    unsigned int num;
    scanf("%d", &num);
    printf("输入数字二进制表示中1的个数为:%d", count_findOne(num));
    return 0;
}
