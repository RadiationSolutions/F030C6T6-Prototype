#ifndef __SYS_H__
#define __SYS_H__
#include <inttypes.h>

extern uint16_t ticks_to_wait;
void delay_ms(uint16_t times);
void RCC_Init();

#endif // __SYS_H__
