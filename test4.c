#include<stdio.h>
#include<string.h>

int main(void){
	int n = 0;
	char buf[5];
	scanf("%4d",&n);
	snprintf(buf,sizeof(buf),"%d",n);
	if(buf[0] == buf[3] && buf[1] == buf[2]){
		printf("对了,是回文");
	}else{
		printf("不对不对");
	}
	return 0;
}
