#include<stdio.h>

int main(void){
	int i,j;
	for(i = 20000;i <= 30000;i++){
		for(j = 2;j <= i;j++){
			if(i % j == 0){
				break;
			}
		}
		if(j == i){
			printf("%d是素数 \n",i);
		}
	}
	return 0;
}
