/* 用户代码开始 */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : 主程序体
  ******************************************************************************
  * @attention
  *
  * 版权所有 (c) 2024 STMicroelectronics。
  * 保留所有权利。
  *
  * 本软件使用条款可在此软件组件根目录中的 LICENSE 文件中找到。
  * 如果没有随附此软件的 LICENSE 文件，则按原样提供。
  *
  ******************************************************************************
  */
/* 用户代码结束 */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "gpio.h"
#include "led.h"
/* 私有 includes ----------------------------------------------------------*/
/* 用户代码开始 */

/* 用户代码结束 */

/* Private typedef -----------------------------------------------------------*/
/* 用户代码开始 */

/* 用户代码结束 */

/* Private define ------------------------------------------------------------*/
/* 用户代码开始 */

/* 用户代码结束 */

/* Private macro -------------------------------------------------------------*/
/* 用户代码开始 */

/* 用户代码结束 */

/* Private variables ---------------------------------------------------------*/

/* 用户代码开始 */
/* 用户代码结束 */

/* Private function prototypes -----------------------------------------------*/
/* 函数原型 */
void SystemClock_Config(void);
/* 用户代码开始 */

/* 用户代码结束 */

/* Private user code ---------------------------------------------------------*/
/* 用户代码开始 */

/* 用户代码结束 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

	unsigned char color,s;
  /* USER CODE BEGIN 1 */

  /* 用户代码结束 */

  /* MCU Configuration--------------------------------------------------------*/

  /* 重置所有外设，初始化 Flash 接口和 SysTick。 */
  HAL_Init();

  /* 用户代码开始 */

  /* 用户代码结束 */

  /* 配置系统时钟 */
  SystemClock_Config();

  /* 用户代码开始 */

  /* 用户代码结束 */

  /* 初始化所有配置的外设 */
  MX_GPIO_Init();
  /* 用户代码开始 */

  /* 用户代码结束 */

  /* 无限循环 */
  /* 用户代码开始 */
  while (1)
  {
		//设置 GPIO 输出高电平
		LED_on(RED);
		HAL_Delay(2000);
		LED_on(GREEN);
		HAL_Delay(2000);
		LED_off(RED);
		HAL_Delay(2000);
		LED_off(GREEN);
		HAL_Delay(2000);
    /* 用户代码结束 */
  }
  /* 用户代码结束 */
}
/**
  * @brief 系统时钟配置
  * @retval 无
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** 配置主内部稳压器输出电压
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** 根据RCC_OscInitTypeDef结构中指定的参数初始化RCC振荡器。
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 6;
  RCC_OscInitStruct.PLL.PLLN = 168;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** 初始化CPU、AHB和APB总线时钟
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* 用户代码开始 */

/* 用户代码结束 */

/**
  * @brief  当发生错误时执行此函数。
  * @retval 无
  */
void Error_Handler(void)
{
  /* 用户代码开始 错误处理调试 */
  /* 用户可以添加自己的实现以报告HAL错误返回状态 */
  __disable_irq();
  while (1)
  {
  }
  /* 用户代码结束 错误处理调试 */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  报告发生assert_param错误的源文件名和源行号。
  * @param  file: 指向源文件名的指针
  * @param  line: assert_param错误的源行号
  * @retval 无
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* 用户代码开始 */
  /* 用户可以添加自己的实现以报告文件名和行号，
     例如：printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* 用户代码结束 */
}
#endif /* USE_FULL_ASSERT */