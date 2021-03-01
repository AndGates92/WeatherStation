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
.fpu softvfp	/* Prevents the compiler from using hardware based floating point function.
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

.weak rst_event_handler				/* Set rst_event_handler symbol in the object file as weak in order to be easily overridden by a string symbol in an object file */
.type rst_event_handler, %function		/* Specify the type of rst_event_handler as function */

rst_event_handler:
	ldr sp, =_max_stack_address		/* Initialize the stack pointer (R13) using LDR pseudo instruction */

	/* This C function sets the reset and clock control to the desired reset state as well as a few other registers */
	bl systemInit				/* Branch with link (i.e. call with the link register R14 being set to the next instruction) to the function to initialize system clocks
						   It is a C function as we can leverage register macros hence have more readable code and easier to mantain */

	/* Start copying data from the flash to the RAM */
	movs r0, 0x0				/* Move immediate value 0 to r0 */

	b copy_to_ram_loop			/* If the current address (r2) is smaller than the end of data section (r3), then branch back to copy data */

copy_to_ram_body:
	ldr r2, =_asdata			/* Load value of absolute start address of the data in RAM to r2 */

	ldr r2, [r2, r0]			/* Load the data at address of r2 offset by r0 into r2 */
	str r2, [r1, r0]			/* Store the value loaded into r2 to address r1 + r0 */

	adds r0, r0, 0x4			/* Increment offset by 4 */

copy_to_ram_loop:
	ldr r1, =_sdata				/* Load value of start address of the data in RAM to r1 */
	ldr r2, =_edata				/* Load value of end address of the data in RAM to r2 */
	adds r1, r1, r0				/* Calculate offset Load start address of the data in RAM with offset of r0 to r3 */
	cmp r1, r2				/* Compare the address of the current memory location (r2) to copy with last address of the data section in the RAM (r2) */

	blo copy_to_ram_body			/* If the current address (r1) is smaller than the end of data section (r2), then branch back to copy data */

	ldr r1, =_sbss				/* Load value of start address of the unitialized in RAM to r1 */
	b fill_bss_loop

fill_bss_body:
	movs r2, 0x0				/* Move 0 into r2 */
	str r2, [r1], 0x4			/* Store the value in r2 to address r1 and then increments r1 by 4 */

fill_bss_loop:
	ldr r2, =_ebss				/* Load value of end address of the data in flash to r2 */
	cmp r1, r2				/* Compare the address of the current memory location (r2) to copy with last address of the data section in the RAM (r2) */
	blo fill_bss_body			/* If the current address (r1) is smaller than the end of uninitialized data section (r2), then branch back to fill bss */

	bl main					/* Branch with link (i.e. call with the link register R14 being set to the next instruction) to the main function */
	bx lr					/* Branch with indirect (return from call to main) */

.size rst_event_handler, .-rst_event_handler	/* Give size information for the code of the syscall */

/**
* @brief  This is the code that gets called when the processor receives an
*         unexpected interrupt.  This simply enters an infinite loop, preserving
*         the system state for examination by a debugger.
* @param  None
* @retval None
*/
/* Define a section named .text.default_handler */
/* Keep being stuck here if unexpected interrupt is triggered */
.section  .text.default_interrupt_handler,"ax",%progbits
default_interrupt_handler:
infinite:
	b  infinite
.size  default_interrupt_handler, .-default_interrupt_handler	/* Give size information for the code of the syscall */

.section  .isr_vector,"a",%progbits
.type  g_pfnVectors, %object		/* Specify the type of g_pfnVectors as object */
.size  g_pfnVectors, .-g_pfnVectors


g_pfnVectors:
.word _max_stack_address		/* Reserved - Address 0x0 */
.word rst_event_handler			/* Reset interrupt - Priority -3 - Address 0x4 */
.word NMI_handler			/* Non maskable interrupt - Priority -2 - Address 0x8 */
.word HardFault_handler			/* All classes of fault - Priority -1 - Address 0xC */
.word MemManage_handler			/* Memory management - Priority 0 - Address 0x10 */
.word BusFault_handler			/* Prefetch fault or memory access fault - Priority 1 - Address 0x14 */
.word UsageFault_handler		/* Undefiend instruction or illegal state - Priority 2 - Address 0x18 */
.word 0					/* Reserved - Address 0x1C */
.word 0					/* Reserved - Address 0x20 */
.word 0					/* Reserved - Address 0x24 */
.word 0					/* Reserved - Address 0x28 */
.word SVCall_handler			/* System service call via SWI instruction - Priority 3 - Address 0x2C */
.word DebugMonitor_handler		/* Debug monitor - Priority 4 - Address 0x30 */
.word 0					/* Reserved - Address 0x34 */
.word PendSV_handler			/* Pendable request for system service - Priority 5 - Address 0x38 */
.word SysTick_handler			/* System tick timer - Priority 6 - Address 0x3C */

