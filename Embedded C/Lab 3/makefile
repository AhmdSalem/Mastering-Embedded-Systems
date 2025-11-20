#Prepared by Eng:Ahmed Salem for Mastering Embedded Systems Course
#Makefile for Lab 3: Simple C Program for TM4C123
CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -mthumb -g -gdwarf-2
Linker_Script=Lab3_Linker_Script.ld
INCS=-I.
LIBS= 
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)
Project_Name =unit3_lab4_cortexM4


all: $(Project_Name).bin
	@echo "================  Build is Done  ================"

%.o : %.c
	$(CC)gcc.exe -c  $(CFLAGS) $(INCS) $< -o $@

$(Project_Name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T $(Linker_Script) $(LIBS) $(OBJ) -o $@ -Map=$(Project_Name).map
#Optional: for debugging with some IDEs
	cp $(Project_Name).elf $(Project_Name).axf 
	
$(Project_Name).bin: $(Project_Name).elf
	$(CC)objcopy.exe -O binary $< $@


clean:
	rm -rf *.elf *.bin

clean_all:
	rm -rf *.o *.elf *.bin *.map *.axf