#Prepared by Eng:Ahmed Salem for Mastering Embedded Systems Course
#Makefile for Lab 2: Simple C Program for STM32F103C8T6 (Blue Pill)

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -mthumb
Linker_Script=Lab2_Linker_Script.ld
INCS=-I.
LIBS= 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_Name =Lab2_BluePill


all: $(Project_Name).bin
	@echo "================  Build is Done  ================"

%.o : %.c
	$(CC)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@

$(Project_Name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T $(Linker_Script) $(LIBS) $(OBJ) -o $@ -Map=$(Project_Name).map

$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@


clean:
	rm -rf *.elf *.bin

clean_all:
	rm -rf *.o *.elf *.bin *.map