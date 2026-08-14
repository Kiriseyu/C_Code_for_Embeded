#include<stdio.h>

int main(void){
	int j=1,k=0,l=0;
	while(j < 10){
		k = 0;
		while(k < 10){
			l = 0;
			while(l < 10){
				if(j*j*j+k*k*k+l*l*l == j*100+k*10+l){
					printf("当前%d是水仙花数\n",j*100+k*10+l);
				}
				l++;
			}
			k++;
		}
		j++;
	}
	
	return 0;
}
