/*============================================================================*/
/*                              TEAM 7				                          */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        GPIO.h
* Instance:         RPL_1
* version:          1
* Created_by:       Isaac Gonzalez
* Date_created:     16 March 2015 20:55 
*=============================================================================*/
/* DESCRIPTION : Header file for GPIO functions                                */
/*============================================================================*/
/* FUNCTION COMMENT : The functions in this file allows initial configuration */
/* GPIO's module such as initialisation and digital read. 		              */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 16/03/2014  | SAR/SIF/SCN_xxx               |   Isaac Gozalez  */
/* 									                                          */
/*============================================================================*/

/* Includes */
/* -------- */
#include "GPIO.h"
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
 *  Name                 :GPIO_Init
 *  Description          :	This function initialize GPIO
 *  
 *  Parameters           :  None
 *  Return               :	None
 *  Critical/explanation :  No
 **************************************************************/

PUBLIC_FCT void GPIO_Init(void)
{
	SIM_SCGC5 |= (	SIM_SCGC5_PORTA_MASK | 		//Port A Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTB_MASK | 		//Port B Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTC_MASK | 		//Port C Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTD_MASK | 		//Port D Clock Gate Control; Clock Enable
					SIM_SCGC5_PORTE_MASK	);	//Port E Clock Gate Control; Clock Enable
	
	PORTC_PCR4 |= PORT_PCR_MUX(1);				//PIN configured as GPIO 
	PORTC_PCR5 |= PORT_PCR_MUX(1);				//PIN configured as GPIO 
	PORTA_PCR16 = PORT_PCR_MUX(1);				//PIN configured as GPIO 
	PORTA_PCR17 = PORT_PCR_MUX(1);				//PIN configured as GPIO
	
	GPIOA_PDDR = 0x30000;
}


PUBLIC_FCT void Input_Configuration(void)
{
	FGPIOC_PDDR &= ~(PARK | HEAD);	//Configures PORTC 3, 4 and 5 as Input
}


PUBLIC_FCT T_UBYTE Digital_Read(void)
{
	return (T_UBYTE)FGPIOC_PDIR;					//Return 8-bit read register
}







