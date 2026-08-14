#include<stdio.h>

int main(void){
	int point;
	scanf("%d",&point);
	if(point >= 90 && point <= 100){
		printf("优");
	}else if(point >= 80 && point <= 89){
		printf("良");
	}else if(point >= 70 && point <= 79){
		printf("中");
	}else if(point >= 60 && point <= 69){
		printf("及格");
	}else if(point >= 0 && point <= 59){
		printf("不及格");
	}
	return 0;
}
