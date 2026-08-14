#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n == 0 || n == 1){
		printf("%d",n);
		return 0;
	}else if(n < 0){
		return 0;
	}
	int ans = 0;
	for(int i = 1;i < n+1;i++){
	        ans += i;
	}
	printf("%d",ans);
	return 0;
}