/* External Interrupts */
.word WWDG_irq_handler			/* Window watchdog Interrupt (wwdg1, wwdg2) - Priority 7 - Address 0x40 */
.word PVD_irq_handler			/* Programmable Voltage Detector (PVD) through External Interrupts (EXTI) Line detection interrupt - Priority 8 - Address 0x44 */
.word TAMP_STAMP_irq_handler		/* Real-Time clock (RTC) Tamper and TimeStamps through the External Interrupts (EXTI) line - Priority 9 - Address 0x48 */
.word RTC_WKUP_irq_handler		/* Real-Time clock (RTC) Wakeup through the External Interrupts (EXTI) line - Priority 10 - Address 0x4C */
.word FLASH_irq_handler			/* Flash memory global interrupt - Priority 11 - Address 0x50 */
.word RCC_irq_handler			/* Reset and Clock Control (RCC) global interrupt - Priority 12 - Address 0x54 */
.word EXTI0_irq_handler			/* External Interrupts (EXTI) Line0 global interrupt - Priority 13 - Address 0x58 */
.word EXTI1_irq_handler			/* External Interrupts (EXTI) Line1 global interrupt - Priority 14 - Address 0x5C */
.word EXTI2_irq_handler			/* External Interrupts (EXTI) Line2 global interrupt - Priority 15 - Address 0x60 */
.word EXTI3_irq_handler			/* External Interrupts (EXTI) Line3 global interrupt - Priority 16 - Address 0x64 */
.word EXTI4_irq_handler			/* External Interrupts (EXTI) Line4 global interrupt - Priority 17 - Address 0x68 */
.word DMA1_Stream0_irq_handler		/* Direct memory Access 1 (DMA1) Stream 0 global interrupt global interrupt - Priority 18 - Address 0x6C */
.word DMA1_Stream1_irq_handler		/* Direct memory Access 1 (DMA1) Stream 1 global interrupt global interrupt - Priority 19 - Address 0x70 */
.word DMA1_Stream2_irq_handler		/* Direct memory Access 1 (DMA1) Stream 2 global interrupt global interrupt - Priority 20 - Address 0x74 */
.word DMA1_Stream3_irq_handler		/* Direct memory Access 1 (DMA1) Stream 3 global interrupt global interrupt - Priority 21 - Address 0x78 */
.word DMA1_Stream4_irq_handler		/* Direct memory Access 1 (DMA1) Stream 4 global interrupt global interrupt - Priority 22 - Address 0x7C */
.word DMA1_Stream5_irq_handler		/* Direct memory Access 1 (DMA1) Stream 5 global interrupt global interrupt - Priority 23 - Address 0x80 */
.word DMA1_Stream6_irq_handler		/* Direct memory Access 1 (DMA1) Stream 6 global interrupt global interrupt - Priority 24 - Address 0x84 */
.word ADC1_ADC2_irq_handler		/* Analog digital converter 1 (ADC1) and Analog digital converter 2 (ADC2) global interrupt - Priority 25 - Address 0x88 */
.word FDCAN1_IT0_irq_handler		/* Flexible datarate controller area network 1 (FDCAN1) interrupt line 0 - Priority 26 - Address 0x8C */
.word FDCAN2_IT0_irq_handler		/* Flexible datarate controller area network 2 (FDCAN2) interrupt line 0 - Priority 27 - Address 0x90 */
.word FDCAN1_IT1_irq_handler		/* Flexible datarate controller area network 1 (FDCAN1) interrupt line 1 - Priority 28 - Address 0x94 */
.word FDCAN2_IT1_irq_handler		/* Flexible datarate controller area network 2 (FDCAN2) interrupt line 1 - Priority 29 - Address 0x98 */
.word EXTI9_5_irq_handler		/* External Line[9:5] interrupts - Priority 30 - Address 0x9C */
.word TIM1_BRK_irq_handler		/* Advanced-control timer 1 (TIM1) Break interrupt - Priority 31 - Address 0xA0 */
.word TIM1_UP_irq_handler		/* Advanced-control timer 1 (TIM1) Update interrupt - Priority 32 - Address 0xA4 */
.word TIM1_TRG_COM_irq_handler		/* Advanced-control timer 1 (TIM1) Trigger and Commutation interrupt - Priority 33 - Address 0xA8 */
.word TIM1_CC_irq_handler		/* Advanced-control timer 1 (TIM1) Capture Compare interrupt - Priority 34 - Address 0xAC */
.word TIM2_irq_handler			/* General-purpose timer 2 (TIM2) global interrupt - Priority 35 - Address 0xB0 */
.word TIM3_irq_handler			/* General-purpose timer 3 (TIM3) global interrupt - Priority 36 - Address 0xB4 */
.word TIM4_irq_handler			/* General-purpose timer 4 (TIM4) global interrupt - Priority 37 - Address 0xB8 */
.word I2C1_EV_irq_handler		/* Inter integrated circuit 1 (I2C1) Event interrupt - Priority 38 - Address 0xBC */
.word I2C1_ER_irq_handler		/* Inter integrated circuit 1 (I2C1) Error interrupt - Priority 39 - Address 0xC0 */
.word I2C2_EV_irq_handler		/* Inter integrated circuit 2 (I2C2) Event interrupt - Priority 40 - Address 0xC4 */
.word I2C2_ER_irq_handler		/* Inter integrated circuit 2 (I2C2) Error interrupt - Priority 41 - Address 0xC8 */
.word SPI1_irq_handler			/* Serial peripheral interface 1 (SPI1) global interrupt - Priority 42 - Address 0xCC */
.word SPI2_irq_handler			/* Serial peripheral interface 2 (SPI2) global interrupt - Priority 43 - Address 0xD0 */
.word USART1_irq_handler		/* Universal synchronous/asynchronous receiver transmitter 1 (USART1) global interrupt - Priority 44 - Address 0xD4 */
.word USART2_irq_handler		/* Universal synchronous/asynchronous receiver transmitter 2 (USART2) global interrupt - Priority 45 - Address 0xD8 */
.word USART3_irq_handler		/* Universal synchronous/asynchronous receiver transmitter 3 (USART3) global interrupt - Priority 46 - Address 0xDC */
.word EXTI15_10_irq_handler		/* External Line[15:10] interrupts - Priority 47 - Address 0xE0 */
.word RTC_Alarm_irq_handler		/* Real Time Clock (RTC) Alarm (A and B) through External Interrupts (EXTI) Line - Priority 48 - Address 0xE4 */
.word 0					/* Reserved - Priority 49 - Address 0xE8 */
.word TIM8_BRK_TIM12_irq_handler	/* Advanced-control timer 8 (TIM8) Break and General-purpose timer 12 (TIM12) global interrupt - Priority 50 - Address 0xEC */
.word TIM8_UP_TIM13_irq_handler		/* Advanced-control timer 8 (TIM8) Update and General-purpose timer 13 (TIM13) global interrupt - Priority 51 - Address 0xF0 */
.word TIM8_TRG_COM_TIM14_irq_handler	/* Advanced-control timer 8 (TIM8) Trigger and Commutation and General-purpose timer 14 (TIM14) global interrupt - Priority 52 - Address 0xF4 */
.word TIM8_CC_irq_handler		/* Advanced-control timer 8 (TIM8) Capture Compare interrupt - Priority 53 - Address 0xF8 */
.word DMA1_Stream7_irq_handler		/* Direct memory Access 1 (DMA1) Stream 7 global interrupt - Priority 54 - Address 0xFC */
.word FMC_irq_handler			/* Flexible memory controller (FMC) global interrupt - Priority 55 - Address 0x100 */
.word SDMMC1_irq_handler		/* Secure digital and multimedia card  (SDMMC1) global interrupt - Priority 56 - Address 0x104 */
.word TIM5_irq_handler			/* General-purpose timer 5 (TIM5) global interrupt - Priority 57 - Address 0x108 */
.word SPI3_irq_handler			/* Serial peripheral interface 3 (SPI3) global interrupt - Priority 58 - Address 0x10C */
.word UART4_irq_handler			/* Universal asynchronous receiver transmitter 4 (UART4) global interrupt - Priority 59 - Address 0x110 */
.word UART5_irq_handler			/* Universal asynchronous receiver transmitter 5 (UART5) global interrupt - Priority 60 - Address 0x114 */
.word TIM6_DAC_irq_handler		/* Basic timer 6 (TIM6) global interrupt and DAC underrun errors interrupt - Priority 61 - Address 0x118 */
.word TIM7_irq_handler			/* Basic timer 7 (TIM7) - Priority 62 - Address 0x11C */
.word DMA2_Stream0_irq_handler		/* Direct memory Access 2 (DMA2) Stream 0 - Priority 63 - Address 0x120 */
.word DMA2_Stream1_irq_handler		/* Direct memory Access 2 (DMA2) Stream 1 - Priority 64 - Address 0x124 */
.word DMA2_Stream2_irq_handler		/* Direct memory Access 2 (DMA2) Stream 2 - Priority 65 - Address 0x128 */
.word DMA2_Stream3_irq_handler		/* Direct memory Access 2 (DMA2) Stream 3 - Priority 66 - Address 0x12C */
.word DMA2_Stream4_irq_handler		/* Direct memory Access 2 (DMA2) Stream 4 - Priority 67 - Address 0x130 */
.word ETH_irq_handler			/* Ethernet - Priority 68 - Address 0x134 */
.word ETH_WKUP_irq_handler		/* Ethernet Wakeup through External Interrupts (EXTI) line - Priority 69 - Address 0x138 */
.word FDCAN_CAL_irq_handler		/* Flexible datarate controller area network (FDCAN) calibration unit interrupt - Priority 70 - Address 0x13C */
.word CM7_SEV_irq_handler		/* Cortex-M7 Send event interrupt for Cortex-M4 - Priority 71 - Address 0x140 */
.word CM4_SEV_irq_handler		/* Cortex-M4 Send event interrupt for Cortex-M7 - Priority 72 - Address 0x144 */
.word 0					/* Reserved - Priority 73 - Address 0x148 */
.word 0					/* Reserved - Priority 74 - Address 0x14C */
.word DMA2_Stream5_irq_handler		/* Direct memory Access 2 (DMA2) Stream 5 - Priority 75 - Address 0x150 */
.word DMA2_Stream6_irq_handler		/* Direct memory Access 2 (DMA2) Stream 6 - Priority 76 - Address 0x154 */
.word DMA2_Stream7_irq_handler		/* Direct memory Access 2 (DMA2) Stream 7 - Priority 77 - Address 0x158 */
.word USART6_irq_handler		/* Universal synchronous/asynchronous receiver transmitter 6 (USART6) - Priority 78 - Address 0x15C */
.word I2C3_EV_irq_handler		/* Inter integrated circuit 3 (I2C3) event - Priority 79 - Address 0x160 */
.word I2C3_ER_irq_handler		/* Inter integrated circuit 3 (I2C3) error - Priority 80 - Address 0x164 */
.word USB_OTG_HS_EP1_OUT_irq_handler	/* Universal serial bus on-the-go high speed End Point 1 Out - Priority 81 - Address 0x168 */
.word USB_OTG_HS_EP1_IN_irq_handler	/* Universal serial bus on-the-go high speed End Point 1 In - Priority 82 - Address 0x16C */
.word USB_OTG_HS_WKUP_irq_handler	/* Universal serial bus on-the-go high speed Wakeup through External Interrupts (EXTI) - Priority 83 - Address 0x170 */
.word USB_OTG_HS_irq_handler		/* Universal serial bus on-the-go high speed - Priority 84 - Address 0x174 */
.word DCMI_irq_handler			/* Digital camera interface - Priority 85 - Address 0x178 */
.word CRYP_irq_handler			/* Cryptographic processor - Priority 86 - Address 0x178 */
.word RNG_irq_handler			/* Random number generation - Priority 87 - Address 0x180 */
.word FPU_irq_handler			/* Floating point unit (FPU) - Priority 88 - Address 0x184 */
.word UART7_irq_handler			/* Universal asynchronous receiver transmitter 7 (UART7) - Priority 89 - Address 0x188 */
.word UART8_irq_handler			/* Universal asynchronous receiver transmitter 8 (UART8) - Priority 90 - Address 0x18C */
.word SPI4_irq_handler			/* Serial peripheral interface 4 (SPI4) - Priority 91 - Address 0x190 */
.word SPI5_irq_handler			/* Serial peripheral interface 5 (SPI5) - Priority 92 - Address 0x194 */
.word SPI6_irq_handler			/* Serial peripheral interface 6 (SPI6) - Priority 93 - Address 0x198 */
.word SAI1_irq_handler			/* Serial Audio Interface 1 (SAI1) - Priority 94 - Address 0x19C */
.word LTDC_irq_handler			/* LCD-TFT display controller - Priority 95 - Address 0x1A0 */
.word LTDC_ER_irq_handler		/* LCD-TFT display controller error - Priority 96 - Address 0x1A4 */
.word DMA2D_irq_handler			/* Chrom-Art Acceleration controller (DMA2D) - Priority 97 - Address 0x1A8 */
.word SAI2_irq_handler			/* Serial Audio Interface 2 (SAI2) - Priority 98 - Address 0x1AC */
.word QUADSPI_irq_handler		/* Quad serial peripheral interface (QUADSPI) - Priority 99 - Address 0x1B0 */
.word LPTIM1_irq_handler		/* Low power timer 1 (LPTIM1) - Priority 100 - Address 0x1B4 */
.word CEC_irq_handler			/* High definition multimedia interface (HDMI-CEC) - Priority 101 - Address 0x1B8 */
.word I2C4_EV_irq_handler		/* Inter integrated circuit 4 (I2C4) Event - Priority 102 - Address 0x1BC */
.word I2C4_ER_irq_handler		/* Inter integrated circuit 4 (I2C4) Error - Priority 103 - Address 0x1C0 */
.word SPDIF_RX_irq_handler		/* Sony/Philips digital interface (S/PDIF) receiver global interrupt - Priority 104 - Address 0x1C4 */
.word USB_OTG_FS_EP1_OUT_irq_handler	/* Universal serial bus on-the-go full speed End Point 1 Out - Priority 105 - Address 0x1C8 */
.word USB_OTG_FS_EP1_IN_irq_handler	/* Universal serial bus on-the-go full speed End Point 1 In - Priority 106 - Address 0x1CC */
.word USB_OTG_FS_WKUP_irq_handler	/* Universal serial bus on-the-go full speed Wakeup through External Interrupts (EXTI) - Priority 107 - Address 0x1D0 */
.word USB_OTG_FS_irq_handler		/* Universal serial bus on-the-go full speed - Priority 108 - Address 0x1D4 */
.word DMAMUX1_OVR_irq_handler		/* DMAMUX1 Overrun interrupt - Priority 109 - Address 0x1D8 */
.word HRTIM1_Master_irq_handler		/* High resolutio timer (HRTIM) Master Timer global Interrupt - Priority 110 - Address 0x1DC */
.word HRTIM1_TIMA_irq_handler		/* High resolution timer (HRTIM) Timer A global Interrupt - Priority 111 - Address 0x1E0 */
.word HRTIM1_TIMB_irq_handler		/* High resolution timer (HRTIM) Timer B global Interrupt - Priority 112 - Address 0x1E4 */
.word HRTIM1_TIMC_irq_handler		/* High resolution timer (HRTIM) Timer C global Interrupt - Priority 113 - Address 0x1E8 */
.word HRTIM1_TIMD_irq_handler		/* High resolution timer (HRTIM) Timer D global Interrupt - Priority 114 - Address 0x1EC */
.word HRTIM1_TIME_irq_handler		/* High resolution timer (HRTIM) Timer E global Interrupt - Priority 115 - Address 0x1F0 */
.word HRTIM1_FLT_irq_handler		/* High resolution timer (HRTIM) Fault global Interrupt - Priority 116 - Address 0x1F4 */
.word DFSDM1_FLT0_irq_handler		/* Digital filter for sigma delta modulators (DFSDM) Filter0 Interrupt - Priority 117 - Address 0x1F8 */
.word DFSDM1_FLT1_irq_handler		/* Digital filter for sigma delta modulators (DFSDM) Filter1 Interrupt - Priority 118 - Address 0x1FC */
.word DFSDM1_FLT2_irq_handler		/* Digital filter for sigma delta modulators (DFSDM) Filter2 Interrupt - Priority 119 - Address 0x200 */
.word DFSDM1_FLT3_irq_handler		/* Digital filter for sigma delta modulators (DFSDM) Filter3 Interrupt - Priority 120 - Address 0x204 */
.word SAI3_irq_handler			/* Serial Audio Interface 3 (SAI3) global Interrupt - Priority 121 - Address 0x208 */
.word SWPMI1_irq_handler		/* Serial Wire Interface 1 global interrupt - Priority 122 - Address 0x20C */
.word TIM15_irq_handler			/* General-purpose timer 15 (TIM15) global Interrupt - Priority 123 - Address 0x210 */
.word TIM16_irq_handler			/* General-purpose timer 16 (TIM16) global Interrupt - Priority 124 - Address 0x214 */
.word TIM17_irq_handler			/* General-purpose timer 17 (TIM17) global Interrupt - Priority 125 - Address 0x218 */
.word MDIOS_WKUP_irq_handler		/* Management data input/output (MDIOS) Wakeup  Interrupt - Priority 126 - Address 0x21C */
.word MDIOS_irq_handler			/* Management data input/output (MDIOS) global Interrupt - Priority 127 - Address 0x220 */
.word JPEG_irq_handler			/* JPEG global Interrupt - Priority 128 - Address 0x224 */
.word MDMA_irq_handler			/* Multi-Direct memory Access (MDMA) global Interrupt - Priority 129 - Address 0x228 */
.word DSI_DSI_wakeup_irq_handler	/* Display Serial Interface (DSI) Host global and wakeup Interrupt - Priority 130 - Address 0x22C */
.word SDMMC2_irq_handler		/* Secure digital and multimedia card  (SDMMC2) global Interrupt - Priority 131 - Address 0x230 */
.word HSEM1_irq_handler			/* Hardware semaphores 1 (HSEM1) global Interrupt - Priority 132 - Address 0x234 */
.word HSEM2_irq_handler			/* Hardware semaphores 1 (HSEM1) global Interrupt - Priority 133 - Address 0x238 */
.word ADC3_irq_handler			/* Analog digital converter 3 (ADC3) global Interrupt - Priority 134 - Address 0x23C */
.word DMAMUX2_OVR_irq_handler		/* Direct memory access request multiplexer (DMAMUX) Overrun interrupt - Priority 135 - Address 0x240 */
.word BDMA_Channel0_irq_handler		/* Basic Direct memory Access (BDMA) Channel 0 global Interrupt - Priority 136 - Address 0x244 */
.word BDMA_Channel1_irq_handler		/* Basic Direct memory Access (BDMA) Channel 1 global Interrupt - Priority 137 - Address 0x248 */
.word BDMA_Channel2_irq_handler		/* Basic Direct memory Access (BDMA) Channel 2 global Interrupt - Priority 138 - Address 0x24C */
.word BDMA_Channel3_irq_handler		/* Basic Direct memory Access (BDMA) Channel 3 global Interrupt - Priority 139 - Address 0x250 */
.word BDMA_Channel4_irq_handler		/* Basic Direct memory Access (BDMA) Channel 4 global Interrupt - Priority 140 - Address 0x254 */
.word BDMA_Channel5_irq_handler		/* Basic Direct memory Access (BDMA) Channel 5 global Interrupt - Priority 141 - Address 0x258 */
.word BDMA_Channel6_irq_handler		/* Basic Direct memory Access (BDMA) Channel 6 global Interrupt - Priority 142 - Address 0x25C */
.word BDMA_Channel7_irq_handler		/* Basic Direct memory Access (BDMA) Channel 7 global Interrupt - Priority 143 - Address 0x260 */
.word COMP1_irq_handler			/* Comparator (COMP1) global Interrupt - Priority 144 - Address 0x264 */
.word LPTIM2_irq_handler		/* Low power timer 2 (LPTIM2) global interrupt - Priority 145 - Address 0x268 */
.word LPTIM3_irq_handler		/* Low power timer 3 (LPTIM3) global interrupt - Priority 146 - Address 0x26C */
.word LPTIM4_irq_handler		/* Low power timer 4 (LPTIM4) global interrupt - Priority 147 - Address 0x270 */
.word LPTIM5_irq_handler		/* Low power timer 5 (LPTIM5) global interrupt - Priority 148 - Address 0x274 */
.word LPUART1_irq_handler		/* Low-power universal asynchronous receiver transmitter 1 (LPUART1) interrupt - Priority 149 - Address 0x278 */
.word WWDG_RST_irq_handler		/* Window Watchdog reset interrupt (exti_d2_wwdg_it, exti_d1_wwdg_it) - Priority 150 - Address 0x27C */
.word CRS_irq_handler			/* Clock Recovery Global Interrupt - Priority 151 - Address 0x280 */
.word ECC_irq_handler			/* ECC diagnostic Global Interrupt - Priority 152 - Address 0x284 */
.word SAI4_irq_handler			/* Serial Audio Interface 4 (SAI4) global interrupt - Priority 153 - Address 0x288 */
.word 0					/* Reserved - Priority 154 - Address 0x28C */
.word CPU_hold_irq_handler		/* CPU hold Interrupt - Priority 155 - Address 0x290 */
.word WAKEUP_PIN_irq_handler		/* Interrupt for all 6 wake-up pins - Priority 156 - Address 0x294 */

