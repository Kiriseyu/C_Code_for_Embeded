#include <stdio.h>
int main(){
    //重点在于数据重定向
    FILE *fp = fopen("log.txt", "w"); // 打开文件用于写入
    if (fp) {
        fprintf(fp, "ID:%d Val:%.2f", 10, 3.14); // 格式化写入文件
        fclose(fp); // 关闭文件
    }

    char buf[50]; int val = 2024;
    sprintf(buf, "Year:%d", val); // 将数据转为字符串存入buf
    printf("sprintf结果: %s\n", buf); // 打印查看

    char input[] = "100 200"; int a, b;
    sscanf(input, "%d %d", &a, &b); // 从字符串提取两个整数
    printf("sscanf结果: %d, %d\n", a, b);

    fp = fopen("log.txt", "r"); // 重新打开文件用于读取
    if (fp) {
        int id; float f;
        fscanf(fp, "ID:%d Val:%f", &id, &f); // 按格式从文件提取数据
        printf("fscanf结果: ID=%d, Val=%.2f\n", id, f);
        fclose(fp);
    }
    return 0;
}
//fprintf (File Print)
//功能：将格式化数据写入到文件中，而不是屏幕。
//场景：嵌入式系统中记录日志（Log）、保存配置文件。

//sprintf (String Print)
//功能：将格式化数据写入到字符数组（字符串）中。
//场景：数据类型转换（如 int 转 string）、拼接字符串、构造发送协议包。

//fscanf (File Scan)
//功能：从文件中读取格式化数据。
//场景：读取保存的传感器历史数据、解析文本配置文件。

//sscanf (String Scan)
//功能：从字符串中读取/提取格式化数据。
//场景：非常常用。用于解析上位机下发的指令、解析 GPS 模块返回的 NMEA 语句、切割字符串。