/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************

  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MOCK_MAIN_H
#define __MOCK_MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "stm32f4xx_hal.h"
#undef __HAL_RCC_PWR_CLK_ENABLE
#undef __HAL_PWR_VOLTAGESCALING_CONFIG
#undef __HAL_RCC_GPIOC_CLK_ENABLE
#undef __HAL_RCC_GPIOH_CLK_ENABLE
#undef __HAL_RCC_GPIOA_CLK_ENABLE
#undef __HAL_RCC_GPIOB_CLK_ENABLE

#define __HAL_RCC_PWR_CLK_ENABLE()
#define __HAL_PWR_VOLTAGESCALING_CONFIG(a)
#define __HAL_RCC_GPIOC_CLK_ENABLE()
#define __HAL_RCC_GPIOH_CLK_ENABLE()
#define __HAL_RCC_GPIOA_CLK_ENABLE()
#define __HAL_RCC_GPIOB_CLK_ENABLE()

//    void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
    void Error_Handler(void);

#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

#define HAL_Init()
#define HAL_TIM_PWM_Start(a, b)
#define HAL_SYSTICK_CLKSourceConfig(a)
#define HAL_SYSTICK_Config(a)
#define HAL_RCC_OscConfig(a) HAL_OK
#define HAL_RCC_ClockConfig(a, b) HAL_OK
#define HAL_I2C_Init(a) HAL_OK
#define HAL_TIM_Base_Init(a) HAL_OK
#define HAL_TIM_ConfigClockSource(a, b) HAL_OK
#define HAL_TIM_PWM_Init(a) HAL_OK
#define HAL_TIMEx_MasterConfigSynchronization(a, b) HAL_OK
#define HAL_TIM_PWM_ConfigChannel(a, b, c) HAL_OK
#define HAL_TIM_MspPostInit(a)
#define HAL_UART_Init(a) HAL_OK
#define HAL_GPIO_WritePin(a, b, c)
#define HAL_GPIO_Init(a, b) HAL_OK
#include <stdio.h>
    HAL_StatusTypeDef HAL_UART_Transmit(UART_HandleTypeDef *huart, uint8_t *pData, uint16_t Size, uint32_t Timeout)
    {
        printf("%s", pData);
    }

#ifdef __cplusplus
}
#endif

#endif /* __MOCK_MAIN_H */
