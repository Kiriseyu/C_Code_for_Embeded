#include<stdio.h>
#include<string.h>

int main(void){
	int input = 0;
	char buf[5];
	int l = 0,r = strlen(buf);
	scanf("%d",&input);
	snprintf(buf,sizeof(buf),"%d",input);
	if((input % 4 == 0 && input % 100 != 0) || input % 400 == 0){
		printf("当前年份是闰年\n");
	}else{
		printf("当前年份是平年\n");
	}
	while(l < r){
		if(buf[l] == buf[r]){
			l++;
			r--;
		}else{
			printf("不是回文数\n");
			return 0;
		}
	}
		printf("是回文数\n");
	return 0; 
}
