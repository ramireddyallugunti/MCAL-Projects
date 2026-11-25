
#include"Det.h"
#include"Platform_Types.h"

/* structure for DET record instance */
typedef struct{
        uint16  ModuleId;
        uint8   InstanceId;
        uint8   ApiId;
        uint8   ErrorId;
}Det_ErrorRecordType;


static volatile Det_ErrorRecordType Det_LastError;

static volatile uint32 Det_ErrorCount = 0U;

/*      Report Error Function to store error details       */
Std_ReturnType Det_ReportError(uint16 ModuleId,uint8 InstanceId,uint8 ApiId,uint8 ErrorId)
{
    Det_LastError.ModuleId = ModuleId;
    Det_LastError.InstanceId = InstanceId;
    Det_LastError.ApiId = ApiId;
    Det_LastError.ErrorId = ErrorId;

    Det_ErrorCount++;

    return E_OK;
}
