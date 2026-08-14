#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

void gamestart(void){
	system("clear");
	printf("Math Bingo ->>>>> \n\nNext, there will be ten questions.\n Try your best to get the highest score!\n\n");
}
void notZero(int *b){
	while(*b == 0){
		*b = rand() % 1000;
	}
}
void getRand(int *a,int *b,int *op){
	*a = rand() % 1000;
	*b = rand() % 1000;
	*op = rand() % 5;
}
int makeTen(int a,int b,int op,char *p){
	int res;
	switch(op){
		case 0:
			*p = '+';
			res = a + b;
			break;
		case 1:
			*p = '-';
			res = a - b;
			break;
		case 2:
			*p = '*';
			res = a * b;
			break;
		case 3:
			*p = '/';
			notZero(&b);
			res = a / b;
			break;
		case 4:
			*p = '%';
			notZero(&b);
			res = a % b;
			break;
	}
	return res;
}
void bingo(int input,int res,int *point){
	if(input == res){
		printf("BingGo! + 10分");
		*point += 10;
	}
	printf("当前总分:%d \n\n",*point);
}

int main(void){
	int a = 0,b = 0,input = 0,point = 0,op = 0;
	char s;
	int res;
	gamestart();
	srand(getpid());
	for(int i = 1;i <= 10;i++){
		getRand(&a,&b,&op);
		res = makeTen(a,b,op,&s);
		printf("第%d题:%d  %c  %d  =  ?\n",i,a,s,b);
		scanf("%d",&input);
		bingo(input,res,&point);		
	}
	printf("\nGame Over >>>\n最终得分:%d\n",point);
	return 0;
}
