/**********************************************************************************************************************
**                                                                                                                   **
** (c) 2025, Infineon Technologies AG, or an affiliate of Infineon Technologies AG.                                  **
**                                                                                                                   **
** All rights reserved.                                                                                              **
**                                                                                                                   **
** This software, associated documentation and materials ("Software") is owned by Infineon Technologies AG or one of **
** its affiliates ("Infineon") and is protected by and subject to worldwide patent protection, worldwide copyright   **
** laws, and international treaty provisions. Therefore, you may use this Software only as provided in the license   **
** agreement accompanying the software package from which you obtained this Software. If no license agreement        **
** applies, then any use, reproduction, modification, translation, or compilation of this Software is prohibited     **
** without the express written permission of Infineon.                                                               **
** Disclaimer: UNLESS OTHERWISE EXPRESSLY AGREED WITH INFINEON, THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF **
** ANY KIND, EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, ALL WARRANTIES OF NON-INFRINGEMENT OF THIRD-PARTY    **
** RIGHTS AND IMPLIED WARRANTIES SUCH AS WARRANTIES OF FITNESS FOR A SPECIFIC USE/PURPOSE OR MERCHANTABILITY.        **
** Infineon reserves the right to make changes to the Software without notice. You are responsible for properly      **
** designing, programming, and testing the functionality and safety of your intended application of the Software, as **
** well as complying with any legal requirements related to its use. Infineon does not guarantee that the Software   **
** will be free from intrusion, data theft or loss, or other breaches ("Security Breaches"), and Infineon shall have **
** no liability arising out of any Security Breaches. Unless otherwise explicitly approved by Infineon, the Software **
** may not be used in any application where a failure of the Product or any consequences of the use thereof can      **
** reasonably be expected to result in personal injury.                                                              **
**                                                                                                                   **
***********************************************************************************************************************
**                                                                                                                   **
**  FILENAME     : IFX_Os.c                                                                                          **
**                                                                                                                   **
**  VERSION      :                                                                                                   **
**                                                                                                                   **
**  DATE         : 2025-12-22                                                                                        **
**                                                                                                                   **
**  VARIANT      : NA                                                                                                **
**                                                                                                                   **
**  PLATFORM     : Infineon AURIX2G                                                                                  **
**                                                                                                                   **
**  AUTHOR       : DL-AUTOSAR-Engineering                                                                            **
**                                                                                                                   **
**  VENDOR       : Infineon Technologies                                                                             **
**                                                                                                                   **
**  TRACEABILITY : NA                                                                                                **
**                                                                                                                   **
**  DESCRIPTION  :This file contains                                                                                 **
**                - stub for OS functionality.                                                                       **
**                                                                                                                   **
**  SPECIFICATION(S) : AUTOSAR Release 4.2.2 AUTOSAR Release 4.4.0                                                   **
**                     AUTOSAR Release 4.10.0                                                                        **
**                                                                                                                   **
**  MAY BE CHANGED BY USER :yes                                                                                      **
**                                                                                                                   **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Includes                                             **
**********************************************************************************************************************/

/* Inclusion of Platform_Types.h and Compiler.h */
#include "Std_Types.h"

/* Inclusion of Tasking sfr file */
#include "IfxCpu_reg.h"

/* Include Mcal for Library */
#include "McalLib.h"

/* Inclusion for definition of ENABLE() & DISABLE() functions*/
#include "IFX_Os.h"

/**********************************************************************************************************************
**                      Imported Compiler Switch Checks                      **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Private Macro Definitions                            **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Private Type Definitions                             **
**********************************************************************************************************************/
/**********************************************************************************************************************
**                      Private Function Declarations                        **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Global Constant Definitions                                                                  **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Global Variable Definitions                                                                  **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Private Constant Definitions                                                                 **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Private Variable Definitions                                                                 **
**********************************************************************************************************************/
static volatile uint8 Os_IntSaveDisableCounter[MCAL_NO_OF_CORES];
static volatile sint32 Os_SavedIntLevelNested[MCAL_NO_OF_CORES];

/**********************************************************************************************************************
**                      Private Function Definitions                                                                 **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Global Function Definitions                                                                  **
**********************************************************************************************************************/

/**********************************************************************************************************************
** Syntax           : void SuspendAllInterrupts(void)                                                                **
**                                                                                                                   **
** Service ID       :  none                                                                                          **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : non - reentrant                                                                                **
**                                                                                                                   **
** Parameters(in)   : none                                                                                           **
**                                                                                                                   **
** Parameters (out) : none                                                                                           **
**                                                                                                                   **
** Return value     : none                                                                                           **
**                                                                                                                   **
** Description      : This function Suspends all interrupts, nested                                                  **
**                                                                                                                   **
**********************************************************************************************************************/
void SuspendAllInterrupts(void)
{
  uint32 CoreId;

  /* Get the current core id */
  CoreId = Mcal_GetCpuIndex();

  if(Os_IntSaveDisableCounter[CoreId] == 0)
  {
    Os_SavedIntLevelNested[CoreId] = MFCR(CPU_ICR);/* disable interrupts */
    DISABLE();
  }
  Os_IntSaveDisableCounter[CoreId]++;
}
/*********************************************************************************************************************/

/*******************************************************************************
** Syntax           : void ResumeAllInterrupts(void)                          **
**                                                                            **
** Service ID       :  none                                                   **
**                                                                            **
** Sync/Async       : Synchronous                                             **
**                                                                            **
** Reentrancy       : non - reentrant                                         **
**                                                                            **
** Parameters(in)   : none                                                    **
**                                                                            **
** Parameters (out) : none                                                    **
**                                                                            **
** Return value     : none                                                    **
**                                                                            **
** Description      : This function Resumes all interrupts, nested            **
**                                                                            **
*******************************************************************************/
void ResumeAllInterrupts(void)
{
  uint32 CoreId;

  /* Get the current core id */
  CoreId = Mcal_GetCpuIndex();

  if (Os_IntSaveDisableCounter[CoreId] > 0)
  {
    Os_IntSaveDisableCounter[CoreId]--;
  }

  if (Os_IntSaveDisableCounter[CoreId] == 0)
  {
    if (Os_SavedIntLevelNested[CoreId] & (0x00000001U << 15))
    {
      /* interrupts were enabled, enable again */
      ENABLE();
    }
  }
}

