//
// Created by 26790 on 2026/8/5.
//杨辉三角
#include <stdio.h>
#include<stdlib.h>
//递归写法

int pascal(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    }
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

void print_pascal(int n) {
    //动态分配二维数组内存
    int **triangle = (int **) malloc(n * sizeof(int *));
    if (triangle == NULL) {
        printf("malloc failed\n");
        return;
    }
    //为每一行分配内存
    for (int i = 0; i < n; i++) {
        triangle[i] = (int *) malloc(n * sizeof(int));
        if (triangle[i] == NULL) {
            printf("malloc failed\n");
            for (int k = 0;k < i;k++) {
                free(triangle[k]);
            }
            return;
        }
    }
    //计算并填充杨辉三角
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            }else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    //格式化打印
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            printf("  ");
        }
        for (int j = 0;j <= i;j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
    //释放内存
    for (int i = 0;i < n;i++) {
        free(triangle[i]);
    }
    free(triangle);
}
