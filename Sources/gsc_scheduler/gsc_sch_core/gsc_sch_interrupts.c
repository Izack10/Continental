/*============================================================================*/
/*                     AZOR - EMBEDDED SYSTEMS SOFTWARE                       */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:        gsc_sch_interrupts.c
* version:         1.0 
* created_by:      MDRR
* date_created:    April 01 2014 
*=============================================================================*/
/* DESCRIPTION : Call backs for interrupts functions                          */
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

/* Includes */
/* -------- */
#include "gsc_sch_interrupts.h"

/* Functions macros, constants, types and datas         */

/*======================================================*/ 
/* Definition of RAM variables                          */
/*======================================================*/ 
	
/*======================================================*/ 
/* close variable declaration sections                  */
/*======================================================*/

/* Exported functions prototypes */
/* ----------------------------- */


/* Exported functions */
/* ------------------ */

/**************************************************************
 *  Name                 :  gsc_sch_interrupts_init_cfg_cb
 *  Description          :  This call back must be used to initialize and configure interrupts.
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  Interrupts must be disabled before configure them.
 *  Postcondition        :  Interrupts configured, but not enabled yet.
 *  Critical/explanation :  No.
 **************************************************************/
void gsc_sch_interrupts_init_cfg_cb(void)
{
	/* Put here the function of the platform used to initialize and configure interrupts */
}

/**************************************************************
 *  Name                 :  gsc_sch_interrupts_enable_cb
 *  Description          :  This call back must be used to enable interrupts.
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  Interrupts must be initialized and configured before enable them.
 *  Postcondition        :  None.
 *  Critical/explanation :  No.
 **************************************************************/
void gsc_sch_interrupts_enable_cb(void)
{
	/* Put here the function of the platform used to enable interrupts */
}

/**************************************************************
 *  Name                 :  gsc_sch_interrupts_disable_cb
 *  Description          :  This call back must be used to disable interrupts.
 *  Parameters           :  void
 *  Return               :  void
 *  Precondition         :  None.
 *  Postcondition        :  None.
 **************************************************************/
void gsc_sch_interrupts_disable_cb(void)
{
	/* Put here the function of the platform used to disable interrupts */
}
