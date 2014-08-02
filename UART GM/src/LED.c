#include "stm32f0xx.h"
#include "stm32f0xx_rcc.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_usart.h"
#include "stm32f0xx_spi.h"
#include <stdio.h>

#define LED_GPIO GPIOA
#define LED_PIN GPIO_Pin_3

void LED_Init()
{
	GPIO_InitTypeDef GPIO_InitStructure;
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);

	GPIO_InitStructure.GPIO_Pin = LED_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_3;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(LED_GPIO, &GPIO_InitStructure);
	LED_Off();
}

void LED_On()
{
	LED_GPIO->BSRR = LED_PIN;
}
void LED_Off()
{
	LED_GPIO->BRR = LED_PIN;
}

void LED_Toogle()
{
	if( GPIOA->ODR & LED_PIN )
	{
		LED_Off();
	}
	else
	{
		LED_On();
	}
}
