#include <stdio.h>
int main(){
    FILE *fp;
    char buf[100];
    printf("键盘输入:");
    fgets(buf,sizeof(buf),stdin);//从键盘读取
    printf("文件读取");
    fp = fopen("test.txt","r");
    if(fp){
        fgets(buf,sizeof(buf),fp);
        fclose(fp);
    }
    printf("写入");
    fp = fopen("test.txt","w");
    if(fp){
        fputs("Hello!",fp);
        fputs("特点:不自动换行，需要加\n,没有结尾的'\0'",fp);
        fclose(fp);
    }
    return 0;
}