/*******************************************************************************
*
* Provide weak aliases for each Exception handler to the default_interrupt_handler.
* As they are weak aliases, any function with the same name will override
* this definition.
*
*******************************************************************************/
.weak      NMI_handler
.thumb_set NMI_handler,default_interrupt_handler

.weak      HardFault_handler
.thumb_set HardFault_handler,default_interrupt_handler

.weak      MemManage_handler
.thumb_set MemManage_handler,default_interrupt_handler

.weak      BusFault_handler
.thumb_set BusFault_handler,default_interrupt_handler

.weak      UsageFault_handler
.thumb_set UsageFault_handler,default_interrupt_handler

.weak      SVCall_handler
.thumb_set SVCall_handler,default_interrupt_handler

.weak      DebugMonitor_handler
.thumb_set DebugMonitor_handler,default_interrupt_handler

.weak      PendSV_handler
.thumb_set PendSV_handler,default_interrupt_handler

.weak      SysTick_handler
.thumb_set SysTick_handler,default_interrupt_handler

.weak      WWDG_irq_handler
.thumb_set WWDG_irq_handler,default_interrupt_handler

.weak      PVD_irq_handler
.thumb_set PVD_irq_handler,default_interrupt_handler

.weak      TAMP_STAMP_irq_handler
.thumb_set TAMP_STAMP_irq_handler,default_interrupt_handler

