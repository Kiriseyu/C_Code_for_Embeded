#include<stdio.h>

int main(void){
	printf("sizeof(char) = %ld\n",sizeof(char));
	printf("sizeof(short) = %ld\n",sizeof(short));
	printf("sizeof(long) = %ld\n",sizeof(long));
	printf("sizeof(float) = %ld\n",sizeof(float));
	printf("sizeof(double) = %ld\n",sizeof(double));
	printf("--------------------------------------\n");
	printf("sizeof(char *) = %ld\n",sizeof(char *));
	printf("sizeof(short *) = %ld\n",sizeof(short *));
	printf("sizeof(long *) = %ld\n",sizeof(long *));
	printf("sizeof(float *) = %ld\n",sizeof(float *));
	printf("sizeof(double *) = %ld\n",sizeof(double *));

	return 0;
}
