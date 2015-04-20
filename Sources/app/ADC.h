/*============================================================================*/
/*                              TEAM 7				                          */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:        ADC.h
* Instance:         RPL_1
* version:          1
* Created_by:       Jorge Gómez
* Date_created:     Mon March 16 13:40:00 2015 
*=============================================================================*/
/* DESCRIPTION : Header file for ADC functions                                */
/*============================================================================*/
/* FUNCTION COMMENT : The functions showed below allow users to configure     */
/* ADC's module such as initialization and make an analog reading.            */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 16/04/2015  | SAR/SIF/SCN_xxx               |   Jorge Gomez    */
/* 									                                          */
/*============================================================================*/

#ifndef ADC_H_                              /* To avoid double inclusion */
#define ADC_H_

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
PUBLIC_FCT void ADC_Init(void);
PUBLIC_FCT T_UWORD ADC_Read(T_UBYTE);
PUBLIC_FCT T_UWORD Data_Conversion(T_SLONG,T_SLONG,T_SLONG,T_SLONG,T_SLONG);

/* Functions macros */

/* Exported defines */

#endif
