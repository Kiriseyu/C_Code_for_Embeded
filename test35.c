#include<stdio.h>

int main(void){
	int n = 0,num = 0;
	printf("输入自然数:\n");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		num += i;
	}
	printf("%d",num);
	return 0;
}
