#include <stdio.h>
#include <altera_avalon_pio_regs.h>
#include "system.h"
#include "string.h"
#include "sys/alt_alarm.h"
#include "pacemaker.h"
#include "value.h"
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <altera_avalon_uart.h>


alt_alarm tAVI, tPVARP, tVRP, tAEI, tLRI, tURI, tAPace, tVPace;

unsigned int led_base = 0x0;
char storedData;
unsigned int dataFound = FALSE;
unsigned int URI_Timer = 0;
unsigned int LRI_Timer = 0;

unsigned int timerLED = 0x0;

unsigned int PVARP_ex_F = FALSE;
unsigned int AVI_ex_F = FALSE;
unsigned int URI_ex_F = FALSE;
unsigned int LRI_ex_F = FALSE;
unsigned int VRP_ex_F = FALSE;
unsigned int AEI_ex_F = FALSE;

unsigned int PVARPActive = FALSE;
unsigned int AVIActive = FALSE;
unsigned int URIActive = FALSE;
unsigned int LRIActive = FALSE;
unsigned int VRPActive = FALSE;
unsigned int AEIActive = FALSE;



void updateEX(){
	unsigned int* expFlags[6] = {
		&PVARP_ex_F,
		&AVI_ex_F,
		&URI_ex_F,
		&LRI_ex_F,
		&VRP_ex_F,
		&AEI_ex_F
	};

	char* expVar[6] = {
		&PVARP_ex,
		&AVI_ex,
		&URI_ex,
		&LRI_ex,
		&VRP_ex,
		&AEI_ex
	};

	for(int i = 0; i < 6; i++){
		if(*(expFlags[i])){
			*(expVar[i]) = (char)TRUE;
			*(expFlags[i]) = FALSE;
		}
	}
}

void set_leds(){
	if(AVIActive){
		timerLED |= AVI_LED;
	}
	else{
		timerLED &= ~AVI_LED;
	}

	if(PVARPActive){
		timerLED |= PVARP_LED;
	}
	else{
		timerLED &= ~PVARP_LED;
	}

	if(VRPActive){
		timerLED |= VRP_LED;
	}
	else{
		timerLED &= ~VRP_LED;
	}

	if(AEIActive){
		timerLED |= AEI_LED;
	}
	else{
		timerLED &= ~AEI_LED;
	}

	if(LRIActive){
		timerLED |= LRI_LED;
	}
	else{
		timerLED &= ~LRI_LED;
	}

	if(URIActive){
		timerLED |= URI_LED;
	}
	else{
		timerLED &= ~URI_LED;
	}
}

alt_u32 timer_isr_AVI(void* context){
	//Send out a signal that tells that AVI expires
	AVI_ex_F = TRUE;
	AVIActive = FALSE;
	return 0;
}

alt_u32 timer_isr_PVARP(void* context){
	//Send out a signal that tells that PVARP expires
	PVARP_ex_F = TRUE;
	PVARPActive = FALSE;
	return 0;
}

alt_u32 timer_isr_VRP(void* context){
	//Send out a signal that tells that PVARP expires
	VRP_ex_F = TRUE;
	VRPActive = FALSE;
	return 0;
}

alt_u32 timer_isr_AEI(void* context){
	//Send out a signal that tells that PVARP expires
	AEI_ex_F = TRUE;
	AEIActive = FALSE;
	return 0;
}

alt_u32 timer_isr_LRI(void* context){
	//Send out a signal that tells that PVARP expires
	LRI_ex_F = TRUE;
	LRIActive = FALSE;
	return 0;
}

alt_u32 timer_isr_URI(void* context){
	//Send out a signal that tells that PVARP expires
	URI_ex_F = TRUE;
	URIActive = FALSE;
	return 0;
}

alt_u32 timer_isr_VPace(void* context){
	//Send out a signal that tells that PVARP expires
	led_base &= ~(0x2);
	return 0;
}

alt_u32 timer_isr_APace(void* context){
	//Send out a signal that tells that PVARP expires
	led_base &= ~(0x8);
	return 0;
}


void transmit(int fd){
	if((int)APace){
		write(fd, 'A\n', 2);
	}

	if((int)VPace){
		write(fd, 'V\n', 2);
	}
}

