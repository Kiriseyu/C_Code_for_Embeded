//
// Created by 26790 on 2026/8/5.
//
//实现一个数的阶乘

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
