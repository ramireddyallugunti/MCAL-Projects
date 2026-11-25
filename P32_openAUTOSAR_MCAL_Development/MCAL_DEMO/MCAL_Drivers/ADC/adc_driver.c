/*
 * adc_driver.c
 *
 *  Created on: Nov 17, 2026
 *      Author: Admin
 */

#include"adc_driver.h"
#include"adc_reg.h"
#include"Common/Det.h"
#include"Common/StandardTypes.h"

#define   ADC_MODULE_ID             123U
#define   ADC_INSTANCE_ID           0U
#define   ADC_INIT_SID              (0X00U)
#define   ADC_SETUP_RSLT_BUF_SID    (0X0CU)
#define   ADC_START_GRP_CONV_SID    (0X02U)
#define   ADC_STOP_GRP_CONV_SID     (0X03U)
#define   ADC_READ_GRP_SID          (0X04U)
#define   ADC_ENABLE_HW_TRIG_SID    (0X05U)
#define   ADC_DISABLE_HW_TRIG_SID   (0X06U)
#define   ADC_GET_GRP_STATUS_SID    (0X09U)
#define   ADC_GET_VER_INFO_SID      (0X0AU)

#define   ADC_E_UNINIT              (0X0AU)
#define   ADC_E_BUSY                (0X0BU)
#define   ADC_E_IDLE                (0X0CU)
#define   ADC_E_ALREADY_INITIALIZED (0X0DU)
#define   ADC_E_PARAM_CONFIG        (0X0EU)
#define   ADC_E_PARAM_POINTER       (0X14U)
#define   ADC_E_PARAM_GROUP         (0X15U)
#define   ADC_E_WRONG_CONV_MODE     (0x16U)
#define   ADC_E_WRONG_TRIGG_SRC     (0X17U)
#define   ADC_E_NOTIF_CAPABILITY    (0X18U)
#define   ADC_E_BUFFER_UNINIT       (0X19U)
#define   ADC_E_NOT_DISENGAGED      (0X1AU)
#define   ADC_E_POWER_STATE_NOT_SUPPORT    (0X1BU)
#define   ADC_E_PERIPHERAL_NOT_PREPARED    (0X1DU)
#define   ADC_E_CONVERTER_OFF       (0X30U)
#define   ADC_E_CORE_NOT_CONFIGURED        (0X64U)
#define   ADC_E_CORE_GROUP_MISMATCH        (0X65U)
#define   ADC_E_MASTER_CORE_UNINIT         (0X66U)
#define   ADC_E_SLAVE_CORE_INIT            (0X67U)
#define   ADC_SE_CALIB_ONGOING             (0XC8U)
#define   ADC_SE_INT_PLAUSIBILITY          (0XC9U)
#define   ADC_SE_POWER_STATE_INVALID       (0XCAU)
#define   ADC_SE_PARAM_KERNEL              (0XCBU)

static const Adc_ConfigType* Adc_ConfigPtr = NULL_PTR;
static boolean Adc_Initialized = FALSE;

static void Adc_ErrorReport(uint8 serviceID,uint8 errorId);
static uint32 Adc_GetGroupBaseAddress(Adc_GroupType groupnumber);
static boolean Adc_IsGroupAlreadyProcessed(const Adc_ConfigType *ConfigPtr,uint8 currentIndex);
static boolean Adc_ValidateConfig(const Adc_ConfigType *ConfigPtr);
static boolean Adc_InitializeModule(const Adc_ConfigType *ConfigPtr);
static boolean Adc_ConfigureGroup(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr);
static boolean Adc_ConfigureSoftwareTrigger(uint32 groupBase);
static boolean Adc_ConfigureHardwareTrigger(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr);
static boolean Adc_ConfigureChannel(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr);
static boolean Adc_ConfigureQueue(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr);
static void Adc_DelayUs(uint32 delay);


