/*
 * TIMER_interface.h
 *
 * Created: 9/30/2021 1:03:23 PM
 *  Author: Ghaith
 */ 


#ifndef TIMER1_INTERFACE_H_
#define TIMER1_INTERFACE_H_

void TIMER1_init(void);
void TIMER1_EnableCapture(void);
void TIMER1_DisableCapture(void);
void TIMER1_EnableCompareA(void);
void TIMER1_DisableCompareA(void);
void TIMER1_EnableCompareB(void);
void TIMER1_DisableCompareB(void);
void TIMER1_EnableOverflow(void);
void TIMER1_DisableOverflow(void);
void TIMER1_setValue(u16 val);
void TIMER1_setCompareA(u16 val);
void TIMER1_setCompareB(u16 val);
void TIMER1_setCapture(u16 val);
void TIMER1_prescalerReset0and1(void);
void TIMER1_forceCompareA(void);
void TIMER1_forceCompareB(void);


#endif /* TIMER_INTERFACE_H_ */