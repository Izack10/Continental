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

T_UWORD ruw_LightIntensity = 0;
T_UWORD ruw_LightPorcent = 0;
T_UWORD ruw_SelectorState = 0;
T_UWORD ruw_previusState = 0;


PUBLIC_FCT void ReadPort_Selector(void)
{
	ruw_SelectorState &= 0;				//Clears Variable for next selector reading
	ruw_SelectorState |= Digital_Read();		//Reads Selector's position
}

PUBLIC_FCT void Read_ADC(void)
{
	 ruw_LightIntensity &= 0;
	 ruw_LightIntensity |= ADC_Read(4);
	 ruw_LightPorcent = Data_Conversion(ruw_LightIntensity,10000,65535,0,100);
}

PUBLIC_FCT void SelectorFunction(void)
{
	switch(ruw_SelectorState)					
	 	 {
	 	 	case OFF:
	 	 		Light_Off();
	 	 		ruw_previusState = 0;
	 	 		break;
	 		case AUTOMATIC:
	 			ruw_previusState = Change_State(ruw_LightPorcent,ruw_previusState);
	 				
	 			break;
	 		case PARKLAMP:
	 			Light_Off();
	 			Parklamp_On();
	 			ruw_previusState = 0;
	 			break;
	 		case HEADLAMP:
	 			Light_Off();	
	 			Light_On();
	 			ruw_previusState = 0;
	 			break;
	 		
	 		default:
	 			Light_Off();
	 			break;
	 	 }
}
