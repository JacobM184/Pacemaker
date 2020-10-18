/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include "system.h"
#include "values.h"
#include "sys/alt_alarm.h"

//Timer ISR
void timer_controller(){
	if(count >= VRP_VALUE){
		VRP_ex = 1;
	}

	if(count >= PVARP_VALUE){
		PVARP_ex = 1;
	}

	if(count >= AEI_VALUE){
		AEI_ex = 1;
	}
	else if(AEI_stop){
		AEI_stop = 0;
	}

	if(count >= LRI_VALUE){
		LRI_ex = 1;
		count = 0;
	}
	else if(LRI_Stop){
		LRI_stop = 0;
		count = 0;
	}

	if(count >= URI_VALUE){
		URI_ex = 1;
	}
}


alt_32 timer_isr_A(void* context){
	//Send out a signal that tells that AVI expires
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x1);
	return 1000;
}

alt_32 timer_isr_V(void* context){
	//Send out a signal that tells that PVARP expires
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x2);
	return 1000;
}

//BUTTON ISR
void button_isr(void* context , alt_u32 id){
	int* temp = (int*)context;
	(*temp) = IORD_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE);

	unsigned int key0 = (*temp) & 0x1;
	unsigned int key1 = (*temp) & 0x2;

	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	if(key0){
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x1);
	}
	else if(key1){
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x2);
	}
}

void buttons_isr_init(){
	int buttonValue = 1;
	void* context_going_to_be_passed = (void*) &buttonValue;
	IOWR_ALTERA_AVALON_PIO_EDGE_CAP(BUTTONS_BASE, 0);
	IOWR_ALTERA_AVALON_PIO_IRQ_MASK(BUTTONS_BASE, 0x3);
	alt_irq_register(BUTTONS_IRQ, context_going_to_be_passed, button_isr);
}

//LCD
int lcd_set_mode(unsigned int *prevMode, FILE *lcd){
	int currentMode = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x3;

	if ((lcd != NULL) && (currentMode != *prevMode)){
		#define ESC 27
		#define CLEAR_LCD_STRING "[2J"
		fprintf(lcd, "%c%s", ESC, CLEAR_LCD_STRING);
		fprintf(lcd, "CURRENT MODE: %d\n", currentMode);

		switch (currentMode){
		case 1:
			fprintf(lcd, "BUTTONS\n");
			break;
		case 2:
			fprintf(lcd, "UART\n");
			break;
		default:
			fprintf(lcd, "DISABLED\n");
			break;
		}

		*prevMode = currentMode;
	}
}
int main(){
	FILE *lcd;
	lcd = fopen(LCD_NAME, "w");
	int plh = 500;
	void* timerContext = (void*)&plh;
	unsigned int output = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x3;
	alt_alarm tAVI, tPVARP, tVRP, tAEI, tLRI, tURI;

	buttons_isr_init();
	alt_alarm_start(&tAVI, 500, timer_isr_AVI, timerContext);
	alt_alarm_start(&tPVARP, 1000, timer_isr_PVARP, timerContext);
	alt_alarm_start(&tVRP, 1500, timer_isr_VRP, timerContext);
	alt_alarm_start(&tAEI, 2000, timer_isr_AEI, timerContext);
	alt_alarm_start(&tLRI, 2500, timer_isr_LRI, timerContext);
	alt_alarm_start(&tURI, 3000, timer_isr_URI, timerContext);

	for(;;){
		lcd_set_mode(&output, lcd);

		switch (output){
		//BUTTONS
		case 1:

			break;

		//UART
		case 2:
			break;

		//DISABLED
		default:
			break;
		}
	}
}
