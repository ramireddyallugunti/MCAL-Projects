################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Cpu0_Main.c" \
"../Cpu1_Main.c" \
"../Cpu2_Main.c" \
"../Cpu3_Main.c" \
"../Cpu4_Main.c" \
"../Cpu5_Main.c" 

COMPILED_SRCS += \
"Cpu0_Main.src" \
"Cpu1_Main.src" \
"Cpu2_Main.src" \
"Cpu3_Main.src" \
"Cpu4_Main.src" \
"Cpu5_Main.src" 

C_DEPS += \
"./Cpu0_Main.d" \
"./Cpu1_Main.d" \
"./Cpu2_Main.d" \
"./Cpu3_Main.d" \
"./Cpu4_Main.d" \
"./Cpu5_Main.d" 

OBJS += \
"Cpu0_Main.o" \
"Cpu1_Main.o" \
"Cpu2_Main.o" \
"Cpu3_Main.o" \
"Cpu4_Main.o" \
"Cpu5_Main.o" 


# Each subdirectory must supply rules for building sources it contributes
"Cpu0_Main.src":"../Cpu0_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Configurations" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Platform" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Platform\\Tricore" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Platform\\Tricore\\Compilers" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Sfr" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Sfr\\TC39xB" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Ssw" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Ssw\\TC3xx" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Infra\\Ssw\\TC3xx\\Tricore" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Service" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Service\\CpuGeneric" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\Service\\CpuGeneric\\_Utilities" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Cpu" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Cpu\\Irq" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Cpu\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Cpu\\Trap" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Gtm" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Gtm\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Mtu" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Mtu\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Pms" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Pms\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Port" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Port\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Scu" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Scu\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Src" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\Src\\Std" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\_Impl" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\_PinMap" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\Libraries\\iLLD\\TC3xx\\Tricore\\_PinMap\\TC39xB" -I"C:\\Users\\Admin\\AURIX-v1.10.36-workspace\\Glowing_leds_ADC\\MCAL_Config\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\Port\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\Mcu\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\Dio\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\Adc\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Infra_Prod\\Platform" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\DemoWorkspace\\McalDemo\\TC39B\\0_Src\\BaseSw\\Infra\\Integration" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\McalLib\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\McIsar\\Src\\Mcal\\Tricore\\McalLib\\ssc\\inc\\AS422" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\DemoWorkspace\\McalDemo\\TC39B\\0_Src\\BaseSw\\Infra\\Autosar_Srv" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\DemoWorkspace\\McalDemo\\TC39B\\0_Src\\BaseSw\\Infra\\Irq\\ssc\\inc" -I"C:\\MC-ISAR_AS422_TC3xx_BASIC_3.0.0\\DemoWorkspace\\McalDemo\\TC39B\\1_ToolEnv\\2_Tresos\\AS422\\DemoApp\\DemoApp\\output\\generated\\inc" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu0_Main.o":"Cpu0_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"Cpu1_Main.src":"../Cpu1_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu1_Main.o":"Cpu1_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"Cpu2_Main.src":"../Cpu2_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu2_Main.o":"Cpu2_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"Cpu3_Main.src":"../Cpu3_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu3_Main.o":"Cpu3_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"Cpu4_Main.src":"../Cpu4_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu4_Main.o":"Cpu4_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"
"Cpu5_Main.src":"../Cpu5_Main.c" "subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/Glowing_leds_ADC/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Cpu5_Main.o":"Cpu5_Main.src" "subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean--2e-

clean--2e-:
	-$(RM) ./Cpu0_Main.d ./Cpu0_Main.o ./Cpu0_Main.src ./Cpu1_Main.d ./Cpu1_Main.o ./Cpu1_Main.src ./Cpu2_Main.d ./Cpu2_Main.o ./Cpu2_Main.src ./Cpu3_Main.d ./Cpu3_Main.o ./Cpu3_Main.src ./Cpu4_Main.d ./Cpu4_Main.o ./Cpu4_Main.src ./Cpu5_Main.d ./Cpu5_Main.o ./Cpu5_Main.src

.PHONY: clean--2e-

