################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../MCAL_Config/port_PBcfg.c" 

COMPILED_SRCS += \
"MCAL_Config/port_PBcfg.src" 

C_DEPS += \
"./MCAL_Config/port_PBcfg.d" 

OBJS += \
"MCAL_Config/port_PBcfg.o" 


# Each subdirectory must supply rules for building sources it contributes
"MCAL_Config/port_PBcfg.src":"../MCAL_Config/port_PBcfg.c" "MCAL_Config/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/MCAL_DEMO/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL_Config/port_PBcfg.o":"MCAL_Config/port_PBcfg.src" "MCAL_Config/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-MCAL_Config

clean-MCAL_Config:
	-$(RM) ./MCAL_Config/port_PBcfg.d ./MCAL_Config/port_PBcfg.o ./MCAL_Config/port_PBcfg.src

.PHONY: clean-MCAL_Config

