
#include"port_driver.h"
#include"port_reg.h"
#include"Common/StandardTypes.h"
#include"Common/Det.h"

/*      Service IDs   of module and apis        */
#define PORT_MODULE_ID              (124U)
#define PORT_INSTANCE_ID            (0U)
#define PORT_INIT_SID               (0x00U)
#define PORT_SET_DIR_SID            (0X01U)
#define PORT_REFRESH_SID            (0X02U)
#define PORT_VERSION_SID            (0X03U)
#define PORT_SET_MODE_SID           (0X04U)

/*      Error codes for DET             */
#define PORT_E_DIRECTION_UNCHANGEABLE       (0X0B)
#define PORT_E_INIT_FAILED          (0X0C)
#define PORT_E_MODE_UNCHANGEABLE    (0X0E)
#define PORT_E_PARAM_INVALID_DIRECTION      (0X32)
#define PORT_E_PARAM_INVALID_MODE           (0X0D)
#define PORT_E_PARAM_PIN                    (0X0A)
#define PORT_E_PARAM_POINTER                (0X01)
#define PORT_E_UNINIT                       (0X0F)

static void Port_Report(uint8 Service, uint8 Error);

static uint32 Port_Base(uint8 portNumber);

static uint8 Port_IocrMode(const Port_PinConfigType *pinConfig, Port_PinDirectionType direction, Port_PinModeType mode);

static void Port_WriteIocr(uint32 baseAddress, uint8 pinNumber, uint8 pcValue);

static void Port_Writelevel(uint32 baseAddress, uint8 pinNumber, uint8 level);

static const Port_PinConfigType *Port_Find(Port_PinType pinId);



static const Port_ConfigType *Port_ActiveConfig = NULL_PTR;


/*              api to initialize port          */
void Port_Init(const Port_ConfigType* ConfigPtr)
{
    uint16 i;
    uint32 baseAddress;

    const Port_PinConfigType *pinConfig;


    /* Checking whether the configuration is valid or not   */
    if((ConfigPtr == NULL_PTR) || (ConfigPtr ->Pins == NULL_PTR) || (ConfigPtr -> PinCount == 0U))
    {
        Port_Report(PORT_INIT_SID, PORT_E_INIT_FAILED);
        return;
    }

    /*      Mark the driver as uninitialized      */
    Port_ActiveConfig = NULL_PTR;


    /* loop for configuring all pins provided by the configuration generator     */
    for(i =0U; i < ConfigPtr->PinCount; ++i)
    {
        /*   Get the configuration of the current pin   */
        pinConfig = &ConfigPtr ->Pins[i];

        /*  Get the hardware base address of the selected port     */
        baseAddress = Port_Base(pinConfig -> PortNumber);


        /*        checking  whether the selected port and pin are valid    */
        if((baseAddress == 0UL) || (pinConfig->PinNumber > 15U))
        {
            Port_Report(PORT_INIT_SID, PORT_E_INIT_FAILED);
            return;
        }

        /* Setting the initial output level before enabling output mode    */
        if(pinConfig->Direction == PORT_PIN_OUT)
        {
            Port_Writelevel(baseAddress, pinConfig->PinNumber,pinConfig->InitialLevel);
        }

        /* Calculate the IOCR pin-control value */
        uint8 pcValue = Port_IocrMode(pinConfig,pinConfig->Direction,pinConfig->InitialMode);

        /* Configure the pin in the IOCR register */
        Port_WriteIocr(baseAddress,pinConfig->PinNumber,pcValue);
    }


    /* Initialization completed   */
    Port_ActiveConfig = ConfigPtr;
}

