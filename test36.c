#include<stdio.h>

int main(void){
	int a,b,c,d;
	int nums = 0;
	for(a = 1;a < 10;a++){
		for(b = 1;10 * a + 4 * b < 99;b++){
			for(int c = 1;10 * a + 4 * b + 2 * c < 100;c++){
				d = 100 - 10 * a - 4 * b - 2 * c;
				if(d >= 1){
					nums++;
					printf("第%d种:%d张50元%d张20元%d张10元%d张5元,共%d张\n",nums,a,b,c,d,a+b+c+d);
				}
			}
		}
	}
	printf("一共有%d种换法\n",nums);
	return 0;
}
