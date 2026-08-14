#include<stdio.h>

int main(void){
	int a = 0,b = 0;
	a++ && b++ ? printf("Hello\n") : printf("World\n");
	a++ && ++b ? printf("Hello\n") : printf("World\n");
	++a && b++ ? printf("Hello\n") : printf("World\n");
	++a && ++b ? printf("Hello\n") : printf("World\n");

	a++ || b++ ? printf("Hello\n") : printf("World\n");
	a++ || ++b ? printf("Hello\n") : printf("World\n");
	++a || b++ ? printf("Hello\n") : printf("World\n");
	++a || ++b ? printf("Hello\n") : printf("World\n");
	printf("a = %d, b = %d",a,b);
	return 0;
}