/*              api to change pin direction at runtime          */
void Port_SetPinDirection(Port_PinType Pin,Port_PinDirectionType Direction)
{
    const Port_PinConfigType *pinConfig;
    uint32 baseAddress;

    if(Port_ActiveConfig == NULL_PTR)
    {
        Port_Report(PORT_SET_DIR_SID, PORT_E_UNINIT);
        return;
    }

    pinConfig = Port_Find(Pin);

    if(pinConfig == NULL_PTR)
    {
        Port_Report(PORT_SET_DIR_SID, PORT_E_PARAM_PIN);
        return;
    }

    if((Direction != PORT_PIN_IN) && (Direction != PORT_PIN_OUT))
    {
        Port_Report(PORT_SET_DIR_SID,PORT_E_PARAM_INVALID_DIRECTION);
        return;
    }

    if(((pinConfig->PortNumber == 40U) ||(pinConfig->PortNumber == 41U))&& (Direction == PORT_PIN_OUT))
    {
        Port_Report(PORT_SET_DIR_SID, PORT_E_PARAM_PIN);
        return;
    }

    if(pinConfig->DirectionChangeable == FALSE)
    {
        Port_Report(PORT_SET_DIR_SID, PORT_E_DIRECTION_UNCHANGEABLE);
        return;
    }

    /* Get the base address of the selected port  */
    baseAddress = Port_Base(pinConfig->PortNumber);

    Port_PinModeType mode;

    if(Direction == PORT_PIN_IN)
    {
        mode = PORT_GPIO;
    }
    else
    {
        mode = pinConfig->InitialMode;
    }

    /* Get the IOCR value for the selected direction and mode */
    uint8 pcValue = Port_IocrMode(pinConfig, Direction, mode);

    /* Update the pin configuration in the hardware register */
    Port_WriteIocr(baseAddress, pinConfig->PinNumber, pcValue);
}


/*              api to change pin mode at Runtime               */
void Port_SetPinMode(Port_PinType Pin,Port_PinModeType Mode)
{
    const Port_PinConfigType *pinConfig;
    uint32 baseAddress;

    if(Port_ActiveConfig == NULL_PTR)
    {
        Port_Report(PORT_SET_MODE_SID, PORT_E_UNINIT);
        return;
    }

    pinConfig = Port_Find(Pin);

    if(pinConfig == NULL_PTR)
    {
        Port_Report(PORT_SET_MODE_SID, PORT_E_PARAM_PIN);
        return;
    }

    if((uint8)Mode > 7U)
    {
        Port_Report(PORT_SET_MODE_SID,PORT_E_PARAM_INVALID_MODE);
        return;
    }

    if(pinConfig->ModeChangeable == FALSE)
    {
        Port_Report(PORT_SET_MODE_SID,PORT_E_MODE_UNCHANGEABLE);
        return;
    }

    if(pinConfig->Direction != PORT_PIN_OUT)
    {
        Port_Report(PORT_SET_MODE_SID, PORT_E_PARAM_INVALID_MODE);
        return;
    }


    /* Get the base address of the selected port    */
    baseAddress = Port_Base(pinConfig->PortNumber);

    /* Calculate the IOCR value for the selected mode */
    uint8 pcValue = Port_IocrMode(pinConfig, PORT_PIN_OUT, Mode);

    /* Update the pin mode in the IOCR register */
    Port_WriteIocr(baseAddress, pinConfig->PinNumber, pcValue);
}

/*          api for getting version info        */
void Port_GetVersionInfo(Std_VersionInfoType *VersionInfoPtr)
{
    if(VersionInfoPtr == NULL_PTR)
    {
        Port_Report(PORT_VERSION_SID, PORT_E_PARAM_POINTER);
        return;
    }


    /* PORT driver version information  */
    VersionInfoPtr->vendorID = 0U;
    VersionInfoPtr->moduleID = PORT_MODULE_ID;
    VersionInfoPtr->sw_major_version = 0U;
    VersionInfoPtr->sw_minor_version = 1U;
    VersionInfoPtr->sw_patch_version = 0U;
}

/*          api for Reporting the error details of port to DET          */
static void Port_Report(uint8 Service, uint8 Error)
{
    /*  Report PORT driver errors to DET    */
    (void)Det_ReportError(PORT_MODULE_ID, PORT_INSTANCE_ID, Service, Error);
}

