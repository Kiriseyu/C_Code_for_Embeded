#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	int n = 0;
	printf("请输入倒计时秒数:\n");
	scanf("%d",&n);
	for(int i = n;i >= 0;i--){
		for(int k = 100;k >= 0;k--){
			system("clear");
			printf("%d:%d\n",i,k);
			usleep(10000);
		}
	}
	return 0;
}
