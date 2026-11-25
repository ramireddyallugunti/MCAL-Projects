
#ifndef COMMON_DET_H_
#define COMMON_DET_H_

#include "StandardTypes.h"
#include "Platform_Types.h"


/* function declaration for Development Error Tracer Report Error Function       */
Std_ReturnType Det_ReportError(
        uint16 ModuleId,
        uint8 InstanceId,
        uint8 ApiId,
        uint8 ErrorId
        );

#endif /* COMMON_DET_H_ */
