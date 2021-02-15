all: compile program

compile:
	arm-none-eabi-gcc -std=gnu99 -g -O2 -Wall -nostdlib -nostartfiles -mlittle-endian -mthumb -mthumb-interwork -mcpu=cortex-m7 -fsingle-precision-constant -Wdouble-promotion  -T./STM32H7ZI.ld dada.c -o dada.elf
	arm-none-eabi-objcopy -O binary dada.elf dada.bin

program:
	STM32_Programmer_CLI -c port=swd -w dada.bin 0x8000000
