#include<stdio.h>

int main(void){
	int a,b,c;
	printf("请输入三个值判断是否能构成三角形:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a + b > c && a + c > b && b + c > a){
		if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("构成直角三角形");
		}else if(a == b && a == c){
			printf("构成等边三角形");
		}else if(a == b|| b == c || a == c){
			printf("构成等腰三角形");
		}else{
			printf("构成三角形");
		}
	}else{
		printf("不构成三角形");
	}
	return 0;
}
