//进制转换
#include <stdio.h>

//十转N
void decToN(int num, int base) {
    if (num == 0) {
        printf("0");
    }
    char res[32];
    int i = 0;
    while (num != 0) {
        int temp = num % base;
        if (temp < 10) {
            res[i] = temp + '0';
        } else {
            res[i] = (temp - 10) + 'A';
        }
        i++;
        num /= base;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", res[j]);
    }
}

//N转十
int nToDec(char *nums, int base) {
    int res = 0;
    for (int i = 0; nums[i] != '\0'; i++) {
        int digit = 0;
        if (nums[i] >= '0' && nums[i] <= '9') {
            digit = nums[i] - '0';
        } else if (nums[i] >= 'A' && nums[i] <= 'Z') {
            digit = nums[i] - 'A' + 10;
        } else if (nums[i] >= 'a' && nums[i] <= 'z') {
            digit = nums[i] - 'a' + 10;
        }
        res = res * base + digit;
    }
    return res;
}

int main() {
    int num, base;
    char str[32];
    scanf("%d %d", &num, &base);
    decToN(num, base);
    printf("\n");
    scanf("%s %d", str, &base);
    printf("%d\n", nToDec(str, base));
}