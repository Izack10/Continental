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
/* FUNCTION COMMENT : The function headers in this file allows initial 		  */
/* configuration GPIO's module such as initialisation and digital read. 	  */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 16/03/2014  | SAR/SIF/SCN_xxx               |   Isaac Gozalez  */
/* 									                                          */
/*============================================================================*/

#ifndef GPIO_H_                              /* To avoid double inclusion */
#define GPIO_H_

/* Includes */
/* -------- */
#include "stdtypedef.h"

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
PUBLIC_FCT void GPIO_Init(void);
PUBLIC_FCT void Input_Configuration(void);
PUBLIC_FCT T_UBYTE Digital_Read(void);


/* Functions macros */
	
/* Exported defines */

#define PUSH 			  (16)
#define SELECT            (32)


#endif
