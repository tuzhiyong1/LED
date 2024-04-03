#ifndef LED_H
#define LED_H

#include "main.h"

// 定义LED颜色枚举
enum LED_Color {
    RED,
    GREEN,
    BLUE
};

// 打开LED函数声明
void LED_on(enum LED_Color color);

// 关闭LED函数声明
void LED_off(enum LED_Color color);

#endif /* LED_H */

