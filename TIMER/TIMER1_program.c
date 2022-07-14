/*
 * TIMER_program.c
 *
 * Created: 9/30/2021 1:03:47 PM
 *  Author: Ghaith
 */ 
#include "Std_Types.h"
#include "Macros.h"
#include "TIMER1_private.h"
#include "TIMER1_configration.h"
#include "TIMER1_interface.h"

void TIMER1_init(void){
	if(TIMER1_noiseCanceller)SET_BIT(TCCR1B,ICNC1);
	if(TIMER1_edgeCapture)SET_BIT(TCCR1B,ICES1); 
	else CLEAR_BIT(TCCR1B,ICES1);
	#if GET_BIT(WGM1_mode,0)
		SET_BIT(TCCR1A,WGM10);
	#else
		CLEAR_BIT(TCCR1A,WGM10);
	#endif
	#if GET_BIT(WGM1_mode,1)
		SET_BIT(TCCR1A,WGM11);
	#else
		CLEAR_BIT(TCCR1A,WGM11);
	#endif
	#if GET_BIT(WGM1_mode,2)
		SET_BIT(TCCR1B,WGM12);
	#else
		CLEAR_BIT(TCCR1B,WGM12);
	#endif
	#if GET_BIT(WGM1_mode,3)
		SET_BIT(TCCR1B,WGM13);
	#else
		CLEAR_BIT(TCCR1B,WGM13);
	#endif
	
	
	#if TIMER1_compare_matchA == COM1_toggle
	
		CLEAR_BIT(TCCR1A,COM1A1);
		SET_BIT(TCCR1A,COM1A0);
	#elif TIMER1_compare_matchA == COM1_clear
	
		SET_BIT(TCCR1A,COM1A1);
		CLEAR_BIT(TCCR1A,COM1A0);
	#elif TIMER1_compare_matchA == COM1_set
	
		SET_BIT(TCCR1A,COM1A1);
		SET_BIT(TCCR1A,COM1A0);
	#else //COM_normal
	
		CLEAR_BIT(TCCR1A,COM1A1);
		CLEAR_BIT(TCCR1A,COM1A0);
	#endif

	#if TIMER1_compare_matchB == COM1_toggle
	
		CLEAR_BIT(TCCR1A,COM1B1);
		SET_BIT(TCCR1A,COM1B0);
	#elif TIMER1_compare_matchA == COM1_clear
	
		SET_BIT(TCCR1A,COM1B1);
		CLEAR_BIT(TCCR1A,COM1B0);
	#elif TIMER1_compare_matchA == COM1_set
	
		SET_BIT(TCCR1A,COM1B1);
		SET_BIT(TCCR1A,COM1B0);
	#else //COM_normal
	
		CLEAR_BIT(TCCR1A,COM1B1);
		CLEAR_BIT(TCCR1A,COM1B0);
	#endif
	
		
	
	#if GET_BIT(TIMER1_PRESCALING,0)
		SET_BIT(TCCR1B,CS10);
	#else CLEAR_BIT(TCCR1B,CS10);
	#endif
	#if GET_BIT(TIMER1_PRESCALING,1)
		SET_BIT(TCCR1B,CS11);
	#else CLEAR_BIT(TCCR1B,CS11);
	#endif
	#if GET_BIT(TIMER1_PRESCALING,2)
		SET_BIT(TCCR1B,CS12);
	#else CLEAR_BIT(TCCR1B,CS12);
	#endif
}
void TIMER1_EnableCapture(void){
	SET_BIT(TIMSK,TICIE1);
}
void TIMER1_DisableCapture(void){
	CLEAR_BIT(TIMSK,TICIE1);
}/*
void TIMER1_EnableCompareA(void){
	SET_BIT(TIMSK,OCIE1A);
}
void TIMER_DisableCompareA1(void){
	CLEAR_BIT(TIMSK,OCIE1A);
}
void TIMER1_EnableCompareB(void){
	SET_BIT(TIMSK,OCIE1B);
}
void TIMER1_DisableCompareB(void){
	CLEAR_BIT(TIMSK,OCIE1B);
}
void TIMER1_EnableOverflow(void){
	SET_BIT(TIMSK,TOIE1);
}
void TIMER1_DisableOverflow(void){
	CLEAR_BIT(TIMSK,TOIE1);
}
void TIMER1_setValue(u16 val){
	u8 LOW  = val;
	u8 HIGH = val>>8;
	TCNT1L = LOW;
	TCNT1H = HIGH;
}
void TIMER1_setCompareA(u16 val){
	u8 LOW  = val;
	u8 HIGH = val>>8;
	OCR1AH = LOW;
	OCR1AL = HIGH;
}
void TIMER1_setCompareB(u16 val){
	u8 LOW  = val;
	u8 HIGH = val>>8;
	OCR1BH = LOW;
	OCR1BL = HIGH;
}
void TIMER1_setCapture(u16 val){
	u8 LOW  = val;
	u8 HIGH = val>>8;
	ICR1H = LOW;
	ICR1L = HIGH;
}
void TIMER1_prescalerReset0and1(void){
	SET_BIT(SFIOR,PSR10);
	
}
void TIMER1_forceCompareA(void){
	SET_BIT(TCCR1A,FOC1A);
}
void TIMER1_forceCompareB(void){
	SET_BIT(TCCR1A,FOC1B);
}
*/