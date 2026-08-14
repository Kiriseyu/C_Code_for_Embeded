#include<stdio.h>

int main(void){
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	printf("MaxValue:%d",max);
	return 0;
}
