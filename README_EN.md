# LED Control Library

This library provides a simple C/C++ function library for controlling red, green, and blue LED lights.

## Usage

### LED_on Function

Used to turn on the LED light. The function prototype is as follows:

```cpp
void LED_on(const char* color);
```

The parameter `color` is used to specify the color of the LED light, and can be filled with "RED", "GREEN", or "BLUE".

### LED_off Function

Used to turn off the LED light. The function prototype is as follows:

```cpp
void LED_off(const char* color);
```

The parameter `color` is used to specify the color of the LED light, and can be filled with "RED", "GREEN", or "BLUE".

## Example Code

Here is a simple example code demonstrating how to use this library to control LED lights:

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

## Contributions

If you have any suggestions or improvements, feel free to open an issue or directly submit a pull request.

## License

This library is licensed under the MIT license. See the [LICENSE](LICENSE) file for details.

```
Please save the above content as README.md file and place it in the root directory of your GitHub repository. You can also customize and modify the content as needed.
```
