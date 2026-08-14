#include<stdio.h>

void init(int *box, int cpu, int size) {
    int i = 0, num = 1, sum = 0; //箱子数量、理论容量、已用总和
    for (i = 0; i < size; i++) {
        num = 1 << i;
        if (sum + num > cpu) {
            box[i] = cpu - sum;
            break;
        }
        box[i] = num;
        sum += num;
    }
}

void print(const int *box, int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        printf("[%d] %d\n", i, box[i]);
    }
}

void takit(const int *box, int size, int take) {
    int i = 0;
    for (i = size - 1; i >= 0; i--) {
        if (box[i] <= take) {
            printf("[%d] %d\n", i, box[i]);
            take -= box[i];
        }
    }
}

int main() {
    int box[10] = {0}; //总箱数
    int cpu = 1000; //cpu上限
    int size = sizeof(box) / sizeof(box[0]);
    int take = 0; //要拿的数量
    init(box, cpu, size); //初始化
    print(box, size);
    scanf("%d", &take);
    takit(box, size, take);
    return 0;
}
