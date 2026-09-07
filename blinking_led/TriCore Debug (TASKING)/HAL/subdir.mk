################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../HAL/led.c" 

COMPILED_SRCS += \
"HAL/led.src" 

C_DEPS += \
"./HAL/led.d" 

OBJS += \
"HAL/led.o" 


# Each subdirectory must supply rules for building sources it contributes
"HAL/led.src":"../HAL/led.c" "HAL/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/ramal/AURIX-v1.10.36-workspace/blinking_led/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"HAL/led.o":"HAL/led.src" "HAL/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-HAL

clean-HAL:
	-$(RM) ./HAL/led.d ./HAL/led.o ./HAL/led.src

.PHONY: clean-HAL

