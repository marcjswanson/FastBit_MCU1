/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void splash()
{
	printf("**************************\n");
	printf("*   003_DataCopyFlash   **\n");
	printf("**************************\n");
}

// this is a string literal (constant data) and will be stored in ROM (Flash memory)
const char *gpMessage = "Hi there, and good morning!";

// this is constant data.  This data will be stored in ROM (Flash memory)
const int gValue = 100;

// this is not constant data and will be stoed in RAM
char gMyData[50];



int main(void)
{
	splash();

	for ( uint32_t i = 0; i < strlen( gpMessage); i++ )
	{
		// this data is copied from ROM (Flash) to RAM (SRAM)
		gMyData[i] = *(gpMessage + i);
	}



    /* Loop forever */
	for(;;);
}
