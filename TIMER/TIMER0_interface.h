/*
 * TIMER0_interface.h
 *
 * Created: 9/30/2021 1:02:34 PM
 *  Author: Ghaith
 */ 
#ifndef TIMER0_INTERFACE_H_
#define TIMER0_INTERFACE_H_

void TIMER0_init(void);
void TIMER0_EnableCompare(void);
void TIMER0_DisableCompare(void);
void TIMER0_EnableOverflow(void);
void TIMER0_DisableOverflow(void);
void TIMER0_setValue(u8 val);
void TIMER0_setCompare(u8 val);
void TIMER0_forceCompare(void);



#endif /*TIMER_INTERFACE_H_*/
