/*
 * Read_Selector.h
 *
 *  Created on: Mar 17, 2015
 *      Author: Jorge
 */

#ifndef READ_SELECTOR_H_
#define READ_SELECTOR_H_

#include "stdtypedef.h"

#include "GPIO.h"
#include "Lamp_Control.h"
#define SELECTOR_AUTO 0x10;
#define SELECTOR_BUTTON 0x08;
#define SELECTOR_MASK 0x18;

#define LED_A		(0X02)
#define LED_B		(0X04)
#define LED_C		(0X10)
#define LED_D		(0X20)

#define LED_A_OFF	(GPIOA_PCOR |= LED_A)
#define LED_B_OFF	(GPIOA_PCOR |= LED_B)
#define LED_C_OFF	(GPIOA_PCOR |= LED_C)
#define LED_D_OFF	(GPIOA_PCOR |= LED_D)

#define LED_A_ON	(GPIOA_PSOR |= LED_A)
#define LED_B_ON	(GPIOA_PSOR |= LED_B)
#define LED_C_ON	(GPIOA_PSOR |= LED_C)
#define LED_D_ON	(GPIOA_PSOR |= LED_D)

PUBLIC_FCT void ReadPort_Selector(void);
PUBLIC_FCT void SelectorButtonFunction(void);
PUBLIC_FCT void SelectorTimerFunction(void);
void State_Machine();
PUBLIC_FCT void SelectorFunction(void);
void read_Input(void);

#endif /* READ_SELECTOR_H_ */
