#include <stdio.h>
int main(){
    printf("lll%10drrr\n",1234);
    printf("lll%-10drrr\n",1234);
    printf("lll%3drrr\n",1234);
    printf("lll%10.2fdrrr\n",1234.567);
    printf("lll%-10.2fdrrr\n",1234.567);
    printf("lll%5.2fdrrr\n",1234.567);

    int val = 123; float pi = 3.14159; int hex = 255; // 定义测试变量
    printf("--- 域宽与对齐 (m, -) ---\n"); // 分割线
    printf("|%5d|\n", val);    // m: 宽度5，右对齐(默认)，左侧补空格
    printf("|%-5d|\n", val);   // -: 宽度5，左对齐，右侧补空格
    printf("|%2d|\n", val);    // m<实际: 宽度2小于实际3，按实际输出
    printf("--- 精度控制 (n) ---\n"); // 分割线
    printf("%.2f\n", pi);      // n(浮点): 保留2位小数，四舍五入(3.14)
    printf("%.0f\n", pi);      // n(浮点): 保留0位小数，四舍五入(3)
    printf("%.4s\n", "Hello World"); // n(字符串): 只输出前4个字符(Hell)
    printf("--- 符号与前缀 (#, +) ---\n"); // 分割线
    printf("%+d\n", val);      // +: 强制显示正号 (+123)
    printf("%#x\n", hex);      // #: 显示十六进制前缀 (0xff)
    printf("--- 补零 (0) ---\n"); // 分割线
    printf("%05d\n", val);     // 0: 宽度5，左侧空位自动填0 (00123)
    printf("--- 长度修饰符 (l, h) ---\n"); // 分割线
    printf("%ld\n", 123456L);  // l: 输出long型整数
    printf("%hd\n", 12345);    // h: 输出short型整数
    return 0;
}
/*
 * 正数：右对齐
 * 负数：左对齐
 * m.n：总宽度设置为m，小数保留n位*/