#include<stdio.h>

int main(void){
	printf("  1 2 3 4 5 6 7 8 9 A B C D E F\n");
	for(int n = 0;n < 15;n++){
		printf("%X ",n+1);
		for(int i = 0;i < 15;i++){
			printf("+ ");
		}
		printf("\n");
	}
	return 0;
}
