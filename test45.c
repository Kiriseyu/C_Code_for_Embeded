#include<stdio.h>

void itob(int dec,int target){
	char c[] = "0123456789ASCDEF";//映射字符
	int res[32];//存结果
	int i = 0;
	if(dec == 0){//防止输入为0
		printf("0\n");
		return;
	}
	while(dec > 0){
		res[i] = dec % target;//取余得到最低位的值
		dec /= target;//去掉已处理的低位
		i++;//位置<<
	}
	for(int j = i-1;j >= 0;j--){//逆序输出
		printf("%c",c[res[j]]);
	}
	printf("\n");
}

int main(void){
	int n = 0;
	printf("请输入十进制整数:\n");
	scanf("%d",&n);
	printf("十进制转二进制\n");
	itob(n,2);
	printf("十进制转八进制\n");
	itob(n,8);
	printf("十进制转十六进制\n");
	itob(n,16);
	return 0;
}
