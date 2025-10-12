#ifndef LESSON_1_ACCESS_REGISTER_H
#define LESSON_1_ACCESS_REGISTER_H

/*  
    * This file contains the register definitions for the microcontroller.
    * It provides a structured way to access and manipulate hardware registers.
    * The definitions are based on the microcontroller's datasheet.
    * The Microcontroller used in this example is the STM32F103C8T6.
*/


#include <stdio.h>
#include <stdint.h>

#define RCC_BASE   0x40021000U
#define GPIOA_BASE 0x40010800U

#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)        // RCC APB2 peripheral clock enable register
#define GPIOA_CRH   *(volatile uint32_t *)(GPIOA_BASE + 0x04)      // GPIO port configuration register high
#define GPIOA_ODR   *(volatile uint32_t *)(GPIOA_BASE + 0x0C)      // GPIO port output data register

typedef union {
    volatile uint32_t all_bits;
    struct
    {
        volatile uint32_t PA0 : 1;
        volatile uint32_t PA1 : 1;
        volatile uint32_t PA2 : 1;
        volatile uint32_t PA3 : 1;
        volatile uint32_t PA4 : 1;
        volatile uint32_t PA5 : 1;
        volatile uint32_t PA6 : 1;
        volatile uint32_t PA7 : 1;
        volatile uint32_t PA8 : 1;
        volatile uint32_t PA9 : 1;
        volatile uint32_t PA10 : 1;
        volatile uint32_t PA11 : 1;
        volatile uint32_t PA12 : 1;
        volatile uint32_t PA13 : 1;
        volatile uint32_t PA14 : 1;
        volatile uint32_t PA15 : 1;
        volatile uint32_t reserved : 16; // Reserved bits
    } bits;
}R_ODR_t;               // Note that union variable must be here and not at the beginning of the union

#endif //LESSON_1_ACCESS_REGISTER_H