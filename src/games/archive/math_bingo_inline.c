#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
	int n = 0,a = 0,b = 0,input = 0,point = 0;
	char s;
	int res;
	printf("Math Bingo -> Start Game:\n");
	srand(getpid());
	for(int m = 0;m < 10;m++){
		a = rand() % 100;
		b = rand() % 100;
		n = rand() % 5;	
			switch(n){
			       	case 0:
					s = '+';
					res = a + b;
					break;
				case 1:
					s = '-';
					res = a - b;
					break;
				case 2:
					s = '*';
					res = a * b;
					break;
				case 3:
					s = '/';
					while(b == 0){
						b = rand() % 1000; 
					}
					res = a / b;
					break;
				case 4:
					s = '%';
					while(b == 0){
						b = rand() % 1000;
					}
					res = a % b;
					break;
			}
			printf("%d %c %d = ?\n",a,s,b);
			scanf("%d",&input);
			if(input == res){
				printf("Bingo! + 10分\n");
				point += 10; 
			}else{
				printf("ERROR! ==> %d",res);
				printf("当前总分: %d\n",point);
				point = 0;
			}
	}
			return 0;
}
