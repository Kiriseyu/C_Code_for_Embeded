#include<stdio.h>

int main(void){
	int num,base;
	char c;
	printf("请输入十进制整数:\n");
	scanf("%d",&num);
	printf("需要转换的进制:\n");
	scanf("%d",&base);
	if(num < 0){
		putchar('-');
		num = -num;
	}
	int temp = num;
	int pow = 1;
	while(temp / base != 0){//计算最高位权
		temp /= base;
		pow *= base;
	}
	while(pow != 0){
		int bit = num / pow;//当前最高位
		if(bit < 10){
			putchar(bit + '0');
		}else{
			putchar(bit - 10 + 'A');
		}
		num = num % pow;
		pow /= base;
	}
	return 0;
}
