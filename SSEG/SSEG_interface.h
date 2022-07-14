/*
 * SSEG_interface.h
 *
 * Created: 9/11/2021 1:05:03 PM
 *  Author: Ghaith
 */ 
#ifndef SSEG_INTERFACE_H_
#define SSEG_INTERFACE_H_

#define FIRST_DISPLAY 0
#define SECOND_DISPLAY 1

#if number_of_displays == 2
	void SSEG_vidSetNumber(u8 number);
	void SSEG_vidSetSeg(u8 segment,u8 state);
	void SSEG_vidClear();
#elif number_of_displays == 1
	void SSEG_vidSetNumber(u8 number,u8 display);
	void SSEG_vidSetSeg(u8 segment,u8 state,u8 display);
	void SSEG_vidClear(u8 display);

#endif
#endif