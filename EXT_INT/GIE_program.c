/*
 * GIE_program.c
 *
 * Created: 9/24/2021 6:57:38 PM
 *  Author: Ghaith
 */ 
#include "Std_Types.h"
#include "GIE_private.h"
#include "GIE_interface.h"
#include "Macros.h"

void GIE_vidDisable(void){
	CLEAR_BIT(SREG,IBIT);
}
void GIE_vidEnable(void){
	SET_BIT(SREG,IBIT);
}