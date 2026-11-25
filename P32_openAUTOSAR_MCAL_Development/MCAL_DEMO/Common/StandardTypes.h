
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include"Platform_Types.h"

/*      Standard api Return type        */
typedef uint8 Std_ReturnType;

#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK            0x00U

typedef unsigned char StatusType; /*OSEK compliance */
#endif
#define E_NOT_OK        0x01U


/*      Digital level       */
#define STD_LOW         0x00U
#define STD_HIGH        0x01U


/*      Physical state      */
#define STD_IDLE        0x00U
#define STD_ACTIVE      0x01U


/*      Configuration Switches      */
#define STD_OFF         0x00U
#define STD_ON          0x01U


/*      return values         */
#ifndef FALSE
#define FALSE 0U
#endif

#ifndef TRUE
#define TRUE 1U
#endif


/*     NULL pointer      */
#ifndef NULL_PTR
#define NULL_PTR        ((void *) 0)
#endif

/*      Software version information        */
typedef struct{
        uint16 vendorID;
        uint16 moduleID;
        uint8  sw_major_version;
        uint8  sw_minor_version;
        uint8  sw_patch_version;
}Std_VersionInfoType;


#endif /* STD_TYPES_H_ */
