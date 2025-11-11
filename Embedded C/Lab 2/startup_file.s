/* startup cortex_M3.S for STM32F103C8T6 (Blue Pill)
    By Eng:Ahmed Salem    8 November 2025
*/

/*The SRAM from Blue Pill Datasheet is at 0x20000000 */
/*We will choose a random number to be the Stack Pointer, let it be after 1000*/
/*We define a value is Assembly using .word, the word is 4 bytes*/

/*From the BluPill Data sheet, The first value is SP,
    The Second Address(Symblo) Expected is the reset section address, 
    and Vector handlers and so on...
    Follow Page 198 on datasheet*/
/*
.section .vector_handlers
.word 0x20001000  /*Initial Stack Pointer Value*/
//.word _reset     /*Reset Handler Address*/
///.word NMI_Handler /*NMI Handler Address*/
///.word HardFault_Handler /*Hard Fault Handler Address*/
//.word MemManage_Handler /*Memory Manage Handler Address*/
//.word BusFault_Handler /*Bus Fault Handler Address*/
//.word UsageFault_Handler /*Usage Fault Handler Address*/
//.word 0 /*Reserved*/
//.word 0 /*Reserved*/    
//.word 0 /*Reserved*/
//.word 0 /*Reserved*/
//.word SVC_Handler /*SVCall Handler Address*/
//.word DebugMon_Handler /*Debug Monitor Handler Address*/
//.word 0 /*Reserved*/
/*

.section .text


_reset:
    bl main
    bl .

_vector_handlers: /*If main returns, go to vector handlers again*/