/**
  ******************************************************************************
  * @date    Jan 8, 2021
  * @file    kd_math.c
  * @author  Kirk_Z
  * @name    Kefan Zheng
  * @brief   General mathematics source file
  * @version V0.0.0
  * @email   kirk_z@yeah.net
  @verbatim
  ==============================================================================
                        ##### How to use this driver #####
  ==============================================================================


  @endverbatim
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "kd_math.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/
/**
  * @brief  Compare and return the smaller one
  * @param  a  the first number
  * @param  b  the second number
  *
  * @retval uint32_t the smaller one
  */
uint32_t KD_Math_Min(uint32_t a, uint32_t b)
{
	return a<b?a:b;
}

/**
  * @brief  Compare and return the greater one
  * @param  a  the first number
  * @param  b  the second number
  *
  * @retval uint32_t the greater one
  */
uint32_t KD_Math_Max(uint32_t a, uint32_t b)
{
	return a<b?b:a;
}

/* Exported constants */
const uint32_t KD_MATH_BIT_TRIANGLE[33]=
{
	0x00000000,	//0
	0x00000001,	//1
	0x00000003,	//2
	0x00000007,	//3
	0x0000000F,	//4
	0x0000001F,	//5
	0x0000003F,	//6
	0x0000007F,	//7
	0x000000FF,	//8
	0x000001FF,	//9
	0x000003FF,	//10
	0x000007FF,	//11
	0x00000FFF,	//12
	0x00001FFF,	//13
	0x00003FFF,	//14
	0x00007FFF,	//15
	0x0000FFFF,	//16
	0x0001FFFF,	//17
	0x0003FFFF,	//18
	0x0007FFFF,	//19
	0x000FFFFF,	//20
	0x001FFFFF,	//21
	0x003FFFFF,	//22
	0x007FFFFF,	//23
	0x00FFFFFF,	//24
	0x01FFFFFF,	//25
	0x03FFFFFF,	//26
	0x07FFFFFF,	//27
	0x0FFFFFFF,	//28
	0x1FFFFFFF,	//29
	0x3FFFFFFF,	//30
	0x7FFFFFFF,	//31
	0xFFFFFFFF	//32
};

/************************ (C) COPYRIGHT kirkz.tech *****END OF FILE****/