.weak      RTC_WKUP_irq_handler
.thumb_set RTC_WKUP_irq_handler,default_interrupt_handler

.weak      FLASH_irq_handler
.thumb_set FLASH_irq_handler,default_interrupt_handler

.weak      RCC_irq_handler
.thumb_set RCC_irq_handler,default_interrupt_handler

.weak      EXTI0_irq_handler
.thumb_set EXTI0_irq_handler,default_interrupt_handler

.weak      EXTI1_irq_handler
.thumb_set EXTI1_irq_handler,default_interrupt_handler

.weak      EXTI2_irq_handler
.thumb_set EXTI2_irq_handler,default_interrupt_handler

.weak      EXTI3_irq_handler
.thumb_set EXTI3_irq_handler,default_interrupt_handler

.weak      EXTI4_irq_handler
.thumb_set EXTI4_irq_handler,default_interrupt_handler

.weak      DMA1_Stream0_irq_handler
.thumb_set DMA1_Stream0_irq_handler,default_interrupt_handler

.weak      DMA1_Stream1_irq_handler
.thumb_set DMA1_Stream1_irq_handler,default_interrupt_handler

.weak      DMA1_Stream2_irq_handler
.thumb_set DMA1_Stream2_irq_handler,default_interrupt_handler

.weak      DMA1_Stream3_irq_handler
.thumb_set DMA1_Stream3_irq_handler,default_interrupt_handler

