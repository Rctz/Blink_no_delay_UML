################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Blink.c \
../src/BlinkEE_bridge.c \
../src/Blink_Flasher_class.c \
../src/MyBlink_sys_main.c \
../src/sys_user_co.c \
../src/sys_xtuml.c 

OBJS += \
./src/Blink.o \
./src/BlinkEE_bridge.o \
./src/Blink_Flasher_class.o \
./src/MyBlink_sys_main.o \
./src/sys_user_co.o \
./src/sys_xtuml.o 

C_DEPS += \
./src/Blink.d \
./src/BlinkEE_bridge.d \
./src/Blink_Flasher_class.d \
./src/MyBlink_sys_main.d \
./src/sys_user_co.d \
./src/sys_xtuml.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


