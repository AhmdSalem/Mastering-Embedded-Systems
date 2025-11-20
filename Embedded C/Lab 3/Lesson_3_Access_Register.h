#ifndef LESSON_3_ACCESS_REGISTER_H
#define LESSON_3_ACCESS_REGISTER_H

/*  
    * This file contains the register definitions for the microcontroller.
    * It provides a structured way to access and manipulate hardware registers.
    * The definitions are based on the microcontroller's datasheet.
    * The Microcontroller used in this example is the TM4C123.
*/


#include <stdio.h>
#include <stdint.h>

#define SYSCTL_RCGC2_R          *(volatile unsigned long *)(0x400FE108)
#define GPIO_PORTF_DATA_R       *(volatile unsigned long *)(0x400253FC)
#define GPIO_PORTF_DIR_R        *(volatile unsigned long *)(0x40025400) 
#define GPIO_PORTF_DEN_R        *(volatile unsigned long *)(0x4002551C)

#endif //LESSON_3_ACCESS_REGISTER_H