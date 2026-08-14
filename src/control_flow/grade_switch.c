#include<stdio.h>

int main(void){
	int point = 0;
	scanf("%d",&point);
	switch(point / 10){
		case 10:case 9:
			printf("优");
			break;
		case 8:
			printf("良");
			break;
		case 7:
			printf("中");
			break;
		case 6:
			printf("及格");
			break;
		case 5:case 4:case 3:case 2:case 1:case 0:
			printf("不及格");
			break;
		return 0;
	}
}


