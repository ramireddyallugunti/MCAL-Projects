################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Common/Det.c" 

COMPILED_SRCS += \
"Common/Det.src" 

C_DEPS += \
"./Common/Det.d" 

OBJS += \
"Common/Det.o" 


# Each subdirectory must supply rules for building sources it contributes
"Common/Det.src":"../Common/Det.c" "Common/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2012 -D__CPU__=tc39xb "-fC:/Users/Admin/AURIX-v1.10.36-workspace/MCAL_DEMO/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Wc-w508 -Ctc39xb -Y0 -N0 -Z0 -o "$@" "$<"
"Common/Det.o":"Common/Det.src" "Common/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Common

clean-Common:
	-$(RM) ./Common/Det.d ./Common/Det.o ./Common/Det.src

.PHONY: clean-Common

