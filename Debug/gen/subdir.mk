################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../gen/BlinkEE_bridge.c \
../gen/MyBlink_sys_main.c \
../gen/sys_user_co.c 

OBJS += \
./gen/BlinkEE_bridge.o \
./gen/MyBlink_sys_main.o \
./gen/sys_user_co.o 

C_DEPS += \
./gen/BlinkEE_bridge.d \
./gen/MyBlink_sys_main.d \
./gen/sys_user_co.d 


# Each subdirectory must supply rules for building sources it contributes
gen/%.o: ../gen/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