void receive(int fd){
	void* temp = (void*)&storedData;
	int readVal = read(fd, temp, 1);

	if(readVal != -1){
		if(storedData == 'A'){
			//printf("A: DETECTED \n");
			ASense = (char)1;
			VSense = (char)0;
		}
		else if(storedData == 'V'){
			//printf("V: DETECTED \n");
			ASense = (char)0;
			VSense = (char)1;
		}
	}
}

//TICK
void tickCycle(){
	int time = 0;
	void* timerContext = (void*)time;

	//EX
	updateEX();

	//TICK
	tick();

	//RESET INPUTS
	R = (char)FALSE;

	AVI_ex = (char)FALSE;
	VRP_ex = (char)FALSE;
	PVARP_ex = (char)FALSE;
	AEI_ex = (char)FALSE;
	URI_ex = (char)FALSE;
	LRI_ex = (char)FALSE;

	ASense = (char)FALSE;
	VSense = (char)FALSE;

	//OUTPUT
	if((int)VPace){
		alt_alarm_start(&tVPace, 100, timer_isr_VPace, timerContext);
		led_base |= 0x2;
	}

	if((int)APace){
		alt_alarm_start(&tAPace, 100, timer_isr_APace, timerContext);
		led_base |= 0x8;
	}


	//AVI
	if((int)AVI_start && !AVIActive){
		alt_alarm_start(&tAVI, AVI_VALUE, timer_isr_AVI, timerContext);
		AVIActive = TRUE;
	}

	if((int)AVI_stop && AVIActive){
		alt_alarm_stop(&tAVI);
		AVIActive = FALSE;
	}

	//VRP
	if((int)VRP_start && !VRPActive){
		alt_alarm_start(&tVRP, VRP_VALUE, timer_isr_VRP, timerContext);
		VRPActive = TRUE;
	}

	//PVARP
	if((int)PVARP_start && !PVARPActive){
		alt_alarm_start(&tPVARP, PVARP_VALUE, timer_isr_PVARP, timerContext);
		PVARPActive =  TRUE;
	}

	//AEI
	if((int)AEI_start && !AEIActive){
		alt_alarm_start(&tAEI, AEI_VALUE, timer_isr_AEI, timerContext);
		AEIActive = TRUE;
	}

	if((int)AEI_stop && AEIActive){
		alt_alarm_stop(&tAEI);
		AEIActive = FALSE;
	}

	//LRI
	if((int)LRI_stop && LRIActive){
		alt_alarm_stop(&tLRI);
		LRIActive = FALSE;
	}

	if((int)LRI_start && !LRIActive){
		alt_alarm_start(&tLRI, LRI_VALUE, timer_isr_LRI, timerContext);
		LRIActive = TRUE;
	}

	//URI
	if((int)URI_start && !URIActive){
		alt_alarm_start(&tURI, URI_VALUE, timer_isr_URI, timerContext);
		URIActive = TRUE;
	}
}

void lcd_set_mode(unsigned int *prevMode, FILE *lcd){
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

		R = (char)TRUE;
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x0);
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x0);
		*prevMode = currentMode;
	}
}
int main(){
	FILE *lcd;
	lcd = fopen(LCD_NAME, "w");
	unsigned int prevMode = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x3;

	int fd = open(UART_NAME, O_NONBLOCK | O_RDWR);

	if(fd == -1){
		printf("Error: File descriptor invalid!");
	}
	else{
		printf("SUCCESSFUL: File Descriptor Found");
	}

	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x0);
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x0);


	// enable UART receiver interrupt
	//IOWR_UART_CONTROL(UART_BASE, (IORD_UART_CONTROL(UART_BASE) & IRRDY));

	// register UART interrupt
	//unsigned int contextNum = 0;
	//void* context = (void*) &contextNum;
	//alt_irq_register(UART_IRQ, context, receiver_interrupt);

	reset();

	for(;;){
		lcd_set_mode(&prevMode, lcd);

		switch(prevMode){
		case 1:
			VSense = (char)!((IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)) & 0x1);
			ASense = (char)!((IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)) & 0x2);

			tickCycle();

			set_leds();
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, timerLED);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, led_base);
			break;
		case 2:
			receive(fd);
			tickCycle();

			if((int)APace){
				write(fd, "A\n", 2);
			}

			if((int)VPace){
				write(fd, "V\n", 2);
			}

			set_leds();
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, timerLED);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, led_base);
			break;
		default:

			break;
		}




	}
}
