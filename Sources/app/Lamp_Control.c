/*============================================================================*/
/*                                TEAM 7		                              */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:         Lamp_Control.c
* Instance:         RPL_1
* version:         	1
* created_by:      	Jorge Gomez
* date_created:     Mon March 16 15:20:50 2015  
*=============================================================================*/
/* DESCRIPTION : C source for Lamp Control functions file                     */
/*============================================================================*/
/* FUNCTION COMMENT : This file describes the C source for Lamp Control 	  */
/* functions according to FREEDOM board KL25Z128. 							  */
/*                  														  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 16/03/2015  | 						       |    Jorge Gomez   */
/*============================================================================*/

/* Includes */
/* -------- */
#include "Lamp_Control.h"	
#include "derivative.h" /* include peripheral declarations */

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */



/* Exported functions */
/* ------------------ */
/**************************************************************
 *  Name                 :	Headlamp_On
 *  Description          :	This function turns blue LED on 
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Headlamp_On(void)
{
	HEADLAMPS_ON;
}

/**************************************************************
 *  Name                 :	Headlamp_Off
 *  Description          :	This function turns blue LED off
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Headlamp_Off(void)
{
	HEADLAMPS_OFF;
}

/**************************************************************
 *  Name                 :	Parklamp_On
 *  Description          :	This function turns green LED on  
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Parklamp_On(void)
{
	PARKLAMPS_ON;
}

/**************************************************************
 *  Name                 :	Parklamp_Off
 *  Description          :	This function turns green LED off  
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Parklamp_Off(void)
{
	 PARKLAMPS_OFF;
}

/**************************************************************
 *  Name                 :	Light_Off
 *  Description          :	This function turns Parklamp and Headlamp off  
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Light_Off(void)
{
	HEADLAMPS_OFF;
	PARKLAMPS_OFF;

}

/**************************************************************
 *  Name                 :	Half_Light
 *  Description          :	This function turns Parklamp on and Headlamp off 
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Half_Light(void)
{
	 PARKLAMPS_ON;
	 HEADLAMPS_OFF;
}

/**************************************************************
 *  Name                 :	Light_On
 *  Description          :	This function turns Parklamp and Headlamp on 
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void Light_On(void)
{
	HEADLAMPS_ON;
	PARKLAMPS_ON;
}

PUBLIC_FCT T_UWORD Change_State(T_UWORD light,T_UWORD lpuw_previusState)
{
	
	if(light < 40)							//If brightness' percent is lower than 40 
	{
		if(lpuw_previusState == AUTO_LIGHTSOFF)
		{
			Light_On();							//Turns parklamps and headlamps on
			lpuw_previusState = AUTO_LIGHTSON;
		}		
	}
	else if((light >60) && (light <=80))	//If brightness' percent is between 60 and 80
	{
		if(lpuw_previusState == AUTO_LIGHTSON)
		{
			Half_Light();						//Turns parklamps on and turns headlamps off
			lpuw_previusState = AUTO_HALFLIGHTS;
		}
	}
	else if(light > 80)					//If brightness' percent is greater than 80				
	{	
		if(lpuw_previusState == AUTO_HALFLIGHTS)
		{			
			Light_Off();						//Turns parklamps and headlamps off
			lpuw_previusState = AUTO_LIGHTSOFF;
		}
	}
	else									//If another value is read, the state keeps its value  
	{	
	}
	return lpuw_previusState;
}


 
