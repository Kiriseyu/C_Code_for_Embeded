#include<stdio.h>

int main(void){
	for(int i = 0;i < 10;i++){
		for(int j = 0;j < 10;j++){
			for(int s = 0;s < 10;s++){
				if(i*i*i + j*j*j + s*s*s == i*100+j*10+s){
					printf("数字%d是水仙花数\n",i*100+j*10+s);
				}
			}
		}
	}
	return 0;
}
