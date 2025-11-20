/*  This Startup file is for Lab 3 - Unit 3 for Mastering Embedded Systems Diploma  */

// By Eng: Ahmed Salem , 19 November 2025

/*
 - Some startup files are processor dependent, this one is for ARM Cortex-M4
 - Since Arm-Cortex-M4 Directly loads the address of address at entry point, it is .c file
 - Startup code set up the vector table, initialize .data and .bss segments, and call main
*/

// We first create an array, and let the linker script (Or section attributes)
// to place it in the .isr_vectors section using __attribute__((section(".isr_vectors")))

#define SRAM_START 0x20000000U
#define SRAM_SIZE  512U * 1024U * 1024U           // 512 MB
#define SRAM_END   ((SRAM_START) + (SRAM_SIZE))

#define STACK_START SRAM_END

#include <stdint.h> 

extern int main(void);

// Function prototypes
void Reset_Handler(void);

void Default_Handler(void)
{
    Reset_Handler();
}

void NMI_Handler                (void)__attribute__ ((weak, alias("Default_Handler")));
void HardFault_Handler          (void)__attribute__ ((weak, alias("Default_Handler")));
void MemManage_Handler          (void)__attribute__ ((weak, alias("Default_Handler")));
void BusFault_Handler           (void)__attribute__ ((weak, alias("Default_Handler")));
void UsageFault_Handler         (void)__attribute__ ((weak, alias("Default_Handler")));
void SVC_Handler                (void)__attribute__ ((weak, alias("Default_Handler")));
void DebugMon_Handler           (void)__attribute__ ((weak, alias("Default_Handler")));
void PendSV_Handler             (void)__attribute__ ((weak, alias("Default_Handler")));
void SysTick_Handler            (void)__attribute__ ((weak, alias("Default_Handler")));

uint32_t vectors[] __attribute__((section(".isr_vectors"))) = {
    STACK_START,                    // Initial Stack Pointer
    (uint32_t)&Reset_Handler,       // Reset Handler
    (uint32_t)&NMI_Handler,         // NMI Handler
    (uint32_t)&HardFault_Handler,   // Hard Fault Handler
    (uint32_t)&MemManage_Handler,   // MPU Fault Handler
    (uint32_t)&BusFault_Handler,    // Bus Fault Handler
    (uint32_t)&UsageFault_Handler,  // Usage Fault Handler
    0, 0, 0, 0,                     // Reserved
    (uint32_t)&SVC_Handler,         // SVCall Handler
    (uint32_t)&DebugMon_Handler,    // Debug Monitor Handler
    0,                              // Reserved
    (uint32_t)&PendSV_Handler,      // PendSV Handler
    (uint32_t)&SysTick_Handler      // SysTick Handler
};

void Reset_Handler(void)
{
    // Copy .data section from Flash to SRAM
    extern uint32_t _End_text;      // End of text section (source in Flash)
    extern uint32_t _Start_data;    // Start of data section (destination in SRAM)
    extern uint32_t _End_data;      // End of data section (destination in SRAM)

    uint32_t *pSrc = &_End_text;
    uint32_t *pDst = &_Start_data;

    while (pDst < &_End_data)
    {
        *pDst++ = *pSrc++;
    }

    // Zero initialize the .bss section in SRAM
    extern uint32_t _Start_bss; // Start of bss section
    extern uint32_t _End_bss; // End of bss section

    pDst = &_Start_bss;

    while (pDst < &_End_bss)
    {
        *pDst++ = 0;
    }

    // In case we want to use <stdio.h>, we include its init fuction here

    // Call the main function
    main();

    // If main returns, loop indefinitely
    while (1);
}