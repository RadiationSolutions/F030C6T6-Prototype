#include "stm32f0xx.h"
#include "stm32f0xx_rcc.h"
#include "stm32f0xx_gpio.h"
#include "stm32f0xx_usart.h"
#include "stm32f0xx_spi.h"
#include <stdio.h>
#include "LCD.h"
#include "font.h"

void LCD_Init()
{
	//SPI1
	SPI_InitTypeDef SPI_InitStructure;
	GPIO_InitTypeDef GPIO_InitStructure;

	/* SPI GPIO Configuration --------------------------------------------------*/

	/* Configure I/O for Flash Chip select */
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_3;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	/* SPI SCK,MISO,MOSI pin configuration */
	GPIO_InitStructure.GPIO_Pin = (GPIO_Pin_5 | GPIO_Pin_6 | GPIO_Pin_7);
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	/* Connect SPI pins to AF0 */
	GPIO_PinAFConfig(GPIOA, GPIO_Pin_5, GPIO_AF_0);
	GPIO_PinAFConfig(GPIOA, GPIO_Pin_6, GPIO_AF_0);
	GPIO_PinAFConfig(GPIOA, GPIO_Pin_7,	GPIO_AF_0);

	/* SPI configuration */
	SPI_InitStructure.SPI_Direction = SPI_Direction_2Lines_FullDuplex;
	SPI_InitStructure.SPI_Mode = SPI_Mode_Master;
	SPI_InitStructure.SPI_DataSize = SPI_DataSize_8b;
	SPI_InitStructure.SPI_CPOL = SPI_CPOL_Low;
	SPI_InitStructure.SPI_CPHA = SPI_CPHA_1Edge;
	SPI_InitStructure.SPI_NSS = SPI_NSS_Soft;
	SPI_InitStructure.SPI_BaudRatePrescaler = SPI_BaudRatePrescaler_256; // 42000kHz/128=328kHz < 400kHz
	SPI_InitStructure.SPI_FirstBit = SPI_FirstBit_MSB;
	SPI_InitStructure.SPI_CRCPolynomial = 7;

	SPI_Init(SPI1, &SPI_InitStructure);
	SPI_RxFIFOThresholdConfig(SPI1, SPI_RxFIFOThreshold_QF);

	SPI_CalculateCRC(SPI1, DISABLE);
	SPI_Cmd(SPI1, ENABLE);

	/* drain SPI TX buffer,just in case*/
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_TXE) == RESET) {}
	//SPI_ReceiveData8(SPIx_SD);


	//PB0 - reset, PB1 - D/C
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_3;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);



	LCD_Reset();
	//init sequence
	LCD_SendCommand(0);
	LCD_SendCommand(0x21);
	LCD_SendCommand(0xBF);
	LCD_SendCommand(0x04);
	LCD_SendCommand(0x14);
	LCD_SendCommand(0x0D);
	LCD_SendCommand(0x22); //0x20/0x22 for vertical adressing
	LCD_SendCommand(0xC);
}

void LCD_SendRaw(uint8_t data)
{
	GPIOA->BRR = GPIO_Pin_2;
	SPI_SendData8(SPI1, data);
	while (SPI_I2S_GetFlagStatus(SPI1, SPI_I2S_FLAG_RXNE) == RESET) {}
	SPI_ReceiveData8(SPI1);
	GPIOA->BSRR = GPIO_Pin_2;
}

void LCD_Mode(uint8_t data_mode)
{
	if( data_mode != 0 )
	{
		GPIOB->BSRR = GPIO_Pin_1;
	}
	else //command
	{
		GPIOB->BRR = GPIO_Pin_1;
	}
}

void LCD_SendCommand(uint8_t command)
{
	LCD_Mode(0);
	LCD_SendRaw(command);
}

void LCD_SendData(uint8_t data)
{
	LCD_Mode(1);
	LCD_SendRaw(data);
}


void LCD_Reset()
{
	GPIOB->BRR = GPIO_Pin_0;
	delay_ms(1);
	GPIOB->BSRR = GPIO_Pin_0;
	delay_ms(1);
}

void LCD_GoTo(uint8_t x, uint8_t y)
{
	LCD_SendCommand(0x80 | x);
	LCD_SendCommand(0x40 | y);
}
void LCD_Clear()
{
	LCD_GoTo(0,0);
	uint8_t i, j;
	for(i = 0; i < 6; ++i)
	{
		for(j = 0; j < 84; ++j)
		{
			LCD_SendData(0x00);
		}
	}
}

void LCD_String(char * str, uint8_t x, uint8_t y)
{
	while(*str)
	{
		x += (LCD_char(*str, x, y)+1);
		++str;
	}
}

uint8_t LCD_char(uint8_t ch, uint8_t x, uint8_t y)
{
	uint8_t i, j, ch_nr;
	ch_nr = (ch - '0');
	LCD_GoTo(x, y);

	uint8_t * ptr = &FONT_INFO_STRUCT.data[FONT_INFO_STRUCT.charInfo[ch_nr].offset];
	for(j = 0; j < FONT_INFO_STRUCT.charInfo[ch_nr].widthBits; ++j)
	{
		LCD_GoTo(x+j, y);
		for(i = 0; i < FONT_INFO_STRUCT.heightPages; ++i)
		{
			printf("Data: %x\n\r",*ptr);
			LCD_SendData(*ptr);
			ptr++;
		}
	}
	return FONT_INFO_STRUCT.charInfo[ch_nr].widthBits; //return width of letter
}