void Adc_Init(const Adc_ConfigType* ConfigPtr)
{

    uint8 i;
    uint32 groupBase;
    boolean groupAlreadyConfigured;

    Adc_Initialized = FALSE;

    /*          validate configuration          */
    if(Adc_ValidateConfig(ConfigPtr) == FALSE)
    {
        return;
    }

    /*          Initialize EVADC module         */
    if(Adc_InitializeModule(ConfigPtr) == FALSE)
    {
        return;
    }

    /*      Configure groups and channels       */
    for(i = 0U; i < ConfigPtr->numberofChannels; i++)
    {
        groupBase = Adc_GetGroupBaseAddress(ConfigPtr->channels[i].groupNumber);

        if(groupBase == 0U)
        {
            Adc_ErrorReport(ADC_INIT_SID, ADC_E_PARAM_GROUP);
            return;
        }

        groupAlreadyConfigured = FALSE;

        /*      check whether group was configured earlier      */
        /*          configure each group once           */
        if(Adc_IsGroupAlreadyProcessed(ConfigPtr, i) == FALSE)
        {
            if(Adc_ConfigureGroup(groupBase,&ConfigPtr->channels[i]) == FALSE)
            {
                return;
            }
        }

        /*      configure each channel          */
        if(Adc_ConfigureChannel(groupBase,&ConfigPtr->channels[i]) == FALSE)
        {
            return;
        }
    }

    /*      configure queue entries     */
    for( i = 0U; i < ConfigPtr->numberofChannels; i++)
    {
        groupBase = Adc_GetGroupBaseAddress(ConfigPtr->channels[i].groupNumber);

        if( Adc_ConfigureQueue(groupBase,&ConfigPtr->channels[i]) == FALSE){

            return;
        }
    }

    /* Initialization completed */
    Adc_ConfigPtr = ConfigPtr;
    Adc_Initialized = TRUE;
}



/*              Det error reporting                 */
static void Adc_ErrorReport(uint8 serviceId, uint8 errorId)
{
        (void)Det_ReportError(ADC_MODULE_ID,ADC_INSTANCE_ID,serviceId,errorId);
}

/*              Getting base address of Adc group         */
static uint32 Adc_GetGroupBaseAddress(Adc_GroupType groupnumber)
{
    uint32 groupBase;
    switch(groupnumber)
    {
        case 0U: groupBase = ADC_GROUP0_BASE; break;
        case 1U: groupBase = ADC_GROUP1_BASE; break;
        case 2U: groupBase = ADC_GROUP2_BASE; break;
        case 3U: groupBase = ADC_GROUP3_BASE; break;
        case 4U: groupBase = ADC_GROUP4_BASE; break;
        case 5U: groupBase = ADC_GROUP5_BASE; break;
        case 6U: groupBase = ADC_GROUP6_BASE; break;
        case 7U: groupBase = ADC_GROUP7_BASE; break;
        case 8U: groupBase = ADC_GROUP8_BASE; break;
        case 9U: groupBase = ADC_GROUP9_BASE; break;
        case 10U: groupBase = ADC_GROUP10_BASE; break;
        case 11U: groupBase = ADC_GROUP11_BASE; break;

        default: groupBase = 0U;break;

    }

    return groupBase;
}
static boolean Adc_IsGroupAlreadyProcessed(const Adc_ConfigType *ConfigPtr,uint8 currentIndex)
{
    uint8 j;

    for( j = 0U; j < currentIndex; j++)
    {
        if(ConfigPtr->channels[j].groupNumber == ConfigPtr->channels[currentIndex].groupNumber){
            return TRUE;
        }
    }

    return FALSE;
}

