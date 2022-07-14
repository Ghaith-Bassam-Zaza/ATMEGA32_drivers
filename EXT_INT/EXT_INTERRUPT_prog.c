/*
 * EXT_INTERRUPT_prog.c
 *
 * Created: 9/24/2021 7:09:07 PM
 *  Author: Ghaith
 */ 
#include "Std_Types.h"
#include "Macros.h"
#include "EXT_INTERRUPT_priv.h"
#include "EXT_INTERRUPT_conf.h"
#include "EXT_INTERRUPT_init.h"


void INTRRUPT_Init(void){
	#if INTRRUPT_senseControl0 == lowLevel
		CLEAR_BIT(MCUCR,0);
		CLEAR_BIT(MCUCR,1);
	#elif INTRRUPT_senseControl0 == logicalChange
		SET_BIT(MCUCR,0);
		CLEAR_BIT(MCUCR,1);
	#elif INTRRUPT_senseControl0 == fallingEdge
		CLEAR_BIT(MCUCR,0);
		SET_BIT(MCUCR,1);
	#elif INTRRUPT_senseControl0 == RisingEdge
		SET_BIT(MCUCR,0);
		SET_BIT(MCUCR,1);
	#endif
	
	#if INTRRUPT_senseControl1 == lowLevel
	CLEAR_BIT(MCUCR,2);
	CLEAR_BIT(MCUCR,3);
	#elif INTRRUPT_senseControl1 == logicalChange
	SET_BIT(MCUCR,2);
	CLEAR_BIT(MCUCR,3);
	#elif INTRRUPT_senseControl1 == fallingEdge
	CLEAR_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	#elif INTRRUPT_senseControl1 == RisingEdge
	SET_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	#endif
	
	
	#if INTRRUPT_senseControl0 == fallingEdge
	CLEAR_BIT(MCUCSR,6);
	#elif INTRRUPT_senseControl0 == RisingEdge
	SET_BIT(MCUCSR,6);
	#endif
	
	
}
void INTERRUPT_vidEnable0(u8 INT){
	SET_BIT(GICR,6);
}
void INTERRUPT_vidDisable0(u8 INT){
	CLEAR_BIT(GICR,6);
}
void INTERRUPT_vidEnable1(u8 INT){
	SET_BIT(GICR,7);
}
void INTERRUPT_vidDisable1(u8 INT){
	CLEAR_BIT(GICR,7);
}
void INTERRUPT_vidEnable2(u8 INT){
	SET_BIT(GICR,5);
}
void INTERRUPT_vidDisable2(u8 INT){
	CLEAR_BIT(GICR,5);
}