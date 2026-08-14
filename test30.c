#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void){
	int n = 0,h,m,s,nums;
	printf("准备停车:\n<1>\n");
	scanf("%d",&n);
	while(1){
		for(h = 0;h< 24;h++){
			for(m = 0;m < 60;m++){
				for(s = 0;s < 60;s++){
					if(h <= 3){
						nums = h * 30;
					}else{
						nums = 3 * 30 + (h - 3)* 50;
					}
					printf("当前暂留时长:%d时-%d分-%d秒\n",h,m,s);
					printf("当前需缴费用:%d元\n",nums);
					sleep(1);
					system("clear");
				}
			}
		}
	}
	return 0;
}
