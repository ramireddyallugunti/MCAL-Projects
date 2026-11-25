################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../MCAL Drivers/Adc.c" \
"../MCAL Drivers/Adc_Irq.c" \
"../MCAL Drivers/Dio.c" \
"../MCAL Drivers/IFX_Os.c" \
"../MCAL Drivers/Irq.c" \
"../MCAL Drivers/McalLib.c" \
"../MCAL Drivers/Mcal_SafetyError.c" \
"../MCAL Drivers/Port.c" \
"../MCAL Drivers/SchM_Adc.c" \
"../MCAL Drivers/SchM_McalLib.c" 

COMPILED_SRCS += \
"MCAL Drivers/Adc.src" \
"MCAL Drivers/Adc_Irq.src" \
"MCAL Drivers/Dio.src" \
"MCAL Drivers/IFX_Os.src" \
"MCAL Drivers/Irq.src" \
"MCAL Drivers/McalLib.src" \
"MCAL Drivers/Mcal_SafetyError.src" \
"MCAL Drivers/Port.src" \
"MCAL Drivers/SchM_Adc.src" \
"MCAL Drivers/SchM_McalLib.src" 

C_DEPS += \
"./MCAL Drivers/Adc.d" \
"./MCAL Drivers/Adc_Irq.d" \
"./MCAL Drivers/Dio.d" \
"./MCAL Drivers/IFX_Os.d" \
"./MCAL Drivers/Irq.d" \
"./MCAL Drivers/McalLib.d" \
"./MCAL Drivers/Mcal_SafetyError.d" \
"./MCAL Drivers/Port.d" \
"./MCAL Drivers/SchM_Adc.d" \
"./MCAL Drivers/SchM_McalLib.d" 

OBJS += \
"MCAL Drivers/Adc.o" \
"MCAL Drivers/Adc_Irq.o" \
"MCAL Drivers/Dio.o" \
"MCAL Drivers/IFX_Os.o" \
"MCAL Drivers/Irq.o" \
"MCAL Drivers/McalLib.o" \
"MCAL Drivers/Mcal_SafetyError.o" \
"MCAL Drivers/Port.o" \
"MCAL Drivers/SchM_Adc.o" \
"MCAL Drivers/SchM_McalLib.o" 


# Each subdirectory must supply rules for building sources it contributes
"MCAL Drivers/Adc.src":"../MCAL Drivers/Adc.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Adc.o":"MCAL Drivers/Adc.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/Adc_Irq.src":"../MCAL Drivers/Adc_Irq.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Adc_Irq.o":"MCAL Drivers/Adc_Irq.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/Dio.src":"../MCAL Drivers/Dio.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Dio.o":"MCAL Drivers/Dio.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/IFX_Os.src":"../MCAL Drivers/IFX_Os.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/IFX_Os.o":"MCAL Drivers/IFX_Os.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/Irq.src":"../MCAL Drivers/Irq.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Irq.o":"MCAL Drivers/Irq.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/McalLib.src":"../MCAL Drivers/McalLib.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/McalLib.o":"MCAL Drivers/McalLib.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/Mcal_SafetyError.src":"../MCAL Drivers/Mcal_SafetyError.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Mcal_SafetyError.o":"MCAL Drivers/Mcal_SafetyError.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/Port.src":"../MCAL Drivers/Port.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/Port.o":"MCAL Drivers/Port.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/SchM_Adc.src":"../MCAL Drivers/SchM_Adc.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/SchM_Adc.o":"MCAL Drivers/SchM_Adc.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"MCAL Drivers/SchM_McalLib.src":"../MCAL Drivers/SchM_McalLib.c" "MCAL Drivers/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"MCAL Drivers/SchM_McalLib.o":"MCAL Drivers/SchM_McalLib.src" "MCAL Drivers/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-MCAL-20-Drivers

clean-MCAL-20-Drivers:
	-$(RM) ./MCAL\ Drivers/Adc.d ./MCAL\ Drivers/Adc.o ./MCAL\ Drivers/Adc.src ./MCAL\ Drivers/Adc_Irq.d ./MCAL\ Drivers/Adc_Irq.o ./MCAL\ Drivers/Adc_Irq.src ./MCAL\ Drivers/Dio.d ./MCAL\ Drivers/Dio.o ./MCAL\ Drivers/Dio.src ./MCAL\ Drivers/IFX_Os.d ./MCAL\ Drivers/IFX_Os.o ./MCAL\ Drivers/IFX_Os.src ./MCAL\ Drivers/Irq.d ./MCAL\ Drivers/Irq.o ./MCAL\ Drivers/Irq.src ./MCAL\ Drivers/McalLib.d ./MCAL\ Drivers/McalLib.o ./MCAL\ Drivers/McalLib.src ./MCAL\ Drivers/Mcal_SafetyError.d ./MCAL\ Drivers/Mcal_SafetyError.o ./MCAL\ Drivers/Mcal_SafetyError.src ./MCAL\ Drivers/Port.d ./MCAL\ Drivers/Port.o ./MCAL\ Drivers/Port.src ./MCAL\ Drivers/SchM_Adc.d ./MCAL\ Drivers/SchM_Adc.o ./MCAL\ Drivers/SchM_Adc.src ./MCAL\ Drivers/SchM_McalLib.d ./MCAL\ Drivers/SchM_McalLib.o ./MCAL\ Drivers/SchM_McalLib.src

.PHONY: clean-MCAL-20-Drivers

