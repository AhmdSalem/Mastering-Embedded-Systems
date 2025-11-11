/* Lab 2 Linker Script*/

ENTRY(Reset_Handler); /* The entry point for the application */

MEMORY
{
    FLASH  (rx)  : ORIGIN = 0x08000000, LENGTH = 64K
    SRAM   (rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
    .text :
    {
        *(.isr_vectors)
        *(.text)
        *(.rodata)
        . = ALIGN(4);
        _End_text = .;      /* End of text section */
    }> FLASH

    .data :
    {
        _Start_data = .;    /* Start of data section */
        *(.data)
        . = ALIGN(4);
        _End_data = .;      /* End of data section */
    } > SRAM AT> FLASH

    .bss :
    {
        _Start_bss = .;     /* Start of bss section */
        *(.bss)
        . = ALIGN(4);
        *(COMMON)
        . = ALIGN(4);
        _End_bss = .;       /* End of bss section */
    }> SRAM
}