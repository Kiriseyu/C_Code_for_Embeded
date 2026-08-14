#include<stdio.h>

int main(void){
	int x = 1,y;
	y = (++x > 5) && (++x < 10);
	printf("x = %d, y = %d",x,y);
}
