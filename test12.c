#include<stdio.h>

int main(void){
	char ini;
	printf("请选择你的英雄:\n<a\\A>\n<b\\B>\n<c\\C>\n<d\\D>\n");
	scanf("%c",&ini);
	switch(ini){
		case 'a':case 'A':
			printf("c语言开发,月薪8K");
			break;
		case 'b':case 'B':
			printf("嵌入式单片机开发,月薪10K");
			break;
		case 'c':case 'C':
			printf("Linux系统应用开发,月薪12K");
			break;
		case 'd':case 'D':
			printf("Linux内核驱动开发,月薪18K");
			break;
		return 0;
	}
}
