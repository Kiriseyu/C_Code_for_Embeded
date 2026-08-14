#include<stdio.h>
#include<stdlib.h>
//############################################
//#          "五子棋"  version:1  	         #
//#		      developer:张曜宇               #
//#		      conner:高广宇    	             #
//############################################

int rod = 0; //回合计数
int p1_count = 0; //玩家二棋子计数
int p2_count = 0; //玩家一棋子计数

int sTh(char *s); //纯声明
void help();

void chessboardRender(int board[16][16]) {
    system("clear");
    //棋盘渲染
    char dis[] = {'+', 'O', 'X'};
    char dic[] = "0123456789ABCDEF";
    printf("  ");
    for (int x = 0; x < 16; x++) {
        printf("%c ", dic[x]);
    }
    printf("\n");
    for (int i = 0; i < 16; i++) {
        printf("%c ", dic[i]);
        for (int j = 0; j < 16; j++) {
            printf("%c ", dis[board[i][j]]);
        }
        printf("\n");
    }
}

void prswap(int board[16][16], int player, int *ox, int *oy) {
    //坐标打印-操控权交换: 打印提示并读取玩家输入的坐标,校验后落子,通过指针回传落子位置
    char cx[3], cy[3]; //字符数组读取
    int x, y;
    while (1) {
        printf("玩家%d 请输入坐标(行列,如 1[空格]5): ", player);
        scanf(" %2s %2s", cx, cy);
        x = sTh(cx); //十六字符转十进制下标
        y = sTh(cy);
        //边界
        if (x < 0 || x >= 16 || y < 0 || y >= 16) {
            printf("坐标非法,请重新输入\n");
            system("clear");
            chessboardRender(board);
            help();
            continue;
        }
        //占用
        if (board[x][y] != 0) {
            printf("该位置已有棋子,请重新输入\n");
            system("clear");
            chessboardRender(board);
            help();
            continue;
        }
        break;
    }
    board[x][y] = player; //输入
    *ox = x;
    *oy = y;
}

int sTh(char *s) {
    //十转十六
    if (s[0] >= '1' && s[0] <= '9' && s[1] >= '0' && s[1] <= '6' && s[2] == '\0') {
        int num = (s[0] - '0') * 10 + (s[1] - '0');
        if (num >= 10 && num <= 16) {
            return num - 1;
        }
    } else if (s[0] >= '0' && s[0] <= '9' && s[1] == '\0') {
        return s[0] - '0';
    } else if (s[1] == '\0') {
        if (s[0] >= 'A' && s[0] <= 'F') {
            return s[0] - 'A' + 10;
        } else if (s[0] >= 'a' && s[0] <= 'f') {
            return s[0] - 'a' + 10;
        }
    }
    return -1;
}

int victory(int board[16][16], int x, int y) {
    //胜利条件判定: 从落子点(x,y)沿横、竖、左斜、右斜四个方向统计同色连子数,>=5则返回该玩家编号,否则返回0
    int p = board[x][y]; //当前落子的玩家
    if (p == 0) return 0;
    //四个方向的方向增量: 横、竖、左斜、右斜
    int dx[] = {0, 1, 1, 1};
    int dy[] = {1, 0, 1, -1};
    for (int d = 0; d < 4; d++) {
        int cnt = 1; //连子数,含当前落子
        //正向延伸
        for (int k = 1; k < 5; k++) {
            int nx = x + dx[d] * k;
            int ny = y + dy[d] * k;
            if (nx < 0 || nx >= 16 || ny < 0 || ny >= 16) break;
            if (board[nx][ny] != p) break;
            cnt++;
        }
        //反向延伸
        for (int k = 1; k < 5; k++) {
            int nx = x - dx[d] * k;
            int ny = y - dy[d] * k;
            if (nx < 0 || nx >= 16 || ny < 0 || ny >= 16) break;
            if (board[nx][ny] != p) break;
            cnt++;
        }
        if (cnt >= 5) return p; //五连达成
    }
    return 0;
}

void help() {
    //游戏引导
    printf("游戏规则：\n 玩家轮流下棋,先连成五颗棋子的玩家获胜\n");
    printf("player_1: O  棋子数:%d\n", p1_count);
    printf("player_2: X  棋子数:%d\n", p2_count);
    printf("当前回合数:%d\n", rod);
}

int main() {
    int board[16][16] = {{0}};
    chessboardRender(board);
    help();

    int player = 1; //当前玩家
    int x, y;
    while (1) {
        prswap(board, player, &x, &y); //读取输入
        rod++;
        if (player == 1) p1_count++;
        else p2_count++; //棋子计数
        chessboardRender(board); //重新渲染棋盘
        int w = victory(board, x, y); //胜负判定
        if (w) {
            printf("玩家%d 获胜!\n", w);
            break;
        }
        player = (player == 1) ? 2 : 1; //操控权交换
    }
    return 0;
}
