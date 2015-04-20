################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/app/ADC.c" \
"../Sources/app/GPIO.c" \
"../Sources/app/Lamp_Control.c" \
"../Sources/app/Read_Selector.c" \

C_SRCS += \
../Sources/app/ADC.c \
../Sources/app/GPIO.c \
../Sources/app/Lamp_Control.c \
../Sources/app/Read_Selector.c \

OBJS += \
./Sources/app/ADC.o \
./Sources/app/GPIO.o \
./Sources/app/Lamp_Control.o \
./Sources/app/Read_Selector.o \

C_DEPS += \
./Sources/app/ADC.d \
./Sources/app/GPIO.d \
./Sources/app/Lamp_Control.d \
./Sources/app/Read_Selector.d \

OBJS_QUOTED += \
"./Sources/app/ADC.o" \
"./Sources/app/GPIO.o" \
"./Sources/app/Lamp_Control.o" \
"./Sources/app/Read_Selector.o" \

C_DEPS_QUOTED += \
"./Sources/app/ADC.d" \
"./Sources/app/GPIO.d" \
"./Sources/app/Lamp_Control.d" \
"./Sources/app/Read_Selector.d" \

OBJS_OS_FORMAT += \
./Sources/app/ADC.o \
./Sources/app/GPIO.o \
./Sources/app/Lamp_Control.o \
./Sources/app/Read_Selector.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/app/ADC.o: ../Sources/app/ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #12 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/ADC.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/GPIO.o: ../Sources/app/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #13 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/GPIO.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/Lamp_Control.o: ../Sources/app/Lamp_Control.c
	@echo 'Building file: $<'
	@echo 'Executing target #14 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/Lamp_Control.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/Lamp_Control.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/app/Read_Selector.o: ../Sources/app/Read_Selector.c
	@echo 'Building file: $<'
	@echo 'Executing target #15 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/app/Read_Selector.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/app/Read_Selector.o"
	@echo 'Finished building: $<'
	@echo ' '


