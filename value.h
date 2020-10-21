#ifndef VALUE_H_
#define VALUE_H_

#define TRUE 1
#define FALSE 0

//The time the light for the pacing gets turned on
#define PACE_TIME 20

//=========================================
//              TIMER EXPIRE
//=========================================
#define AVI_VALUE 300
#define VRP_VALUE 150
#define PVARP_VALUE 50
#define AEI_VALUE 800
#define LRI_VALUE 950
#define URI_VALUE 900

//======================================================
//              TIMER ACTIVE LED LOCATION
//======================================================
#define AVI_LED 0x1
#define PVARP_LED 0x2
#define VRP_LED 0x4
#define AEI_LED 0x8
#define LRI_LED 0x10
#define URI_LED 0x20
#define VPACE_LED 0x1
#define APACE_LED 0x4

#endif /* VALUE_H_ */
