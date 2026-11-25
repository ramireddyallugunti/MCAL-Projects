################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../HAL/Led.c" \
"../HAL/irq_hal.c" 

COMPILED_SRCS += \
"HAL/Led.src" \
"HAL/irq_hal.src" 

C_DEPS += \
"./HAL/Led.d" \
"./HAL/irq_hal.d" 

OBJS += \
"HAL/Led.o" \
"HAL/irq_hal.o" 


# Each subdirectory must supply rules for building sources it contributes
"HAL/Led.src":"../HAL/Led.c" "HAL/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"HAL/Led.o":"HAL/Led.src" "HAL/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"HAL/irq_hal.src":"../HAL/irq_hal.c" "HAL/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"HAL/irq_hal.o":"HAL/irq_hal.src" "HAL/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-HAL

clean-HAL:
	-$(RM) ./HAL/Led.d ./HAL/Led.o ./HAL/Led.src ./HAL/irq_hal.d ./HAL/irq_hal.o ./HAL/irq_hal.src

.PHONY: clean-HAL