.weak      DMA1_Stream4_irq_handler
.thumb_set DMA1_Stream4_irq_handler,default_interrupt_handler

.weak      DMA1_Stream5_irq_handler
.thumb_set DMA1_Stream5_irq_handler,default_interrupt_handler

.weak      DMA1_Stream6_irq_handler
.thumb_set DMA1_Stream6_irq_handler,default_interrupt_handler

.weak      ADC1_ADC2_irq_handler
.thumb_set ADC1_ADC2_irq_handler,default_interrupt_handler

.weak      FDCAN1_IT0_irq_handler
.thumb_set FDCAN1_IT0_irq_handler,default_interrupt_handler

.weak      FDCAN2_IT0_irq_handler
.thumb_set FDCAN2_IT0_irq_handler,default_interrupt_handler

.weak      FDCAN1_IT1_irq_handler
.thumb_set FDCAN1_IT1_irq_handler,default_interrupt_handler

.weak      FDCAN2_IT1_irq_handler
.thumb_set FDCAN2_IT1_irq_handler,default_interrupt_handler

.weak      EXTI9_5_irq_handler
.thumb_set EXTI9_5_irq_handler,default_interrupt_handler

.weak      TIM1_BRK_irq_handler
.thumb_set TIM1_BRK_irq_handler,default_interrupt_handler

