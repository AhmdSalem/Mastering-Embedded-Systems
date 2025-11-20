#include "Lesson_3_Access_Register.h"

//char       global_array[100]       = {"Any Data Just to have .data"};
//const char global_array_const[100] = {"Any Data Just to have .rodata"};

int unInitilized_variable;

int main(void)
{
    volatile unsigned long delay_count; // volatile to prevent optimization

    SYSCTL_RCGC2_R = 0x00000020; // Enable clock for Port F

    for(delay_count = 0; delay_count < 200; delay_count++); // Delay to allow clock to stabilize

    GPIO_PORTF_DIR_R |= 1<<3 ; // Set PF3 as output
    GPIO_PORTF_DEN_R |= 1<<3 ; // Enable digital function for PF3

    while(1) 
    { 
        GPIO_PORTF_DATA_R |= 1<<3; 
        for(delay_count = 0; delay_count < 200000; delay_count++); 
        GPIO_PORTF_DATA_R &= ~(1<<3); 
        for(delay_count = 0; delay_count < 200000; delay_count++); 
    } 

    return 0 ;
}