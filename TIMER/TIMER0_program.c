/*
 * TIMER0_program.c
 *
 * Created: 9/30/2021 1:02:34 PM
 *  Author: Ghaith
 */ 

#include "Std_Types.h"
#include "MACROS.h"
#include "TIMER0_interface.h"
#include "TIMER0_configuration.h"
#include "TIMER0_private.h"
void TIMER0_init(void){
	#if GET_BIT(WGM0_mode,0)
		SET_BIT(TCCR0,WGM00);
	#else
		CLEAR_BIT(TCCR0,WGM00);
	#endif
	#if GET_BIT(WGM0_mode,1)
		SET_BIT(TCCR0,WGM01);
	#else
		CLEAR_BIT(TCCR0,WGM01);
	#endif
	
	
	
	#if TIMER0_compare_match == COM0_toggle
		CLEAR_BIT(TCCR0,COM01);
		SET_BIT(TCCR0,COM00);
	#elif TIMER0_compare_match == COM0_clear
		SET_BIT(TCCR0,COM01);
		CLEAR_BIT(TCCR0,COM00);
	#elif TIMER0_compare_match == COM0_set
		SET_BIT(TCCR0,COM01);
		SET_BIT(TCCR0,COM00);
	#else //COM0_normal
		CLEAR_BIT(TCCR0,COM01);
		CLEAR_BIT(TCCR0,COM00);
	#endif
	
		
	#if GET_BIT(TIMER0_PRESCALING,0)
		SET_BIT(TCCR0,CS00);
	#else 
		CLEAR_BIT(TCCR0,CS00);
	#endif
	#if GET_BIT(TIMER0_PRESCALING,1)
		SET_BIT(TCCR0,CS01);
	#else
		CLEAR_BIT(TCCR0,CS01);
	#endif
	#if GET_BIT(TIMER0_PRESCALING,2)
		SET_BIT(TCCR0,CS02);
	#else 
		CLEAR_BIT(TCCR0,CS02);
	#endif
}

void TIMER0_EnableCompare(void){
	SET_BIT(TIMSK,OCIE0);
}
void TIMER0_DisableCompare(void){
	CLEAR_BIT(TIMSK,OCIE0);
}
void TIMER0_EnableOverflow(void){
	SET_BIT(TIMSK,TOIE0);
}
void TIMER0_DisableOverflow(void){
	CLEAR_BIT(TIMSK,TOIE0);
}
void TIMER0_setValue(u8 val){
	TCNT0 = val;
}
void TIMER0_setCompare(u8 val){
	OCR0 = val;
}


void TIMER0_forceCompare(void){
	SET_BIT(TCCR0,FOC0);
}