.weak      TIM1_UP_irq_handler
.thumb_set TIM1_UP_irq_handler,default_interrupt_handler

.weak      TIM1_TRG_COM_irq_handler
.thumb_set TIM1_TRG_COM_irq_handler,default_interrupt_handler

.weak      TIM1_CC_irq_handler
.thumb_set TIM1_CC_irq_handler,default_interrupt_handler

.weak      TIM2_irq_handler
.thumb_set TIM2_irq_handler,default_interrupt_handler

.weak      TIM3_irq_handler
.thumb_set TIM3_irq_handler,default_interrupt_handler

.weak      TIM4_irq_handler
.thumb_set TIM4_irq_handler,default_interrupt_handler

.weak      I2C1_EV_irq_handler
.thumb_set I2C1_EV_irq_handler,default_interrupt_handler

.weak      I2C1_ER_irq_handler
.thumb_set I2C1_ER_irq_handler,default_interrupt_handler

.weak      I2C2_EV_irq_handler
.thumb_set I2C2_EV_irq_handler,default_interrupt_handler

.weak      I2C2_ER_irq_handler
.thumb_set I2C2_ER_irq_handler,default_interrupt_handler

.weak      SPI1_irq_handler
.thumb_set SPI1_irq_handler,default_interrupt_handler

.weak      SPI2_irq_handler
.thumb_set SPI2_irq_handler,default_interrupt_handler

.weak      USART1_irq_handler
.thumb_set USART1_irq_handler,default_interrupt_handler

.weak      USART2_irq_handler
.thumb_set USART2_irq_handler,default_interrupt_handler

.weak      USART3_irq_handler
.thumb_set USART3_irq_handler,default_interrupt_handler

.weak      EXTI15_10_irq_handler
.thumb_set EXTI15_10_irq_handler,default_interrupt_handler

.weak      RTC_Alarm_irq_handler
.thumb_set RTC_Alarm_irq_handler,default_interrupt_handler

.weak      TIM8_BRK_TIM12_irq_handler
.thumb_set TIM8_BRK_TIM12_irq_handler,default_interrupt_handler

.weak      TIM8_UP_TIM13_irq_handler
.thumb_set TIM8_UP_TIM13_irq_handler,default_interrupt_handler

.weak      TIM8_TRG_COM_TIM14_irq_handler
.thumb_set TIM8_TRG_COM_TIM14_irq_handler,default_interrupt_handler

.weak      TIM8_CC_irq_handler
.thumb_set TIM8_CC_irq_handler,default_interrupt_handler

.weak      DMA1_Stream7_irq_handler
.thumb_set DMA1_Stream7_irq_handler,default_interrupt_handler

.weak      FMC_irq_handler
.thumb_set FMC_irq_handler,default_interrupt_handler

.weak      SDMMC1_irq_handler
.thumb_set SDMMC1_irq_handler,default_interrupt_handler

.weak      TIM5_irq_handler
.thumb_set TIM5_irq_handler,default_interrupt_handler

.weak      SPI3_irq_handler
.thumb_set SPI3_irq_handler,default_interrupt_handler

.weak      UART4_irq_handler
.thumb_set UART4_irq_handler,default_interrupt_handler

.weak      UART5_irq_handler
.thumb_set UART5_irq_handler,default_interrupt_handler

