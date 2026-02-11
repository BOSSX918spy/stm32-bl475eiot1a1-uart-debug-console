/*
 * uart_console.h
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#ifndef INC_UART_CONSOLE_H_
#define INC_UART_CONSOLE_H_

#ifndef UART_CONSOLE_H
#define UART_CONSOLE_H

#include "stm32l4xx_hal.h"
#include <stdarg.h>

void UART_Console_Init(UART_HandleTypeDef *huart);
void UART_Console_Print(const char *fmt, ...);

#endif



#endif /* INC_UART_CONSOLE_H_ */
