#include "stm32f0xx.h"
#include "stm32f0xx_rcc.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_usart.h"
#include "stm32f0xx_spi.h"
#include <stdio.h>


uint16_t ticks_to_wait;
void SysTick_Handler()
{
	if( ticks_to_wait > 0 )
		--ticks_to_wait;
}


void delay_ms(uint16_t times)
{
	ticks_to_wait = times;
	while( ticks_to_wait > 0 );
}

void RCC_Init()
{
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA, ENABLE);
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOB, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_SPI1, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_USART1, ENABLE);
}
