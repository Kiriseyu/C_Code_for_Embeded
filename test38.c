#include<stdio.h>
int max(int a,int b);
int main(void){
	int a = 0, b = 0;
	scanf("%d %d",&a,&b);
	printf("max:%d",max(a,b));
	return 0;
}
int max(int a,int b){
	return a > b ? a : b;
}
