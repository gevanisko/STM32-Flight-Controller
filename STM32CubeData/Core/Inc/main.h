/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define GPS_PPS_Pin GPIO_PIN_3
#define GPS_PPS_GPIO_Port GPIOE
#define GPS_NRST_Pin GPIO_PIN_4
#define GPS_NRST_GPIO_Port GPIOE
#define GPS_NSAFE_Pin GPIO_PIN_5
#define GPS_NSAFE_GPIO_Port GPIOE
#define GPS_INT_Pin GPIO_PIN_6
#define GPS_INT_GPIO_Port GPIOE
#define GPS_SWITCH_Pin GPIO_PIN_2
#define GPS_SWITCH_GPIO_Port GPIOF
#define FIRE1_LOW_Pin GPIO_PIN_1
#define FIRE1_LOW_GPIO_Port GPIOA
#define PYRO_ARM_Pin GPIO_PIN_2
#define PYRO_ARM_GPIO_Port GPIOA
#define FIRE2_LOW_Pin GPIO_PIN_3
#define FIRE2_LOW_GPIO_Port GPIOA
#define FIRE1_Pin GPIO_PIN_0
#define FIRE1_GPIO_Port GPIOB
#define FIRE2_Pin GPIO_PIN_1
#define FIRE2_GPIO_Port GPIOB
#define Vsen_Pyro1_Pin GPIO_PIN_11
#define Vsen_Pyro1_GPIO_Port GPIOF
#define Vsen_Pyro2_Pin GPIO_PIN_12
#define Vsen_Pyro2_GPIO_Port GPIOF
#define GND_DETECT_Pin GPIO_PIN_12
#define GND_DETECT_GPIO_Port GPIOC
#define CAM_TOG_Pin GPIO_PIN_6
#define CAM_TOG_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
