#include<stdio.h>

int main(void){
	int x,y,z,mid;
	scanf("%d %d %d",&x,&y,&z);
	int max = (x > y ? x : y ) > z ? (x > y ? x : y) : z;
	int min = (x < y ? x : y) < z ? (x < y ? x : y) : z;
	if(max == x && min == y){
		mid = z;
	}else if(max == y && min == z){
		mid = x;
	}else{
		mid = y;
	}
	printf("%d %d %d",min,mid,max);
	return 0;
}
