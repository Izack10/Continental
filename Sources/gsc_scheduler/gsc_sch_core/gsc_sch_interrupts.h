/*============================================================================*/
/*                     AZOR - EMBEDDED SYSTEMS SOFTWARE                       */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Include:       gsc_sch_interrupts.h
* version:         1.0 
* created_by:      MDRR
* date_created:    April 01 2014 
*=============================================================================*/
/* DESCRIPTION : Header to export Call backs for interrupts functions         */
/*============================================================================*/
/* FUNCTION COMMENT : This file contains the call backs used for the gsc core */
/* to initialize, enable and disable the microcontroller interrupts.          */
/*                                                                            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*  REVISION |   DATE      |                               |      AUTHOR      */
/*----------------------------------------------------------------------------*/
/*  1.0      | 01/apr/2014 |                               | MDRR             */
/* This file is created to contain functions to manage interrupts.            */
/*============================================================================*/

#ifndef GSC_SCH_INTERRUPTS_H
#define GSC_SCH_INTERRUPTS_H

 
/* Includes */
/* -------- */
#include "stdtypedef.h"

/* Exported types and constants */
/* ---------------------------- */

/* Types definition */

/*======================================================*/ 
/* Declaration of exported constants                    */
/*======================================================*/ 

/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 

/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/ 


/* Exported functions prototypes and macros */
/* ---------------------------------------- */

/* Functions prototypes */
void gsc_sch_interrupts_init_cfg_cb(void);
void gsc_sch_interrupts_enable_cb(void);
void gsc_sch_interrupts_disable_cb(void);

/* Functions macros */

/* Exported defines */


#endif /* GSC_SCH_INTERRUPTS_H */
