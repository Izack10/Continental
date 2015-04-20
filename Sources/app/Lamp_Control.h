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

#ifndef LAMP_CONTROL_H          /* To avoid double inclusion */
#define LAMP_CONTROL_H

/* Includes */
/* -------- */
#include "stdtypedef.h"
#include "GPIO.h"
#include "ADC.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */

/*==================================================*/ 
/* Declaration of exported constants                */
/*==================================================*/ 
/* BYTE constants */


/* WORD constants */



/* LONG and STRUCTURE constants */


/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
/* BYTES */

/* WORDS */

/* LONGS and STRUCTURES */

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 

/* Exported functions prototypes and macros */
/* ---------------------------------------- */


/* Functions prototypes */
PUBLIC_FCT void Parklamp_On(void);
PUBLIC_FCT void Parklamp_Off(void);

PUBLIC_FCT void Headlamp_On(void);
PUBLIC_FCT void Headlamp_Off(void);

PUBLIC_FCT void Light_Off(void);
PUBLIC_FCT void Half_Light(void);
PUBLIC_FCT void Light_On(void);

PUBLIC_FCT T_UWORD Change_State(T_UWORD light,T_UWORD lpuw_previusState);


/* Functions macros */

/* Exported defines */

#define PARKLAPS		(0X10000)
#define HEADLAPS		(0X20000)

#define PARKLAMPS_OFF	(GPIOA_PCOR |= PARKLAPS)
#define HEADLAMPS_OFF	(GPIOA_PCOR |= HEADLAPS)
#define PARKLAMPS_ON		(GPIOA_PSOR |= PARKLAPS)
#define HEADLAMPS_ON		(GPIOA_PSOR |= HEADLAPS)

#define AUTO_LIGHTSOFF 0
#define AUTO_LIGHTSON 1
#define AUTO_HALFLIGHTS 2

#define OFF				48
#define AUTOMATIC		16
#define PARKLAMP		32
#define HEADLAMP		0


#endif /* CONTROL LAMPS.H */
