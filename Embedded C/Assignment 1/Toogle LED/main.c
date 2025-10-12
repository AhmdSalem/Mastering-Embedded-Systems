#include "Lesson_1_Access_Register.h"

int main(void)
{
    // Enable clock for GPIOA
    RCC_APB2ENR |= (1 << 2); // Set bit 2 to enable GPIOA clock

    // Configure PA5 as output push-pull
    GPIOA_CRH &= 0xFF0FFFFF; // Clear CNF5[1:0] and MODE5[1:0] bits
    GPIOA_CRH |= 0x00200000; // Set MODE5[1:0] to 0b10 (Output mode, max speed 2 MHz) and CNF5[1:0] to 0b00 (General purpose output push-pull)

    R_ODR_t *odr = (R_ODR_t *)&GPIOA_ODR; // Create a pointer to the ODR register

    while (1)
    {
        odr->bits.PA5 = 1; // Set PA5 high
        for (int i = 0; i < 100000; i++); // Simple delay

        odr->bits.PA5 = 0; // Set PA5 low
        for (int i = 0; i < 100000; i++); // Simple delay
    }

    return 0;
}