/*          api to select the base address of the port based on the portnumber          */
static uint32 Port_Base(uint8 portNumber)
{
    uint32 baseAddress = 0UL;

    switch (portNumber) {
        case 0U: baseAddress = PORT_00_BASE; break;
        case 1U: baseAddress = PORT_01_BASE; break;
        case 2U: baseAddress = PORT_02_BASE; break;
        case 10U: baseAddress = PORT_10_BASE; break;
        case 11U: baseAddress = PORT_11_BASE; break;
        case 12U: baseAddress = PORT_12_BASE; break;
        case 13U: baseAddress = PORT_13_BASE; break;
        case 14U: baseAddress = PORT_14_BASE; break;
        case 15U: baseAddress = PORT_15_BASE; break;
        case 20U: baseAddress = PORT_20_BASE; break;
        case 21U: baseAddress = PORT_21_BASE; break;
        case 22U: baseAddress = PORT_22_BASE; break;
        case 23U: baseAddress = PORT_23_BASE; break;
        case 24U: baseAddress = PORT_24_BASE; break;
        case 25U: baseAddress = PORT_25_BASE; break;
        case 26U: baseAddress = PORT_26_BASE; break;
        case 30U: baseAddress = PORT_30_BASE; break;
        case 31U: baseAddress = PORT_31_BASE; break;
        case 32U: baseAddress = PORT_32_BASE; break;
        case 33U: baseAddress = PORT_33_BASE; break;
        case 34U: baseAddress = PORT_34_BASE; break;
        case 40U: baseAddress = PORT_40_BASE; break;
        case 41U: baseAddress = PORT_41_BASE; break;
        default: break;
    }

    /* returning the base address       */
    return baseAddress;
}


/*          api to get the IOCR register bits value of a pin based on direction and mode          */
static uint8 Port_IocrMode(const Port_PinConfigType *pinConfig, Port_PinDirectionType direction, Port_PinModeType mode)
{
    uint8 pcValue;

    if(direction == PORT_PIN_IN)
    {
        /* Selecting input mode  */
        switch(pinConfig->InputMode)
        {
            case PORT_INPUT_PULLDOWN:
                                     pcValue = PORT_INPUT_PULL_DOWN;
                                     break;
            case PORT_INPUT_PULLUP  :
                                     pcValue = PORT_INPUT_PULL_UP;
                                     break;
            case PORT_INPUT_TRISTATE:
                                     pcValue = PORT_INPUT_TRISTATE1;
                                     break;
            default                 :
                                     pcValue = PORT_INPUT_NO_PULL;
                                     break;
        }
    }
    else{

        /* Select push-pull or open-drain output   */
        if(pinConfig->OutputMode == PORT_OUTPUT_OPENDRAIN)
        {
            pcValue = OUTPUT_OPEN_DRAIN;
        }
        else
        {
            pcValue = OUTPUT_PUSH_PULL;
        }

        /*Including the selected alternative functions */
        pcValue = (uint8)(pcValue + ((uint8)mode * 8U));
    }

    return pcValue;
}


/*              api for writing the modification into IOCR register pased on pinNumber      */
static void Port_WriteIocr(uint32 baseAddress, uint8 pinNumber, uint8 pcValue)
{
    uint32 offset;
    uint32 shift;
    uint32 mask;
    uint32 registerValue;

    /*Finding the IOCR register and pin position */
    offset = PORT_IOCR_OFFSET(pinNumber);
    shift = PORT_IOCR_SHIFT(pinNumber);


    mask = PORT_IOCR_PC_MASK << shift;

    /*  Read the current register value  */
    registerValue = PORT_REG32(baseAddress , offset);

    /*      Update only the selected pin's control bits         */
    registerValue = (registerValue & (~mask))|((((uint32)pcValue) << shift) & mask);

    /*      Write the updated value back      */
    PORT_REG32(baseAddress, offset) = registerValue;
}

/*              api to write into the OMR register when the direction is output         */
static void Port_Writelevel(uint32 baseAddress, uint8 pinNumber, uint8 level)
{
    uint32 bitMask;

    bitMask = 1UL << pinNumber;

    if(level == STD_HIGH)
    {
        PORT_REG32(baseAddress, OMR_OFFSET) = bitMask;
    }
    else
    {
        PORT_REG32(baseAddress, OMR_OFFSET) = (bitMask << 16U);
    }
}

/*          api for finding the port            */
static const Port_PinConfigType *Port_Find(Port_PinType pinId)
{
    uint16 i;

    if(Port_ActiveConfig == NULL_PTR)
    {
        return NULL_PTR;
    }

    /*      Search for the requested pin in the configuration       */
    for(i = 0U; i < Port_ActiveConfig->PinCount; i++)
    {
        const Port_PinConfigType *pinConfig;

        pinConfig = &Port_ActiveConfig->Pins[i];

        if(PORT_PIN_ID(pinConfig->PortNumber,pinConfig->PinNumber) == pinId)
        {
            return pinConfig;
        }
    }

    return NULL_PTR;
}



