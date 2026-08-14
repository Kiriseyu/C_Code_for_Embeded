#include<stdio.h>

void input(int arr[],int n){
	printf("请输入10个值:\n");
	for(int i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
}
void average(int arr[],int n,int *res){

	for(int i = 0;i < n;i++){
		*res += arr[i];
	}
	printf("平均值为:\n");
	printf("%d\n",*res /= n);
}
void smaller(int arr[],int n,int res){
	printf("小于的值有:\n");
	for(int i = 0;i < n;i++){
		if(arr[i] < res){
			printf("%d\n",arr[i]);
		}
	}
}
int main(void){
	int n = 10,res = 0;
	int nums[n];
	input(nums,n);
	average(nums,n,&res);
	smaller(nums,n,res);
	return 0;
}
