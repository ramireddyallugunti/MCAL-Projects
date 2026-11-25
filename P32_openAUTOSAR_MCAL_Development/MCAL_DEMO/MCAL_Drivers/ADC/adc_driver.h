/*
 * adc_driver.h
 *
 *  Created on: Nov 17, 2026
 *      Author: Admin
 */

#ifndef MCAL_DRIVERS_ADC_ADC_DRIVER_H_
#define MCAL_DRIVERS_ADC_ADC_DRIVER_H_

#include"Common/StandardTypes.h"

typedef uint8 Adc_ChannelType;

typedef uint8 Adc_GroupType;

typedef uint16 Adc_ValueGroupType;

typedef uint8 Adc_PrescaleType;

typedef uint8 Adc_ConversionTimeType;

typedef uint32 Adc_SamplingTimeType;

typedef uint8 Adc_ResolutionType;

typedef enum{
    ADC_INPUT_CLASS_GROUP0 = 0U,
    ADC_INPUT_CLASS_GROUP1 = 1U,
    ADC_INPUT_CLASS_GLOBAL0 = 2U,
    ADC_INPUT_CLASS_GLOBAL1 = 3U
}Adc_InputClassSelectType;

typedef enum{
    ADC_IDLE = 0U,
    ADC_BUSY = 1U,
    ADC_COMPLETED = 2U,
    ADC_STREAM_COMPLETED = 3U
} Adc_StatusType;

typedef enum{
    ADC_TRIGG_SRC_SW = 0U,
    ADC_TRIGG_SRC_HW = 1U
} Adc_TriggerSourceType;

typedef enum{
    ADC_CONV_MODE_ONESHOT = 0U,
    ADC_CONV_MODE_CONTINUOUS = 1U
} Adc_GroupConvModeType;

typedef uint8 Adc_GroupPriorityType;

typedef enum
{
    ADC_ACCESS_MODE_SINGLE = 0U,
    ADC_ACCESS_MODE_STREAMING = 1U
} Adc_GroupAccessModeType;

typedef enum{
    ADC_STREAM_BUFFER_LINEAR = 0U,
    ADC_STREAM_BUFFER_CIRCULAR = 1U
} Adc_StreamBufferModeType;

typedef enum{
    ADC_HW_TRIG_RISING_EDGE = 0U,
    ADC_HW_TRIG_FALLING_EDGE = 1U,
    ADC_HW_TRIG_BOTH_EDGES = 2U
} Adc_HwTriggerSignalType;

typedef uint8 Adc_HwTriggerTimerType;

typedef enum{
    ADC_PRIORITY_NONE = 0U,
    ADC_PRIORITY_HW = 1U,
    ADC_PRIORITY_HW_SW = 2U
} Adc_PriorityImplementationType;

typedef enum{
    ADC_GROUP_REPL_ABORT_RESTART = 0U,
    ADC_GROUP_REPL_SUSPEND_RESUME = 1U
} Adc_GroupReplacementType;

typedef enum{
    ADC_RANGE_UNDER_LOW = 0U,
    ADC_RANGE_BETWEEN = 1U,
    ADC_RANGE_OVER_HIGH = 2U,
    ADC_RANGE_ALWAYS = 3U,
    ADC_RANGE_NOT_UNDER_LOW = 4U,
    ADC_RANGE_NOT_BETWEEN = 5U,
    ADC_RANGE_NOT_OVER_HIGH = 6U,
} Adc_ChannelRangeSelectType;

typedef enum{
    ADC_ALIGN_LEFT = 0U,
    ADC_ALIGN_RIGHT = 1U
} Adc_ResultAlignmentType;




#define ADC_MAX_CHANNELS    (16U)

typedef struct{
        Adc_GroupType               groupNumber;
        Adc_ChannelType             channelNumber;
        Adc_GroupType               groupId;

        Adc_TriggerSourceType       triggerSource;

        Adc_StreamBufferModeType    streamBufferMode;
        Adc_GroupAccessModeType     groupAccessMode;

        Adc_GroupConvModeType       groupConvMode;

        Adc_InputClassSelectType    inputClassSelect;

} Adc_ChannelConfigType;

typedef struct{

        uint8 numberofChannels;
        Adc_ChannelConfigType  channels[ADC_MAX_CHANNELS];
} Adc_ConfigType;



/*              for enabling start up calibration         */
#define ADC_GLOBCFG_SUCAL                (1UL << 31U)

/*              to enable the analog converter normal            */
#define ADC_ARBCFG_ANONC_NORMAL          (3UL)

/*              to enable request source 0              */
#define ADC_ARBPR_ASEN0                  (1UL << 24U)

/*              to enable queue 0 processing            */
#define ADC_QMR0_ENGT_ENABLE             (1UL)

/*              for refill convertion request           */
#define ADC_QINR0_RF                     (1UL << 5U)

/*              to extract the ADC result               */
#define ADC_RES_RESULT_MASK              (0XFFFFUL)

/*              to check result is valid or not         */
#define ADC_RES_VF                       (1UL << 31U)

///*          to enable the clock and waiting until clock provided  */
//#define ADC_CLC_DISR              (1UL << 0U)
//#define ADC_CLC_DISS              (1UL << 1U)

/*         to make the group's speed as normal      */
#define ADC_ARBCFG_ANONC_MASK      (3UL << 0U)
#define ADC_ARBCFG_ANONC_NORMAL    (3UL << 0U)

#define ADC_ARBCFG_CAL            (1UL << 28U)

/*              timeouts for calibration and adc        */
#define ADC_CALIBRATION_TIMEOUT   (1000000UL)
#define ADC_MODULE_TIMEOUT        (1000000UL)

/* GxARBPR - Arbitration Priority Register */
#define ADC_ARBPR_ASEN0             (1UL << 24U)
#define ADC_ARBPR_PRIO0_MASK        (7UL << 0U)
#define ADC_ARBPR_PRIO0             (0UL << 0U)

/* GxQMR0 - Queue 0 Mode Register */
#define ADC_QMR0_ENGT_MASK          (3UL << 0U)
#define ADC_QMR0_ENGT_ALWAYS        (1UL << 0U)
#define ADC_QMR0_ENTR               (1UL << 2U)

void Adc_Init(const Adc_ConfigType* ConfigPtr);

Std_ReturnType Adc_SetupResultBuffer(Adc_GroupType Group, const Adc_ValueGroupType* DataBufferPtr);

void Adc_DeInit(void);

void Adc_StartGroupConversion(Adc_GroupType Group);

void Adc_StopGroupConversion(Adc_GroupType Group);

Std_ReturnType Adc_ReadGroup(Adc_GroupType Group, Adc_ValueGroupType* DataBufferPtr);

void Adc_EnableHardwareTrigger(Adc_GroupType Group);

void Adc_DisableHardwareTrigger(Adc_GroupType Group);

Adc_StatusType Adc_GetGroupStatus(Adc_GroupType Group);

void Adc_GetVersionInfo(Std_VersionInfoType* versioninfo);
#endif /* MCAL_DRIVERS_ADC_ADC_DRIVER_H_ */
