#include <stdio.h>
#include <stdint.h>

//定义一个变量模拟GPIO寄存器
static volatile uint32_t mock_gpio_reg = 0x00000000;
//宏 定义为指向改变量的指针，模拟内存映射
#define GPIO (*(volatile uint32_t *)&mock_gpio_reg)

void gpio_set_pin_mode(uint8_t pin, uint8_t mode) {
    uint32_t mask = 0x3 << (pin * 2); //设每个引脚占2位配置
    GPIO &= ~mask; //清除原有配置
    GPIO |= ((uint32_t) mode << (pin * 2)); //写入新模式
}

int main(void) {
    gpio_set_pin_mode(4, 13);
    printf("配置后状态:0x%08X\n", GPIO);
    if ((GPIO & (1 << 8)) && (GPIO & (1 << 11))) {
        printf("[测试正常]成功置1\n");
    } else {
        printf("[测试失败]位操作逻辑异常\n");
        return -1;
    }
    return 0;
}
