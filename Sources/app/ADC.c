/*============================================================================*//*                                TEAM 1		                              */
/*============================================================================*/
/*                        TEAM 7 				                               */
/*============================================================================*
* C Source:         ADC.c
* Instance:         RPL_1
* version:         	1
* Created_by:       Jorge Gómez
* Date_created:     Mon March 16 13:41:00 2015 
*=============================================================================*/
/* DESCRIPTION : C source for ADC's functions file                            */
/*============================================================================*/
/* FUNCTION COMMENT : This file describes the C source for ADC's functions	  */
/* according to FREEDOM board KL25Z128. 									  */
/* ADC's Initialization function uses module ADC0 and this module may take    */
/* an analog reading from any channel specified for the user                  */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 16/04/2014  |                               | Jorge Gomez      */
/* 								                                              */
/*============================================================================*/

/* Includes */
/* -------- */
#include "ADC.h"
#include "derivative.h"	/* include peripheral declarations */

/* Functions macros, constants, types and datas         */
/* ---------------------------------------------------- */
/* Functions macros */


/* Exported functions prototypes */
/* ----------------------------- */

/* Inline functions */
/* ---------------- */
/**************************************************************
 *  Name                 : 
 *  Description          :
 *  Parameters           :  
 *  Return               :
 *  Critical/explanation :    
 **************************************************************/


/* Private functions */
/* ----------------- */
/**************************************************************
 *  Name                 : 
 *  Description          :
 *  Parameters           :  
 *  Return               :
 *  Critical/explanation :    
 **************************************************************/

/* Exported functions */
/* ------------------ */
/**************************************************************
 *  Name                 :	ADC_Init
 *  Description          :	This function initialize ADC0 module, it 
 *  						enables clock gate on register SIM_SCGC6 and 
 *  						configures the result value as single-ended 16-bit conversion
 *  
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT void ADC_Init(void)
{
	SIM_SCGC5 |= (	SIM_SCGC5_PORTA_MASK | 		//Port A Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTB_MASK | 		//Port B Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTC_MASK | 		//Port C Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTD_MASK | 		//Port D Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTE_MASK	);	//Port E Clock Gate Control; Clock Enable		
		
	SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;   //ADC0 Clock Enable
	
	ADC0_CFG1 |=  ADC_CFG1_MODE(3);		//When DIFF=0:It is single-ended 16-bit conversion (11)
	
	ADC0_CFG1 |= ADC_CFG1_ADICLK(1);	//Bus clock / 2
	
	ADC0_SC1A |= ADC_SC1_ADCH(31);		//Disable Module
}

/**************************************************************
 *  Name                 :	ADC_Read
 *  Description          :	This function takes an analog reading
 *  						from channel selected by user.
 *  Parameters           :  T_UBYTE Channel
 *  Return               :	T_UWORD ADC0_RA
 *  Critical/explanation :  No
 **************************************************************/

PUBLIC_FCT T_UWORD ADC_Read(T_UBYTE Channel) 
{									
	ADC0_SC1A = Channel & ADC_SC1_ADCH_MASK; 		//Write to SC1A to start conversion selecting channel specified.
	
	while(ADC0_SC2 & ADC_SC2_ADACT_MASK);  			//Conversion in progress
	
	while(!(ADC0_SC1A & ADC_SC1_COCO_MASK));		//Until conversion complete		
	
	return ADC0_RA;									//Return ADC's value converted
}

/**************************************************************
 *  Name                 :	Data_Conversion
 *  Description          :	This function converts x variable with range value (in_min, in_max)
 *  					 :  into range value (out_min, out_max) making a lineal conversion.
 *  Parameters           :  T_UBYTE Channel
 *  Return               :	T_UWORD ADC0_RA
 *  Critical/explanation :  No
 **************************************************************/
PUBLIC_FCT T_UWORD Data_Conversion(T_SLONG x, T_SLONG in_min, T_SLONG in_max, T_SLONG out_min, T_SLONG out_max){
  return (T_UWORD)((((x - in_min) * (out_max - out_min))/ (in_max - in_min)) + out_min);
}


