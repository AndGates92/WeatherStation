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

/* Absolute start address of the data section in the flash from the linker script */
.word _asdata

/* Start address of the data section in the RAM from the linker script */
.word _sdata

/* End address of the data section in the RAM from the linker script */
.word _edata

/* Start address of the uninitialized data section in the RAM from the linker script */
.word _sbss

/* End address of the uninitialized data section in the RAM from the linker script */
.word _ebss

/* Define a section named .text.rst_event_handler */
.section .text.rst_event_handler

.weak rst_event_handler 		/* Set rst_event_handler symbol in the object file as weak in order to be easily overridden by a string symbol in an object file */
.type rst_event_handler, %function	/* Specify the type of rst_event_handler as function */ 

rst_event_handler:
	ldr sp, =_max_stack_address	/* Initialize the stack pointer (R13) using LDR pseudo instruction */

	/* This C function sets the reset and clock control to the desired reset state as well as a few other registers */
	bl systemClockInit		/* Branch with link (i.e. call with the link register R14 being set to the next instruction) to the function to initialize system clocks
					   It is a C function as we can leverage register macros hence have more readable code and easier to mantain */

	/* Start copying data from the flash to the RAM */
	movs r0, 0x0			/* Move immediate value 0 to r0 */

	b copy_to_ram_loop		/* If the current address (r2) is smaller than the end of data section (r3), then branch back to copy data */

copy_to_ram_body:
	ldr r2, =_asdata		/* Load value of absolute start address of the data in RAM to r2 */

	ldr r2, [r2, r0]		/* Load the data at address of r2 offset by r0 into r2 */
	str r2, [r1, r0]		/* Store the value loaded into r2 to address r1 + r0 */

	adds r0, r0, 0x4		/* Increment offset by 4 */

copy_to_ram_loop:
	ldr r1, =_sdata			/* Load value of start address of the data in RAM to r1 */
	ldr r2, =_edata			/* Load value of end address of the data in RAM to r2 */
	adds r1, r1, r0			/* Calculate offset Load start address of the data in RAM with offset of r0 to r3 */
	cmp r1, r2			/* Compare the address of the current memory location (r2) to copy with last address of the data section in the RAM (r2) */

	blo copy_to_ram_body		/* If the current address (r1) is smaller than the end of data section (r2), then branch back to copy data */

	ldr r1, =_sbss			/* Load value of start address of the unitialized in RAM to r1 */
	b fill_bss_loop

fill_bss_body:
	movs r2, 0x0			/* Move 0 into r2 */
	str r2, [r1], 0x4		/* Store the value in r2 to address r1 and then increments r1 by 4 */

fill_bss_loop:
	ldr r2, =_ebss			/* Load value of end address of the data in flash to r2 */
	cmp r1, r2			/* Compare the address of the current memory location (r2) to copy with last address of the data section in the RAM (r2) */
	blo fill_bss_body		/* If the current address (r1) is smaller than the end of uninitialized data section (r2), then branch back to fill bss */

	bl main				/* Branch with link (i.e. call with the link register R14 being set to the next instruction) to the main function */
	bx lr				/* Branch with indirect (return from call to main) */