/*          function to check whether configuration is valid or not     */
static boolean Adc_ValidateConfig(const Adc_ConfigType *ConfigPtr)
{
    uint8 i;

    /*   check configuration pointer  */
    if(ConfigPtr == NULL_PTR)
    {
        Adc_ErrorReport(ADC_INIT_SID, ADC_E_PARAM_POINTER);
        return FALSE;
    }

    /*  check number of configured channels    */
    if((ConfigPtr->numberofChannels == 0U)|| (ConfigPtr->numberofChannels > ADC_MAX_CHANNELS))
    {
        Adc_ErrorReport(ADC_INIT_SID,ADC_E_PARAM_CONFIG);
        return FALSE;
    }

    /*      Validate every configured channel        */
    for( i = 0U ; i < ConfigPtr->numberofChannels ; i++)
    {

        /* Validate group address   */
        if(Adc_GetGroupBaseAddress(ConfigPtr->channels[i].groupNumber)== 0)
        {
            Adc_ErrorReport(ADC_INIT_SID,ADC_E_PARAM_GROUP);
            return FALSE;
        }

        /*      Validate channel number   */
        if(ConfigPtr->channels[i].channelNumber > 15U)
        {
            Adc_ErrorReport(ADC_INIT_SID,ADC_E_PARAM_GROUP);
            return FALSE;
        }
    }

    return TRUE;
}

/*          used for initializing entire EVADC module       */
static boolean Adc_InitializeModule(const Adc_ConfigType *ConfigPtr)
{
    uint8 i;
    uint32 timeout;
    uint32 groupBase;

    /*      Enable the clock for EVADC module       */
    ADC_REG32(ADC_BASE_ADDRESS, ADC_CLC_OFFSET) &= ~(1UL << 0U);


    /*     Wait until the module clock is enabled   */
    timeout = ADC_MODULE_TIMEOUT;

    while((ADC_REG32(ADC_BASE_ADDRESS, ADC_CLC_OFFSET)&(1UL << 1U))!= 0U)
    {
          /* wait for module clock activation   */
        if(timeout == 0U)
        {
            return FALSE;
        }

        timeout--;
    }

    /* Enable analog converters in all EVADC groups        */
    for(i = 0U; i < ConfigPtr->numberofChannels ; i++)
    {
        if(Adc_IsGroupAlreadyProcessed(ConfigPtr, i) == FALSE)
        {

            groupBase = Adc_GetGroupBaseAddress(ConfigPtr->channels[i].groupNumber);

            if(groupBase == 0U)
            {
                return FALSE;
            }

            ADC_REG32(groupBase,ADC_ARBCFG_OFFSET) = (ADC_REG32(groupBase,ADC_ARBCFG_OFFSET) & ~ADC_ARBCFG_ANONC_MASK) | ADC_ARBCFG_ANONC_NORMAL ;
        }
    }

    /*  Wait for analog converter wake-up       */
    Adc_DelayUs(5U);

    /*      Start EVADC startup calibration     */
    ADC_REG32(ADC_BASE_ADDRESS, ADC_GLOBCFG_OFFSET) = ADC_GLOBCFG_SUCAL;

    /* Wait until calibration completes in every group  */
    for( i = 0U; i < ConfigPtr->numberofChannels; i++)
    {
        if(Adc_IsGroupAlreadyProcessed(ConfigPtr, i) == FALSE)
        {
            groupBase = Adc_GetGroupBaseAddress(ConfigPtr->channels[i].groupNumber);
            timeout = ADC_CALIBRATION_TIMEOUT;

            while((ADC_REG32(groupBase, ADC_ARBCFG_OFFSET)& ADC_ARBCFG_CAL) != 0U)
            {
                if(timeout == 0U)
                {
                    return FALSE;
                }

                timeout--;
            }
        }
    }
    return TRUE;
}

static boolean Adc_ConfigureGroup(uint32 groupBase,const Adc_ChannelConfigType *ChannelConfigPtr)
{

    /*      validate pointers and group base        */
    if((groupBase == 0U) || (ChannelConfigPtr == NULL_PTR))
    {
        return FALSE;
    }

    switch(ChannelConfigPtr->triggerSource)
    {
        case ADC_TRIGG_SRC_SW:
            return Adc_ConfigureSoftwareTrigger(groupBase);

        case ADC_TRIGG_SRC_HW:
            return Adc_ConfigureHardwareTrigger(groupBase, ChannelConfigPtr);

        default:
            Adc_ErrorReport(ADC_INIT_SID,ADC_E_WRONG_TRIGG_SRC);
            return FALSE;

    }


}

