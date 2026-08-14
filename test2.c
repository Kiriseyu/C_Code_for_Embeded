#include<stdio.h>

int main(void){
	int num = 0;
	scanf("%d",&num);
	int s,b,j,k;
	s = num / 1000;
	b = num % 1000 / 100;
	j = num % 1000 % 100 / 10;
	k = num % 1000 % 100 % 10;
	printf("千位:%d\n",s);
	printf("百位:%d\n",b);
	printf("十位:%d\n",j);
	printf("个位:%d\n",k);
	return 0;
}
