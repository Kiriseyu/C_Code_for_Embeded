//
// Created by 26790 on 2026/8/10.
//
#include <stdio.h>
//start end value
void itoa(int *start, int *end, int value) {
    for (; start != end; ++start, ++value) {
        *start = value;
    }
}

int main() {
    int arr[5];
    itoa(arr, arr + 5, 10);
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
