/*============================================================================*//*                                TEAM 1		                              */
/*============================================================================*/
/*                        TEAM 7 				                               */
/*============================================================================*
* C Source:         Read_Selector.c
* Instance:         RPL_1
* version:         	1
* Created_by:       Jorge Gómez
* Date_created:     Tue March 17 19:41:00 2015 
*=============================================================================*/
/* DESCRIPTION : C source for Read and selector functions file                */
/*============================================================================*/
/* FUNCTION COMMENT : This file describes the C source for some fuctions	  */
/* For the proyect AutoLamps								                  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 17/04/2014  |                               | Jorge Gomez      */
/* 								                                              */
/*============================================================================*/

#include "Read_Selector.h"
enum {
	STATE_ONE,
	STATE_TWO,
	STATE_THREE,
	STATE_FOUR,
	STATE_FIVE,
	STATE_SIX,
	STATE_SEVEN,
	STATE_EIGHT
};
T_UWORD ruw_LightIntensity = 0;
T_UWORD ruw_LightPorcent = 0;
T_UWORD ruw_SelectorState = STATE_ONE;
T_UWORD ruw_previusState = 0;
T_UBYTE rub_InputSelected = 0;
T_UBYTE rub_ButtonPressed = 0;
T_BITFLD8 rbi_Inputs;

PUBLIC_FCT void ReadPort_Selector(void)
{
	ruw_SelectorState &= 0;				//Clears Variable for next selector reading
	ruw_SelectorState |= Digital_Read();		//Reads Selector's position
}

PUBLIC_FCT void SelectorTimerFunction(void)
{
	if(rbi_Inputs.bit4 )
	{
		State_Machine();
	}
}
PUBLIC_FCT void SelectorButtonFunction(void)
{
	if(!rbi_Inputs.bit4 && rbi_Inputs.bit3)
	{
		if(rub_ButtonPressed == 0)
		{
			State_Machine();
			rub_ButtonPressed = 1;
		}
	}
	else 
	{
		rub_ButtonPressed = 0;
	}
}
void State_Machine()
{
	switch(ruw_SelectorState)					
	{
	case STATE_ONE:
		LED_A_OFF;
		LED_B_OFF;
		LED_C_OFF;
		LED_D_OFF;
		ruw_SelectorState=STATE_TWO;
		break;
	case STATE_TWO:
		LED_A_ON;		
		ruw_SelectorState=STATE_THREE;
		break;
	case STATE_THREE:
		LED_B_ON;		
		ruw_SelectorState=STATE_FOUR;
		break;
	case STATE_FOUR:
		LED_C_ON;		
		ruw_SelectorState=STATE_FIVE;
		break;
	case STATE_FIVE:
		LED_D_ON;		
		ruw_SelectorState=STATE_SIX;
		break;
	case STATE_SIX:
		LED_A_OFF;		
		ruw_SelectorState=STATE_SEVEN;
		break;
	case STATE_SEVEN:
		LED_B_OFF;
		ruw_SelectorState=STATE_EIGHT;
		break;
	case STATE_EIGHT:
		LED_C_OFF;
		ruw_SelectorState=STATE_ONE;
		break;	 		
	default:
		//THIS STATE SHOUL NEVER HAPPEN
		break;
	}
}
void read_Input(void)
{
	rbi_Inputs.byte.lub_input = Digital_Read();
}

