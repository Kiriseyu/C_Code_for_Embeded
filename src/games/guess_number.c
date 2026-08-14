#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
	int n = 0;
	int sum = 0;
	int count = 0;
	srand(getpid());
	sum = rand() % 1000;
	while(1){
		printf("请说出你的答案:\n");
		scanf("%d",&n);

		if(n > sum){
			printf("猜大了 <<<<<<<<<<<<<<<<<<<<<<<\n");
			count++;
		}else if(n < sum){
			printf("猜小了 >>>>>>>>>>>>>>>>>>>>>>>\n");
			count++;
		}else{
			printf(">>>>>>>>>>>>>>>  猜对了  <<<<<<<<<<<<<<\n");
			printf("           本轮猜测共猜了%d次\n",count);
			break;
		}
	}
	return 0;
	
}
