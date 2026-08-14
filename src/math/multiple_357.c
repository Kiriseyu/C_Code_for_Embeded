#include<stdio.h>

int main(void){
	int n = 0;
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0 && n % 7 == 0){
		printf("Woc 三相之力!\n是3-5-7的倍数\n");
	}else{
		printf("不是\n不是就是不是,换一个\n");
	}
	return 0;
}
