#include<stdio.h>

int main(void){
	int a = 0,b = 0;
	int ven = 0;
	scanf("%d%d",&a,&b);
	ven = a;
	a = b;
	b = ven;
	printf("%d %d",a,b);
	return 0;
}
