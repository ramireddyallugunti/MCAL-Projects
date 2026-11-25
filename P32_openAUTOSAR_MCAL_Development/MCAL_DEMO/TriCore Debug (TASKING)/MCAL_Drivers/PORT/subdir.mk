################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../MCAL_Drivers/PORT/port_driver.c" 

COMPILED_SRCS += \
"MCAL_Drivers/PORT/port_driver.src" 

C_DEPS += \
"./MCAL_Drivers/PORT/port_driver.d" 

OBJS += \
"MCAL_Drivers/PORT/port_driver.o" 


# Each subdirectory must supply rules for building sources it contributes
"MCAL_Drivers/PORT/port_driver.src":"../MCAL_Drivers/PORT/port_driver.c" "MCAL_Drivers/PORT/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/MCAL_DEMO/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL_Drivers/PORT/port_driver.o":"MCAL_Drivers/PORT/port_driver.src" "MCAL_Drivers/PORT/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-MCAL_Drivers-2f-PORT

clean-MCAL_Drivers-2f-PORT:
	-$(RM) ./MCAL_Drivers/PORT/port_driver.d ./MCAL_Drivers/PORT/port_driver.o ./MCAL_Drivers/PORT/port_driver.src

.PHONY: clean-MCAL_Drivers-2f-PORT

