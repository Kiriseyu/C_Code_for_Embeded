#include "base_converter.h"

	//十进制转字符
	void dec_to_str(int num,int base,char buf[]){
		//输入数字将转换结果base存到buf[]数组中
		const char table[] = "0123456789abcdef";
		//创建一个映射表
		int idx = 0;
		//数组下标
		if(num == 0){
			buf[idx++] = '0';//buf写入0
			buf[idx] = '\0';//结束
			return;
		}
		while(num > 0){
			int res = num % base;//取余进制
			buf[idx++] = table[res];
			//找对应字符填入
			num = num / base;
		}
		buf[idx] = '\0';//结束
		//反转字符串[余数是反着的]
		int len = strlen(buf);
		for(int i = 0; i < len / 2; i++){//对称交换
			char temp = buf[i];
			buf[i] = buf[len - 1 -i];
			buf[len - 1 - i] = temp;
		}
	}
	//进制字符串转十进制
	int str_to_dec(const char str[],int base){
		int nums = 0;
		for(int i = 0;str[i] != '\0';i++){
			int val;//当前字符
			char c = str[i];
			if(c >= '0' && c <= '9'){
				val = c - '0';//转成数字
			}else if(c >= 'a' && c <= 'f'){
				val = c - 'a' + 10;
			}else if(c >= 'A' && c <= 'F'){
				val = c - 'A' + 10;
			}else{
				return -1;
			}
			nums = nums * base + val;
			//核心:结果 = 结果 * 进制 + 当前位
		}
		return nums;
	}
	void base_to_base(const char in[],int in_base,int out_base,char out[]){
		int num = str_to_dec(in,in_base);//原进制转十进制
		dec_to_str(num,out_base,out);//十进制转目标进制
	}

