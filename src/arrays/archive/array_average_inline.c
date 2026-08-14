#include<stdio.h>

int main(void){
	int n = 0;
	int nums[10];
	int sum = 0;
	int average = 0;
	for(int i = 0;i < 10;i++){
		scanf("%d",&n);
		nums[i] = n;
	}
	for(int k= 0;k < 10;k++){
		sum += nums[k];
		average = sum / 10;
	}
	printf("平均值为:%d\n",average);
	for(int l = 0;l < 10;l++){
		if(nums[l] < average){
			printf("小于平均分的值为:%d \n",nums[l]);
		} 
	}
	return 0;
}
