#include <stdio.h>

int main(){
	int score;
	scanf("%d",&score);
	if(score < 0 || score > 100){
		return 1;
	}
	switch(score / 10){
		case 10:
		case 9:
			printf("优秀\n");
			break;
		case 8:
			printf("良\n");
		case 7:
			printf("中\n");
		case 6:
			printf("及格\n");
		default:
			printf("不及格");
	}
	return 0;
}
