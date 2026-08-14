#include<stdio.h>

int main(void){
	int a,b;
	printf("请输入要打印边框的行列数:\n例:3-4\n");
	scanf("%d-%d",&a,&b);
	for(int i = 0;i < a;i++){
		for(int j = 0;j < b;j++){
			if((i == 0) || (i == a-1) || (j == 0) || (j == b-1)){
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
