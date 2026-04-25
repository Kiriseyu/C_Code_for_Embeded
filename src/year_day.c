#include<stdio.h>

//年月日 - 打印是这一年的第几天
int byd(int year) {
    int dayb = 0;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        dayb = 1;
    } else {
        dayb = 0;
    }
    return dayb;
}

int main(void) {
    int year, month, day, res = 0;
    int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int months_[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &year, &month, &day);
    if (byd(year) == 1) {
        for (int i = 1; i < month; i++) {
            res += months_[i];
        }
        res += day;
        printf("%d", res);
    }
    if (byd(year) == 0) {
        for (int i = 1; i < month; i++) {
            res += months[i];
        }
        res += day;
        printf("%d", res);
    }
    return 0;
}
