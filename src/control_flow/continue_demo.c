#include<stdio.h>

int main(void){
	int i, j;
	for(i = 0;i < 5;i++){
		for(j = 0;j < 5;j++){
			if(i == 2){
				continue;
			}
			printf("[%d %d] ",i,j);
		}
		printf("\n");
	}
	return 0;
}
