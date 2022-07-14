

#ifndef DIO_H_
#define DIO_H_

/**************************** External Definitions *************************************/
/* PORT Names                                                                          */
#define DIO_PORTA        0
#define DIO_PORTB        1
#define DIO_PORTC        2
#define DIO_PORTD        3

/***************************************************************************************/

/***************************************************************************************/
/********************************** Fucntion Definition ********************************/
/***************************************************************************************/



/***************************************************************************************/
/* Description! Interface to set the Output value of the pin                           */
/* Input      ! Port number , Pin number , Value to set                                */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void DIO_vidSetPinValue(u8 u8PortNumberCpy, u8 u8PinNumberCpy, u8 u8ValueCpy);

/***************************************************************************************/
/* Description! Interface to read an input digital pin                                 */
/* Input      ! Port number , Pin number                                               */
/* Output     ! u8 contains the Pin value                                              */
/***************************************************************************************/
u8 DIO_u8GetPinValue(u8 u8PortNumberCpy, u8 u8PinNumberCpy);

/***************************************************************************************/
/* Description! Interface to Set the direction of PIN                                  */
/* Input      ! Port number , Pin number, Desired Direction                            */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void DIO_vidSetPinDirection(u8 u8PortNumberCpy, u8 u8PinNumberCpy, u8 u8DirectionCpy);

/***************************************************************************************/
/* Description! Interface to set port direction                                        */
/* Input      ! Port number , Desired Direction                                        */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void DIO_vidSetPortDirection(u8 u8PortNumberCpy, u8 u8ValueCpy);

/***************************************************************************************/
/* Description! Interface to set the output value of port                              */
/* Input      ! Port number , Desired output value                                     */
/* Output     ! Nothing                                                                */
/***************************************************************************************/
void DIO_vidSetPortValue(u8 u8PortNumberCpy, u8 u8ValueCpy);

/***************************************************************************************/
/* Description! Interface to get the input value on Port                               */
/* Input      ! Port number                                                            */
/* Output     ! Port Value                                                             */
/***************************************************************************************/
u8 DIO_u8GetPortValue(u8 u8PortNumberCpy);

#endif /* DIO_H_ */
