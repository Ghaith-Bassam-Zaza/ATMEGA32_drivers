/*
 * EXT_INTERRUPT_priv.h
 *
 * Created: 9/24/2021 7:08:32 PM
 *  Author: Ghaith
 */ 


#ifndef EXT_INTERRUPT_PRIV_H_
#define EXT_INTERRUPT_PRIV_H_

#define MCUCR *((volatile u8 *)0x55)
#define MCUCSR *((volatile u8 *)0x54)
#define GICR *((volatile u8 *)0x5B)

#define lowLevel 0
#define logicalChange 1
#define fallingEdge 2
#define RisingEdge 3

#endif /* EXT_INTERRUPT_PRIV_H_ */