.weak      TIM6_DAC_irq_handler
.thumb_set TIM6_DAC_irq_handler,default_interrupt_handler

.weak      TIM7_irq_handler
.thumb_set TIM7_irq_handler,default_interrupt_handler

.weak      DMA2_Stream0_irq_handler
.thumb_set DMA2_Stream0_irq_handler,default_interrupt_handler

.weak      DMA2_Stream1_irq_handler
.thumb_set DMA2_Stream1_irq_handler,default_interrupt_handler

.weak      DMA2_Stream2_irq_handler
.thumb_set DMA2_Stream2_irq_handler,default_interrupt_handler

.weak      DMA2_Stream3_irq_handler
.thumb_set DMA2_Stream3_irq_handler,default_interrupt_handler

.weak      DMA2_Stream4_irq_handler
.thumb_set DMA2_Stream4_irq_handler,default_interrupt_handler

.weak      ETH_irq_handler
.thumb_set ETH_irq_handler,default_interrupt_handler

.weak      ETH_WKUP_irq_handler
.thumb_set ETH_WKUP_irq_handler,default_interrupt_handler

.weak      FDCAN_CAL_irq_handler
.thumb_set FDCAN_CAL_irq_handler,default_interrupt_handler

.weak      CM7_SEV_irq_handler
.thumb_set CM7_SEV_irq_handler,default_interrupt_handler

.weak      CM4_SEV_irq_handler
.thumb_set CM4_SEV_irq_handler,default_interrupt_handler

.weak      DMA2_Stream5_irq_handler
.thumb_set DMA2_Stream5_irq_handler,default_interrupt_handler

.weak      DMA2_Stream6_irq_handler
.thumb_set DMA2_Stream6_irq_handler,default_interrupt_handler

.weak      DMA2_Stream7_irq_handler
.thumb_set DMA2_Stream7_irq_handler,default_interrupt_handler

.weak      USART6_irq_handler
.thumb_set USART6_irq_handler,default_interrupt_handler

.weak      I2C3_EV_irq_handler
.thumb_set I2C3_EV_irq_handler,default_interrupt_handler

.weak      I2C3_ER_irq_handler
.thumb_set I2C3_ER_irq_handler,default_interrupt_handler

.weak      USB_OTG_HS_EP1_OUT_irq_handler
.thumb_set USB_OTG_HS_EP1_OUT_irq_handler,default_interrupt_handler

.weak      USB_OTG_HS_EP1_IN_irq_handler
.thumb_set USB_OTG_HS_EP1_IN_irq_handler,default_interrupt_handler

.weak      USB_OTG_HS_WKUP_irq_handler
.thumb_set USB_OTG_HS_WKUP_irq_handler,default_interrupt_handler

.weak      USB_OTG_HS_irq_handler
.thumb_set USB_OTG_HS_irq_handler,default_interrupt_handler

.weak      DCMI_irq_handler
.thumb_set DCMI_irq_handler,default_interrupt_handler

.weak      CRYP_irq_handler
.thumb_set CRYP_irq_handler,default_interrupt_handler

.weak      RNG_irq_handler
.thumb_set RNG_irq_handler,default_interrupt_handler

.weak      FPU_irq_handler
.thumb_set FPU_irq_handler,default_interrupt_handler

.weak      UART7_irq_handler
.thumb_set UART7_irq_handler,default_interrupt_handler

.weak      UART8_irq_handler
.thumb_set UART8_irq_handler,default_interrupt_handler

.weak      SPI4_irq_handler
.thumb_set SPI4_irq_handler,default_interrupt_handler

.weak      SPI5_irq_handler
.thumb_set SPI5_irq_handler,default_interrupt_handler

.weak      SPI6_irq_handler
.thumb_set SPI6_irq_handler,default_interrupt_handler

.weak      SAI1_irq_handler
.thumb_set SAI1_irq_handler,default_interrupt_handler

.weak      LTDC_irq_handler
.thumb_set LTDC_irq_handler,default_interrupt_handler

.weak      LTDC_ER_irq_handler
.thumb_set LTDC_ER_irq_handler,default_interrupt_handler

.weak      DMA2D_irq_handler
.thumb_set DMA2D_irq_handler,default_interrupt_handler

.weak      SAI2_irq_handler
.thumb_set SAI2_irq_handler,default_interrupt_handler

.weak      QUADSPI_irq_handler
.thumb_set QUADSPI_irq_handler,default_interrupt_handler

.weak      LPTIM1_irq_handler
.thumb_set LPTIM1_irq_handler,default_interrupt_handler

.weak      CEC_irq_handler
.thumb_set CEC_irq_handler,default_interrupt_handler

.weak      I2C4_EV_irq_handler
.thumb_set I2C4_EV_irq_handler,default_interrupt_handler

.weak      I2C4_ER_irq_handler
.thumb_set I2C4_ER_irq_handler,default_interrupt_handler

.weak      SPDIF_RX_irq_handler
.thumb_set SPDIF_RX_irq_handler,default_interrupt_handler

.weak      USB_OTG_FS_EP1_OUT_irq_handler
.thumb_set USB_OTG_FS_EP1_OUT_irq_handler,default_interrupt_handler

.weak      USB_OTG_FS_EP1_IN_irq_handler
.thumb_set USB_OTG_FS_EP1_IN_irq_handler,default_interrupt_handler

.weak      USB_OTG_FS_WKUP_irq_handler
.thumb_set USB_OTG_FS_WKUP_irq_handler,default_interrupt_handler

.weak      USB_OTG_FS_irq_handler
.thumb_set USB_OTG_FS_irq_handler,default_interrupt_handler

.weak      DMAMUX1_OVR_irq_handler
.thumb_set DMAMUX1_OVR_irq_handler,default_interrupt_handler

