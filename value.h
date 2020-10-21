#ifndef PACEMAKER_H_
#define PACEMAKER_H_

//=====================================
//              FUNCTIONS
//=====================================
void tick();
void reset();

//=================================
//              INPUT
//=================================
extern char R;
extern char ASense;
extern char VSense;

extern char PVARP_ex;
extern char AVI_ex;
extern char URI_ex;
extern char LRI_ex;
extern char VRP_ex;
extern char AEI_ex;

//==================================
//              OUTPUT
//==================================
extern char VPace;
extern char APace;

extern char AVI_stop;
extern char AEI_stop;
extern char LRI_stop;
extern char VRP_stop;
extern char PVARP_stop;
extern char URI_stop;

extern char VRP_start;
extern char PVARP_start;
extern char URI_start;
extern char AVI_start;
extern char AEI_start;
extern char LRI_start;

#endif /* PACEMAKER_H_ */
