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

//=============================================
//              GLOBAL VARIABLES
//=============================================

//Intialised timer data type
alt_alarm tAVI, tPVARP, tVRP, tAEI, tLRI, tURI, tAPace, tVPace;


//Stores the character that was stored in the file for UART
char storedData;

//Initialise the LED base values
unsigned int led_base = 0x0;
unsigned int timerLED = 0x0;

//Initialise the expiration flags for the timers
unsigned int PVARP_ex_F = FALSE;
unsigned int AVI_ex_F = FALSE;
unsigned int URI_ex_F = FALSE;
unsigned int LRI_ex_F = FALSE;
unsigned int VRP_ex_F = FALSE;
unsigned int AEI_ex_F = FALSE;

//Intialise the active flags for the timers
unsigned int PVARPActive = FALSE;
unsigned int AVIActive = FALSE;
unsigned int URIActive = FALSE;
unsigned int LRIActive = FALSE;
unsigned int VRPActive = FALSE;
unsigned int AEIActive = FALSE;

//==================================
//              TIMERS
//==================================

//Timers for the interval/periods of the pacemaker
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


//Signals for the LEDs of the VPace or APace
alt_u32 timer_isr_VPace(void* context){
	//Send out a signal that tells that PVARP expires
	led_base &= ~(VPACE_LED);
	return 0;
}

alt_u32 timer_isr_APace(void* context){
	//Send out a signal that tells that PVARP expires
	led_base &= ~(APACE_LED);
	return 0;
}



//==========================================
//              STATE MACHINES
//==========================================

//This function is used to update the state machines' expire inputs based on
//the flags that has been activated already.
void updateEX(){
	//Array of the expire flags' pointers
	unsigned int* expFlags[6] = {
		&PVARP_ex_F,
		&AVI_ex_F,
		&URI_ex_F,
		&LRI_ex_F,
		&VRP_ex_F,
		&AEI_ex_F
	};

	//Array of the expire inputs' pointers
	char* expVar[6] = {
		&PVARP_ex,
		&AVI_ex,
		&URI_ex,
		&LRI_ex,
		&VRP_ex,
		&AEI_ex
	};

	//Loop through the arrays and check if the flags are
	//true and set the inputs accordingly
	for(int i = 0; i < 6; i++){
		if(*(expFlags[i])){
			*(expVar[i]) = (char)TRUE;
			*(expFlags[i]) = FALSE;
		}
	}
}

//This function sets up the inputs to get ready for the state machine tick and
//from the output it turns the timers on or off depending on what was outputted
void tickCycle(){

	//check the expire flags and set up the state machine's flag accordingly
	updateEX();

	//tick
	tick();

	//reset the inputs
	R = (char)FALSE;

	AVI_ex = (char)FALSE;
	VRP_ex = (char)FALSE;
	PVARP_ex = (char)FALSE;
	AEI_ex = (char)FALSE;
	URI_ex = (char)FALSE;
	LRI_ex = (char)FALSE;

	ASense = (char)FALSE;
	VSense = (char)FALSE;

	//Start the VPace timers to illuminate it for PACE_TIME ms.
	if((int)VPace){
		alt_alarm_start(&tVPace, PACE_TIME, timer_isr_VPace, NULL);
		led_base |= VPACE_LED;
	}

	//Start the APace timers to illuminate it for PACE_TIME ms.
	if((int)APace){
		alt_alarm_start(&tAPace, PACE_TIME, timer_isr_APace, NULL);
		led_base |= APACE_LED;
	}


	//Start or Stop the AVI Timer
	if((int)AVI_start && !AVIActive){
		alt_alarm_start(&tAVI, AVI_VALUE, timer_isr_AVI, NULL);
		AVIActive = TRUE;
	}

	if((int)AVI_stop && AVIActive){
		alt_alarm_stop(&tAVI);
		AVIActive = FALSE;
	}

	//Start the VRP Timer
	if((int)VRP_start && !VRPActive){
		alt_alarm_start(&tVRP, VRP_VALUE, timer_isr_VRP, NULL);
		VRPActive = TRUE;
	}

	//Start the PVARP Timer
	if((int)PVARP_start && !PVARPActive){
		alt_alarm_start(&tPVARP, PVARP_VALUE, timer_isr_PVARP, NULL);
		PVARPActive =  TRUE;
	}

	//Start or Stop the AEI Timer
	if((int)AEI_start && !AEIActive){
		alt_alarm_start(&tAEI, AEI_VALUE, timer_isr_AEI, NULL);
		AEIActive = TRUE;
	}

	if((int)AEI_stop && AEIActive){
		alt_alarm_stop(&tAEI);
		AEIActive = FALSE;
	}

	//Start or Stop the LRI Timer
	if((int)LRI_stop && LRIActive){
		alt_alarm_stop(&tLRI);
		LRIActive = FALSE;
	}

	if((int)LRI_start && !LRIActive){
		alt_alarm_start(&tLRI, LRI_VALUE, timer_isr_LRI, NULL);
		LRIActive = TRUE;
	}

	//Start or Stop the URI Timer
	if((int)URI_stop && URIActive){
		alt_alarm_stop(&tURI);
		URIActive = FALSE;
	}

	if((int)URI_start && !URIActive){
		alt_alarm_start(&tURI, URI_VALUE, timer_isr_URI, NULL);
		URIActive = TRUE;
	}
}




