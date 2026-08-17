#include<stdio.h>

void bubbleSort(int *p, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (p[j] > p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int *p, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (p[min] > p[j]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = p[i];
            p[i] = p[min];
            p[min] = temp;
            printf(p, size);
        }
    }
}

void insertionSort(int *p, int size) {
    for (int i = 1; i < size; i++) {
        int k = p[i]; //待插入元素
        int l = i - 1; //已排序的最后一个元素
        while (l >= 0 && p[l] > k) {
            p[l + 1] = p[l];
            l--;
        }
        p[l + 1] = k;
    }
}

int main(void) {
    int n;
    int arr[] = {2, 8, 9, 0, 4, 36, 23, 64, 225, 436, 682, 345, 223, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    scanf("%d", &n);
    switch (n) {
        case 1:
            bubbleSort(arr, size);
            break;
        case 2:
            insertionSort(arr, size);
            break;
        case 3:
            selectionSort(arr, size);
            break;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
