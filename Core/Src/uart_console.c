/*
 * uart_console.c
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */
#include "uart_console.h"
#include <stdio.h>
#include <string.h>

static UART_HandleTypeDef *console_uart;

void UART_Console_Init(UART_HandleTypeDef *huart)
{
    console_uart = huart;
}

void UART_Console_Print(const char *fmt, ...)
{
    char buffer[128];
    va_list args;

    va_start(args, fmt);
    vsnprintf(buffer, sizeof(buffer), fmt, args);
    va_end(args);

    HAL_UART_Transmit(console_uart,(uint8_t *)buffer,strlen(buffer),HAL_MAX_DELAY);
}


