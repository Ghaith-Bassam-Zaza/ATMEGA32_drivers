/*
 * SSEG_program.c
 *
 * Created: 9/11/2021 1:05:50 PM
 *  Author: Ghaith
 */ 
#include "Macros.h"
#include "Std_Types.h"
#include "DIO_interface.h"
#include "SSEG_interface.h"
#include "SSEG_configration.h"
#include "SSEG_private.h"


#if number_of_displays == 2
	#if SSEG_TYPE == SSEG_COM_CATHOD

		void SSEG_vidSetSeg(u8 segment,u8 state,u8 display){
			if(display == FIRST_DISPLAY){
				DIO_vidSetPinDirection(ports[segment],pins[segment],1);
				DIO_vidSetPinValue(ports[segment],pins[segment],state);
			}else if(display == SECOND_DISPLAY){
				DIO_vidSetPinDirection(sec_ports[segment],sec_pins[segment],1);
				DIO_vidSetPinValue(sec_ports[segment],sec_pins[segment],state);
			}
	
		}

	#elif SSEG_TYPE == SSEG_COM_ANOD

		void SSEG_vidSetSeg(u8 segment,u8 state,u8 display){
			if(state){
				state = 0;
			}else{
				state = 1;
			}
			if(display == FIRST_DISPLAY){
				DIO_vidSetPinDirection(ports[segment],pins[segment],1);
				DIO_vidSetPinValue(ports[segment],pins[segment],state);
			}else if(display == SECOND_DISPLAY){
				DIO_vidSetPinDirection(sec_ports[segment],sec_pins[segment],1);
				DIO_vidSetPinValue(sec_ports[segment],sec_pins[segment],state);
			}
		}

	#endif
	void SSEG_vidSetNumber(u8 number , u8 display){
		for(int i = 0; i < 7; i++){
			SSEG_vidSetSeg(i,GET_BIT(numbers[number],i),display);
		}
	}
	void SSEG_vidClear(u8 display){
		for(int i = 0; i < 7; i++){
			SSEG_vidSetSeg(i,0,display);
		}
	}

#elif number_of_displays == 1
	#if SSEG_TYPE == SSEG_COM_CATHOD

		void SSEG_vidSetSeg(u8 segment,u8 state){
			DIO_vidSetPinDirection(ports[segment],pins[segment],1);
			DIO_vidSetPinValue(ports[segment],pins[segment],state);
		}

	#elif SSEG_TYPE == SSEG_COM_ANOD

		void SSEG_vidSetSeg(u8 segment,u8 state){
			if(state){
				state = 0;
			}else{
				state = 1;
			}
			DIO_vidSetPinDirection(ports[segment],pins[segment],1);
			DIO_vidSetPinValue(ports[segment],pins[segment],state);
		}

	#endif
	void SSEG_vidSetNumber(u8 number){
		for(int i = 0; i < 7; i++){
			SSEG_vidSetSeg(i,GET_BIT(numbers[number],i));
		}
	}
	void SSEG_vidClear(){
		for(int i = 0; i < 7; i++){
			SSEG_vidSetSeg(i,0);
		}
	}
#endif