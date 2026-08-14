#include <stdio.h>

int main(void){
	int point;
	scanf("%d",&point);
	if(point >= 90){
		printf("A");
	}else if(point >= 60 && point <= 89){
		printf("B");
	}else if(point < 60){
		printf("C");
	}else{
		printf("please enter again");
	}
	return 0;
}