.weak      HRTIM1_Master_irq_handler
.thumb_set HRTIM1_Master_irq_handler,default_interrupt_handler

.weak      HRTIM1_TIMA_irq_handler
.thumb_set HRTIM1_TIMA_irq_handler,default_interrupt_handler

.weak      HRTIM1_TIMB_irq_handler
.thumb_set HRTIM1_TIMB_irq_handler,default_interrupt_handler

.weak      HRTIM1_TIMC_irq_handler
.thumb_set HRTIM1_TIMC_irq_handler,default_interrupt_handler

.weak      HRTIM1_TIMD_irq_handler
.thumb_set HRTIM1_TIMD_irq_handler,default_interrupt_handler

.weak      HRTIM1_TIME_irq_handler
.thumb_set HRTIM1_TIME_irq_handler,default_interrupt_handler

.weak      HRTIM1_FLT_irq_handler
.thumb_set HRTIM1_FLT_irq_handler,default_interrupt_handler

.weak      DFSDM1_FLT0_irq_handler
.thumb_set DFSDM1_FLT0_irq_handler,default_interrupt_handler

.weak      DFSDM1_FLT1_irq_handler
.thumb_set DFSDM1_FLT1_irq_handler,default_interrupt_handler

.weak      DFSDM1_FLT2_irq_handler
.thumb_set DFSDM1_FLT2_irq_handler,default_interrupt_handler

.weak      DFSDM1_FLT3_irq_handler
.thumb_set DFSDM1_FLT3_irq_handler,default_interrupt_handler

.weak      SAI3_irq_handler
.thumb_set SAI3_irq_handler,default_interrupt_handler

.weak      SWPMI1_irq_handler
.thumb_set SWPMI1_irq_handler,default_interrupt_handler

.weak      TIM15_irq_handler
.thumb_set TIM15_irq_handler,default_interrupt_handler

.weak      TIM16_irq_handler
.thumb_set TIM16_irq_handler,default_interrupt_handler

.weak      TIM17_irq_handler
.thumb_set TIM17_irq_handler,default_interrupt_handler

.weak      MDIOS_WKUP_irq_handler
.thumb_set MDIOS_WKUP_irq_handler,default_interrupt_handler

.weak      MDIOS_irq_handler
.thumb_set MDIOS_irq_handler,default_interrupt_handler

.weak      JPEG_irq_handler
.thumb_set JPEG_irq_handler,default_interrupt_handler

.weak      MDMA_irq_handler
.thumb_set MDMA_irq_handler,default_interrupt_handler

.weak      DSI_DSI_wakeup_irq_handler
.thumb_set DSI_DSI_wakeup_irq_handler,default_interrupt_handler

.weak      SDMMC2_irq_handler
.thumb_set SDMMC2_irq_handler,default_interrupt_handler

.weak      HSEM1_irq_handler
.thumb_set HSEM1_irq_handler,default_interrupt_handler

.weak      HSEM2_irq_handler
.thumb_set HSEM2_irq_handler,default_interrupt_handler

.weak      ADC3_irq_handler
.thumb_set ADC3_irq_handler,default_interrupt_handler

.weak      DMAMUX2_OVR_irq_handler
.thumb_set DMAMUX2_OVR_irq_handler,default_interrupt_handler

.weak      BDMA_Channel0_irq_handler
.thumb_set BDMA_Channel0_irq_handler,default_interrupt_handler

.weak      BDMA_Channel1_irq_handler
.thumb_set BDMA_Channel1_irq_handler,default_interrupt_handler

.weak      BDMA_Channel2_irq_handler
.thumb_set BDMA_Channel2_irq_handler,default_interrupt_handler

.weak      BDMA_Channel3_irq_handler
.thumb_set BDMA_Channel3_irq_handler,default_interrupt_handler

.weak      BDMA_Channel4_irq_handler
.thumb_set BDMA_Channel4_irq_handler,default_interrupt_handler

.weak      BDMA_Channel5_irq_handler
.thumb_set BDMA_Channel5_irq_handler,default_interrupt_handler

.weak      BDMA_Channel6_irq_handler
.thumb_set BDMA_Channel6_irq_handler,default_interrupt_handler

.weak      BDMA_Channel7_irq_handler
.thumb_set BDMA_Channel7_irq_handler,default_interrupt_handler

.weak      COMP1_irq_handler
.thumb_set COMP1_irq_handler,default_interrupt_handler

.weak      LPTIM2_irq_handler
.thumb_set LPTIM2_irq_handler,default_interrupt_handler

.weak      LPTIM3_irq_handler
.thumb_set LPTIM3_irq_handler,default_interrupt_handler

.weak      LPTIM4_irq_handler
.thumb_set LPTIM4_irq_handler,default_interrupt_handler

.weak      LPTIM5_irq_handler
.thumb_set LPTIM5_irq_handler,default_interrupt_handler

.weak      LPUART1_irq_handler
.thumb_set LPUART1_irq_handler,default_interrupt_handler

.weak      WWDG_RST_irq_handler
.thumb_set WWDG_RST_irq_handler,default_interrupt_handler

.weak      CRS_irq_handler
.thumb_set CRS_irq_handler,default_interrupt_handler

.weak      ECC_irq_handler
.thumb_set ECC_irq_handler,default_interrupt_handler

.weak      SAI4_irq_handler
.thumb_set SAI4_irq_handler,default_interrupt_handler

.weak      CPU_hold_irq_handler
.thumb_set CPU_hold_irq_handler,default_interrupt_handler

.weak      WAKEUP_PIN_irq_handler
.thumb_set WAKEUP_PIN_irq_handler,default_interrupt_handler

