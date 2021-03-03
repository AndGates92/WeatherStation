/**
 * @copyright
 * @file boot.s
 * @author Andrea Gianarda
 * @date 03rd of March 2021
 * @brief Device startup routines
 *        - Provide initial value to stack pointer and program counter
 *        - Branch to main in the C files to call int main(int argc, char ** argv)
 */

.syntax unified	/* Use unified syntax for ARM and THUMB instruction */
.arch armv7e-m	/* STM32H7 processor implements an ARMv7-M instruction set and an ARMv7E-M architecture profile */
.cpu cortex-m7	/* STM32H7 is a Cortex-M7 core */
.fpu sotfvfp	/* Prevents the compiler from using hardware based floating point function.
		   If the compiler finds floating point types int he source code, it uses software based floating point library functions */
.thumb		/* Cortex-M7 only supports Thumb instruction set. Directive .thumb is the same as .code 16 */

/* Start address of the code section in the flash from the linker script */
.word _stext

/* End address of the code section in the flash from the linker script */
.word _etext

/* Absolute start address of the data section in the RAM from the linker script */
.word _asdata

/* Start address of the data section in the flash from the linker script */
.word _sdata

/* End address of the data section in the flash from the linker script */
.word _edata

/* Start address of the uninitialized data section in the RAM from the linker script */
.word _sbss

/* End address of the uninitialized data section in the RAM from the linker script */
.word _ebss


.section.text.rst_event_handler

.weak rst_event_handler 		/* Set rst_event_handler symbol in the object file as weak in order to be easily overridden by a string symbol in an object file */
.type rst_event_handler, %function	/* Specify the type of rst_event_handler as function */ 
