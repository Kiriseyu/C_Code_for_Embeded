#include<stdio.h>

int main(){
	int n;
       	scanf("%d",&n);
	int l = 10000;
	if(l / n > 9){
		printf("请输入五位数");
		return 0;
	}else{
		int fv,fo,th,tw,on;
		on = n / 10000;
		tw = n % 10000 / 1000;
		th = n % 10000 % 1000 / 100;
	        fo = n % 10000 % 1000 % 100 / 10;
		fv = n % 10000 % 1000 % 100 % 10;
		int ans = on + tw * 10 + th * 100 + fo * 1000 + fv * 10000;
	printf("%d",ans);
	}
	return 0;
}
