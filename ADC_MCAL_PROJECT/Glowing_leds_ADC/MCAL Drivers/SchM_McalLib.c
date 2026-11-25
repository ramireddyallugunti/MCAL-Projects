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
**  FILENAME     :  SchM_McalLib.c                                                                                   **
**                                                                                                                   **
**  VERSION      :  3.0.0                                                                                            **
**                                                                                                                   **
**  DATE         : 2025-12-22                                                                                        **
**                                                                                                                   **
**  VARIANT      : Variant PC                                                                                        **
**                                                                                                                   **
**  PLATFORM     : Infineon AURIX2G                                                                                  **
**                                                                                                                   **
**  AUTHOR       : DL-AUTOSAR-Engineering                                                                            **
**                                                                                                                   **
**  VENDOR       : Infineon Technologies                                                                             **
**                                                                                                                   **
**  TRACEABILITY : NA                                                                                                **
**                                                                                                                   **
**  DESCRIPTION  :SchM file for McalLib                                                                              **
**                                                                                                                   **
**  SPECIFICATION(S) :  NA                                                                                           **
**                                                                                                                   **
**  MAY BE CHANGED BY USER :yes                                                                                      **
**                                                                                                                   **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Includes                                                                                     **
**********************************************************************************************************************/
#include "IFX_Os.h"
#include "SchM_McalLib.h"
#ifdef LATENCY_CALC_MCALLIB
#if(LATENCY_CALC_MCALLIB==1U)
#include "Test_Latency.h"
#endif
#endif
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Enter_McalLib_PeripheralEndInit(void)                                                **
**                                                                                                                   **
** Description      : Enters Module exclusive area                                                                   **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Enter_McalLib_PeripheralEndInit(void)
{
  SuspendAllInterrupts();
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_Start_Value(0);
  #endif
  #endif
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Exit_McalLib_PeripheralEndInit(void)                                                 **
**                                                                                                                   **
** Description      : Exit Module exclusive area                                                                     **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Exit_McalLib_PeripheralEndInit(void)
{
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_End_Value(0);
  #endif
  #endif
  ResumeAllInterrupts();
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Enter_McalLib_SafetyEndInit(void)                                                    **
**                                                                                                                   **
** Description      : Enters Module exclusive area                                                                   **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Enter_McalLib_SafetyEndInit(void)
{
  SuspendAllInterrupts();
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_Start_Value(1);
  #endif
  #endif
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Exit_McalLib_SafetyEndInit(void)                                                     **
**                                                                                                                   **
** Description      : Exit Module exclusive area                                                                     **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Exit_McalLib_SafetyEndInit(void)
{
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_End_Value(1);
  #endif
  #endif
  ResumeAllInterrupts();
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Enter_McalLib_CpuEndInit(void)                                                       **
**                                                                                                                   **
** Description      : Enters Module exclusive area                                                                   **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant on same CPU, Reentrant on other CPUs                                             **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Enter_McalLib_CpuEndInit(void)
{
  SuspendAllInterrupts();
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_Start_Value(2);
  #endif
  #endif
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Exit_McalLib_CpuEndInit(void)                                                        **
**                                                                                                                   **
** Description      : Exit Module exclusive area                                                                     **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant on same CPU, Reentrant on other CPUs                                             **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Exit_McalLib_CpuEndInit(void)
{
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_End_Value(2);
  #endif
  #endif
  ResumeAllInterrupts();
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Enter_McalLib_StmTimerResolution(void)                                               **
**                                                                                                                   **
** Description      : Enters Module exclusive area                                                                   **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Enter_McalLib_StmTimerResolution(void)
{
  SuspendAllInterrupts();
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_Start_Value(3);
  #endif
  #endif
}
/**********************************************************************************************************************
**                                                                                                                   **
** Syntax           : void SchM_Exit_McalLib_StmTimerResolution(void)                                                **
**                                                                                                                   **
** Description      : Exit Module exclusive area                                                                     **
**                                                                                                                   **
** Service ID       : NA                                                                                             **
**                                                                                                                   **
** Sync/Async       : Synchronous                                                                                    **
**                                                                                                                   **
** Reentrancy       : Not Reentrant                                                                                  **
**                                                                                                                   **
** Parameters(in)   : None                                                                                           **
** Parameters (out) : None                                                                                           **
**                                                                                                                   **
** Return value     : None                                                                                           **
**                                                                                                                   **
**********************************************************************************************************************/
void SchM_Exit_McalLib_StmTimerResolution(void)
{
  #ifdef LATENCY_CALC_MCALLIB
  #if(LATENCY_CALC_MCALLIB==1U)
  Measure_End_Value(3);
  #endif
  #endif
  ResumeAllInterrupts();
}
