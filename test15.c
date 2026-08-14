#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void){
	int h = 0,m = 0,s = 0;
	for(;;){
		s++;
		usleep(1000000);
		system("clear");
		printf("%d-%d-%d\n",h,m,s);
		if(s == 60){
			m++;
			s = 1;
			printf("%d-%d-%d\n",h,m,s);
			if(m == 60){
				h++;
				m = 1;
				printf("%d-%d-%d\n",h,m,s);
				if(h == 24){
					h = 0;
					return 0;
				}
			}
		}
	}
	return 0;
}
