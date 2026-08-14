#include<stdio.h>

void itob(int a){
	if(a == 0){
		printf("0");
		return;
	}
	if(a < 0){
		printf("-");
		a = -a;
	}
	if(a / 2 > 0){
		itob(a / 2);
	}
	printf("%d",a % 2);
}
void itoo(int a){
	if(a == 0){
		printf("0");
		return;
	}
	if(a < 0){
		printf("-");
		a = -a;
	}
	if(a / 8 > 0){
		itoo(a / 8);
	}
	printf("%d",a % 8);
}
void itox(int a){
	if(a == 0){
		printf("0");
		return;
	}
	if(a < 0){
		printf("-");
		a = -a;
	}
	if(a / 16 > 0){
		itox(a / 16);
	}
	int r = a % 16;
	if(r < 10){
		printf("%d",r);
	}else{
		printf("%c",'A'+ r - 10);
	}
}
int main(void){
	int a;
	scanf("%d",&a);
	itob(a);
	printf("\n");
	itoo(a);
	printf("\n");
	itox(a);
	printf("\n");
	return 0;
}
