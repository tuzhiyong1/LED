# LED控制库

本库提供了一个简单的C/C++函数库，用于控制红、绿、蓝三种颜色的LED灯。

## 使用方法

### LED_on函数

用于打开LED灯，函数原型如下：

```cpp
void LED_on(const char* color);
```

参数color用于指定LED灯的颜色，可以填写"RED"、"GREEN"或"BLUE"。

### LED_off函数

用于关闭LED灯，函数原型如下：

```cpp
void LED_off(const char* color);
```

参数color用于指定LED灯的颜色，可以填写"RED"、"GREEN"或"BLUE"。

## 示例代码

以下是一个简单的示例代码，演示了如何使用本库控制LED灯：

```cpp
#include "led.h"

int main() {
    // Turn on the red LED light
    LED_on("RED");

    // Delay for a period of time

    // Turn off the red LED light
    LED_off("RED");

    return 0;
}
```

## 贡献

如果你有任何建议或改进意见，欢迎提出issue或者直接提交pull request。

## 许可证

本库使用MIT许可证，详情请见[LICENSE](LICENSE)文件。
```

请将以上内容保存为README.md文件，放在你的GitHub仓库的根目录下。你也可以根据需要修改和定制其中的内容。
```