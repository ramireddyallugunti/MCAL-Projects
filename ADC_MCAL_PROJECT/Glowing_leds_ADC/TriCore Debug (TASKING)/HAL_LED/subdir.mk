################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../HAL_LED/Led.c" 

COMPILED_SRCS += \
"HAL_LED/Led.src" 

C_DEPS += \
"./HAL_LED/Led.d" 

OBJS += \
"HAL_LED/Led.o" 


# Each subdirectory must supply rules for building sources it contributes
"HAL_LED/Led.src":"../HAL_LED/Led.c" "HAL_LED/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"HAL_LED/Led.o":"HAL_LED/Led.src" "HAL_LED/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-HAL_LED

clean-HAL_LED:
	-$(RM) ./HAL_LED/Led.d ./HAL_LED/Led.o ./HAL_LED/Led.src

.PHONY: clean-HAL_LED

