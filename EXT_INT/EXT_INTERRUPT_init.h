/*
 * EXT_INTERRUPT_init.h
 *
 * Created: 9/24/2021 7:07:30 PM
 *  Author: Ghaith
 */ 


#ifndef EXT_INTERRUPT_INIT_H_
#define EXT_INTERRUPT_INIT_H_

#define INT0 0
#define INT1 1
#define INT2 2

void INTRRUPT_Init(void);
void INTERRUPT_vidEnable0(u8 INT);
void INTERRUPT_vidDisable0(u8 INT);
void INTERRUPT_vidEnable1(u8 INT);
void INTERRUPT_vidDisable1(u8 INT);
void INTERRUPT_vidEnable2(u8 INT);
void INTERRUPT_vidDisable2(u8 INT);





#endif /* EXT_INTERRUPT_INIT_H_ */