static boolean Adc_ConfigureSoftwareTrigger(uint32 groupBase)
{
    uint32 regValue;

    /* enable Queue 0 arbitration   */
        regValue = ADC_REG32(groupBase,ADC_ARBPR_OFFSET);

        regValue &= ~(ADC_ARBPR_PRIO1_MASK | ADC_ARBPR_CSM1) ;
        regValue |= ADC_ARBPR_PRIO1(1U);
        regValue |= ADC_ARBPR_ASEN1;

        ADC_REG32(groupBase, ADC_ARBPR_OFFSET)= regValue;

        /* configure queue 0 gating         */
        regValue = ADC_REG32(groupBase, ADC_QMR_OFFSET(1U));

        regValue &= ~(ADC_QMR_ENGT_MASK | ADC_QMR_ENTR);
        regValue |= ADC_QMR_ENGT_ALWAYS;

        ADC_REG32(groupBase, ADC_QMR_OFFSET(1U)) = regValue;

        return TRUE;
}

static boolean Adc_ConfigureHardwareTrigger(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr)
{
    uint32 regValue;

    /* enable Queue 0 arbitration   */
        regValue = ADC_REG32(groupBase,ADC_ARBPR_OFFSET);

        regValue &= ~(ADC_ARBPR_PRIO0_MASK | ADC_ARBPR_CSM0);
        regValue |= ADC_ARBPR_PRIO0(3U);
        regValue |= ADC_ARBPR_ASEN0;

        ADC_REG32(groupBase, ADC_ARBPR_OFFSET)= regValue;

    /* configure queue 0 gating         */
        regValue = ADC_REG32(groupBase, ADC_QMR_OFFSET(0U));

        regValue &= ~ADC_QMR_ENGT_MASK;
        regValue |= ADC_QMR_ENGT_ALWAYS;

        regValue &= ~ADC_QMR_ENTR;
        regValue |= ADC_QMR_ENTR;
        ADC_REG32(groupBase, ADC_QMR_OFFSET(0U)) = regValue;

        return TRUE;
}

static boolean Adc_ConfigureChannel(uint32 groupBase, const Adc_ChannelConfigType *ChannelConfigPtr)
{
    uint32 regValue;
    uint8 channelNumber;

    if((groupBase == 0U) || (ChannelConfigPtr == NULL_PTR))
    {
        return FALSE;
    }

    channelNumber = ChannelConfigPtr->channelNumber;

    /* configure channel control register       */
    regValue = ADC_REG32(groupBase, ADC_CHCTR_OFFSET(channelNumber));

    /* configure input class selection      */
    regValue &= ~(3UL << 0U);
    regValue |= ((uint32)ChannelConfigPtr->inputClassSelect & 3U);

    ADC_REG32(groupBase, ADC_CHCTR_OFFSET(channelNumber)) = regValue;

    /*      Configure Result Control register       */
    ADC_REG32(groupBase, ADC_RCR_OFFSET(channelNumber)) = 0U;

    return TRUE;
}

static boolean Adc_ConfigureQueue(uint32 groupBase,const Adc_ChannelConfigType *ChannelConfigPtr)
{
    uint32 regValue;
    uint8 channelNumber;

    if((groupBase == 0U)|| (ChannelConfigPtr == NULL_PTR))
    {
        return FALSE;
    }

    channelNumber = ChannelConfigPtr->channelNumber;

    regValue = ADC_REG32(groupBase, ADC_QINR_OFFSET(0U));

    regValue &= ~0X1FU;
    regValue |= ((uint32)channelNumber & 0X0FU);
    regValue |= (1U << 4U); /* Enable queue entry */

    ADC_REG32(groupBase, ADC_QINR_OFFSET(0U)) = regValue;

    return TRUE;
}

static void Adc_DelayUs(uint32 delay)
{
    volatile uint32 count;

    while (delay > 0U)
    {
        count = ADC_DELAY_COUNT_PER_US;

        while (count > 0U)
        {
            count--;
        }

        delay--;
    }
}
