#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void swap(void *data1, void *data2, size_t size) {
    void *temp = malloc(size);
    if (temp == NULL) {
        return;
    }
    memcpy(temp, data1, size); //将data1指向的内存copy到temp
    memcpy(data1, data2, size); //将data2指向的内存copy到data1
    memcpy(data2, temp, size); //将temp指向的内存copy到data2
    free(temp);
}

int main() {
    int a = 10, b = 20;
    swap(&a, &b, sizeof(int));
    printf("a=%d, b=%d\n", a, b);
    double x = 3.14, y = 9.99;
    swap(&x, &y, sizeof(double));
    printf("x=%f, y=%f\n", x, y);

    struct Point {
        int x;
        int y;
    };
    struct Point p1 = {1, 2}, p2 = {3, 4};
    swap(&p1, &p2, sizeof(struct Point));
    return 0;
}
