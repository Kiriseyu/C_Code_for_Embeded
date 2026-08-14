#include<stdio.h>

int main(void){
	int year,month,day;
	printf("快快输入年月日我给你算算:(空格分割)\n");
	scanf("%d %d %d",&year ,&month ,&day);
	int days_leap[]  = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int days_common[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		//闰年2月有29天全年366天,平年2月28天全年366天
		if(month > 1){
			for(int i = 1; i <= month;i++){
				day += days_leap[i];
			}
			printf("是%d年的第%d天\n",year,day);
		}else{
			printf("是%d年的第%d天\n",year,day);
		}
	}else{
		if(month > 1){
			for(int j = 1;j <= month;j++){
				day += days_common[j];
			}
			printf("是%d年的第%d天\n",year,day);
		}else{
			printf("是%d年的第%d天\n",year,day);	
		}
	}
	return 0;
}
