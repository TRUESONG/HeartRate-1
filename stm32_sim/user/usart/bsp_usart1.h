#ifndef __USART1_H
#define	__USART1_H

#include "stm32f10x.h"
#include <stdio.h>


void USART1_Config(void);
extern void USART1_printf(USART_TypeDef* USARTx, char *Data, ...);

#endif /* __USART1_H */