//================================
//              LEDS
//================================

//Function that sets the LEDS
void set_leds(){
	//Sets or Clears the AVI LED bit
	if(AVIActive){
		timerLED |= AVI_LED;
	}
	else{
		timerLED &= ~AVI_LED;
	}

	//Sets or Clears the PVARP LED bit
	if(PVARPActive){
		timerLED |= PVARP_LED;
	}
	else{
		timerLED &= ~PVARP_LED;
	}

	//Sets or Clears the VRP LED bit
	if(VRPActive){
		timerLED |= VRP_LED;
	}
	else{
		timerLED &= ~VRP_LED;
	}

	//Sets or Clears the AEI LED bit
	if(AEIActive){
		timerLED |= AEI_LED;
	}
	else{
		timerLED &= ~AEI_LED;
	}

	//Sets or Clears the LRI LED bit
	if(LRIActive){
		timerLED |= LRI_LED;
	}
	else{
		timerLED &= ~LRI_LED;
	}

	//Sets or Clears the URI LED bit
	if(URIActive){
		timerLED |= URI_LED;
	}
	else{
		timerLED &= ~URI_LED;
	}
}

//================================
//              UART
//================================

//Transmits an 'A' or 'V' depending on the paced event
void transmit(int fd){

	//transmit APace signal
	if((int)APace){
		write(fd, "A\n", 2);
	}

	//transmit VPace signal
	if((int)VPace){
		write(fd, "V\n", 2);
	}
}

//Receives the data stored in the UART file and sets the
//Sensed inputs accordingly
void receive(int fd){

	//read the value inside the storedData
	void* temp = (void*)&storedData;
	int readVal = read(fd, temp, 1);

	//Checks if something has been detected
	if(readVal != -1){
		//Set the inputs accordingly
		if(storedData == 'A'){
			ASense = (char)1;
			VSense = (char)0;
		}
		else if(storedData == 'V'){
			ASense = (char)0;
			VSense = (char)1;
		}
	}
}

//===============================
//              LCD
//===============================

//Sets the LCD output to the current mode and reset the state machine
void lcd_set_mode(unsigned int *prevMode, FILE *lcd){
	int currentMode = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x3;

	//Check when if the current mode is the same as the previous mode
	if ((lcd != NULL) && (currentMode != *prevMode)){
		//Output the current mode
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

		//Reset the LEDs and State Machines
		R = (char)TRUE;
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x0);
		IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x0);
		*prevMode = currentMode;
	}
}

//==========================================
//              MAIN FUNCTION
//==========================================
int main(){

	//Intialise the LCD
	FILE *lcd;
	lcd = fopen(LCD_NAME, "w");
	unsigned int prevMode = IORD_ALTERA_AVALON_PIO_DATA(SWITCHES_BASE) & 0x3;

	//Intialise the UART and check if the UART has been found
	int fd = open(UART_NAME, O_NONBLOCK | O_RDWR);

	if(fd == -1){
		printf("Error: File descriptor invalid!");
	}
	else{
		printf("SUCCESSFUL: File Descriptor Found");
	}

	//Intialise the LEDs
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, 0x0);
	IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, 0x0);

	//Reset the State Machine
	reset();

	for(;;){
		//Output the LCD to the current mode
		lcd_set_mode(&prevMode, lcd);

		//Run Mode 1 or Mode 2 depending on the switches
		switch(prevMode){

		//MODE 1
		case 1:
			//Poll for the buttons to simulate the Ventricle or Atrial Events
			VSense = (char)!((IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)) & 0x1);
			ASense = (char)!((IORD_ALTERA_AVALON_PIO_DATA(BUTTONS_BASE)) & 0x2);

			//Do a single cycle of the state machine
			tickCycle();

			//Set the LEDs
			set_leds();
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, led_base);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, timerLED);
			break;

		//MODE 2
		case 2:
			//Receive and Transmit the values and do a single cycle of the state machine
			receive(fd);
			tickCycle();
			transmit(fd);

			//Set the LEDs
			set_leds();
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_GREEN_BASE, led_base);
			IOWR_ALTERA_AVALON_PIO_DATA(LEDS_RED_BASE, timerLED);
			break;
		default:
			break;
		}
	}
}
