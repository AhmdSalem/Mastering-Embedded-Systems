#include "uart.h"

#define UART_ODR *(volatile unsigned int*)(0x101f1000)

void uart_send_string(const char* str) {
    while (*str != '\0') 
    {
        UART_ODR = (unsigned int)(*str);
        str++;
    }
}