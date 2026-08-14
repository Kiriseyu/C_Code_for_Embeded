# C_Code_for_Embeded

C 语言学习笔记仓库, 面向嵌入式开发方向。每个 `.c` 文件都是一个独立的小程序,
按主题分类组织, 便于查阅与复习。

## 目录结构

```
src/
├── basics/          基础语法与输入输出 (hello, printf, sizeof, 逻辑运算, 短路求值)
├── control_flow/    控制流 (if/else, switch, continue, 成绩判定)
├── math/            数学与数论 (闰年, 回文, 素数, 因子, 三角形判断, 累加, 换零钱)
├── numbers/         数字处理 (拆位, 反转数字, 进制转换, my_atoi, 一年第几天)
├── patterns/        图案打印 (边框, 三角形, 菱形, 九九乘法表, 表格)
├── arrays/          数组操作 (求平均, 正数统计)
├── sorting/         排序算法 (冒泡 / 选择 / 插入, 冒泡优化版)
├── strings/         字符串处理 (自实现 strcpy / strcat / strcmp / strlen)
├── pointers/        指针应用 (指针交换, 异或交换, 泛型交换, 宏交换)
├── struct_union/    结构体与联合 (位域, 柔性数组, 内存对齐, 大小端判断)
├── preprocessor/    预处理 (条件编译, #pragma / #error / #line 指令)
├── memory/          内存管理 (malloc 演示)
├── linkedlist/      链表 (有头 / 无头单向链表, 循环链表, 倒数第 k 节点)
├── stack/           栈 (顺序栈实现 + 使用示例)
├── algorithms/      算法 (Brian Kernighan 位计数, 阶乘, 斐波那契, 杨辉三角, 装箱问题)
├── games/           小游戏 (五子棋, 猜数字, 数学 Bingo)
├── linux/           Linux 专属 (用到 unistd.h / system("clear") 的程序)
└── embedded/        嵌入式相关 (GPIO 位操作示例)
```

### 关于 archive 子目录

部分分类下有 `archive/` 子目录, 存放同一主题的早期或重复实现版本
(例如 `math/archive/` 里有多个闰年 / 水仙花数版本)。
主目录保留最具代表性的版本, `archive/` 留作对比参考。

### 关于函数库文件

部分 `.c` 文件不含 `main` 函数 (如 `factorial.c`、`fibonacci.c`、`my_strlen.c` 等),
它们是供其他文件 `#include` 使用的函数库, 不会被单独编译为可执行文件。

## 构建方式

本仓库用 CMake 管理。`CMakeLists.txt` 会递归扫描 `src/` 下所有 `.c` 文件,
为每个含 `main` 函数的文件单独生成一个可执行目标 (以文件名命名)。

### Windows (CLion)

1. 用 CLion 打开本项目根目录
2. 在顶部"配置下拉框"中选择要运行的目标 (如 `leap_year`)
3. 点击运行按钮即可编译并执行

### Linux (Ubuntu)

```bash
# 1. 配置 (在项目根目录执行)
cmake -B build -S .

# 2. 编译单个目标 (把 leap_year 换成想运行的目标名)
cmake --build build --target leap_year

# 3. 运行
./build/leap_year
```

> 栈模块 `stack_app` 由 `stack_demo.c` + `stack.c` 合并编译, 是唯一的多文件目标。

## 说明

- `src/linux/` 下的程序使用了 `unistd.h`、`sleep`、`system("clear")` 等,
  仅在 Linux 下可正常运行, 在 Windows 上需改用对应 API。
- `src/embedded/gpio_set.c` 为 GPIO 位操作示例, `GPIO.h` 需按实际平台补充。
- 部分早期练习代码可能存在小 bug, 仅供学习参考。
