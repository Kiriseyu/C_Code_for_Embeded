#include<stdio.h>

int main(void){
	char ino[20];
	scanf("%s",ino);
	char *p = ino;
	int num = 0;
	while(*p != '\0'){
		num = num * 10;
		num += *p - '0';
		p++;
	}
	printf("%d",num);
	return 0;
}
