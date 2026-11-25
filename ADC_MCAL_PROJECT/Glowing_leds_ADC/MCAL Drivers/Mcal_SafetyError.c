/**********************************************************************************************************************
**                                                                                                                   **
** (c) 2016-2025, Infineon Technologies AG, or an affiliate of Infineon Technologies AG.                             **
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
**  FILENAME     : Mcal_SafetyError.c                                                                                **
**                                                                                                                   **
**  VERSION      : 4.0.0                                                                                             **
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
**  DESCRIPTION  : Safety Error Roporting source file                                                                **
**                                                                                                                   **
**  SPECIFICATION(S) : Specification of  Mcal Driver, AUTOSAR Release 4.2.2, AUTOSAR Release 4.4.0                   **
**                     AUTOSAR Release 4.10.0                                                                        **
**                                                                                                                   **
**  MAY BE CHANGED BY USER : yes                                                                                     **
**                                                                                                                   **
**********************************************************************************************************************/

/**********************************************************************************************************************
**                      Includes                                                                                     **
**********************************************************************************************************************/
#include "Mcal_SafetyError.h"
#ifdef  APP_SW
#if (APP_SW == DEMO_APP)
#include "Test_Print.h"
#endif /*#if (APP_SW == DEMO_APP)*/
#if (APP_SW == TEST_APP)
#include "Test_Mcal_SafetyError.h"
#endif /*#if (APP_SW == TEST_APP)*/
#endif
/**********************************************************************************************************************
**                      Imported Compiler Switch Check                                                               **
**********************************************************************************************************************/
/**********************************************************************************************************************
**                      Private Macro Definitions                                                                    **
**********************************************************************************************************************/
/**********************************************************************************************************************
**                      Private Type Definitions                                                                     **
**********************************************************************************************************************/
/**********************************************************************************************************************
**                      Private Function Declarations                                                                **
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
/**********************************************************************************************************************
**                      Global Function Definitions                                                                  **
**********************************************************************************************************************/
void Mcal_ReportSafetyError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  #ifdef  APP_SW
  #if (APP_SW == DEMO_APP)
  print_f("\n SAFETY ERROR OCCURED \n ");
  print_f("ModuleId:%d, InstanceId: %d, ApiId:%d, ErrorId:%d"
          , ModuleId, InstanceId, ApiId, ErrorId);
  #endif /* #if (APP_SW == DEMO_APP) */

  #if (APP_SW == TEST_APP)
  Test_Mcal_ReportSafetyError(ModuleId, InstanceId, ApiId, ErrorId);
  #endif /*#if (APP_SW == TEST_APP)*/
  #endif
}
