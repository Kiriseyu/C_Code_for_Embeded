#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    switch (c) {
        case 'a':
       	case 'A':
	       	printf("钟薛高 10元钱\n");
	       	break;
        case 'b':
       	case 'B':
	       	printf("须尽欢 12元钱\n");
	       	break;
        case 'c':
       	case 'C':
	       	printf("小布丁 1元钱\n");
	       	break;
        case 'd':
       	case 'D':
	       	printf("雪莲 0.5元钱\n");
	       	break;
        default: printf("输入无效\n");
    }
    return 0;
}
