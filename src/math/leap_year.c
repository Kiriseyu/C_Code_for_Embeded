#include<stdio.h>

int main(void){
	int in;
	printf("请输入年份:");
	scanf("%d",&in);
	if((in % 4 == 0 && in % 100 != 0) || in % 400 == 0){
		printf("当前是闰年\n");
	}else{
		printf("当前不是闰年\n");
	}
	return 0;
}
