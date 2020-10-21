################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../gen/code_generation/_ch/Blink.c \
../gen/code_generation/_ch/BlinkEE_bridge.c \
../gen/code_generation/_ch/Blink_Flasher_class.c \
../gen/code_generation/_ch/MyBlink_sys_main.c \
../gen/code_generation/_ch/sys_user_co.c \
../gen/code_generation/_ch/sys_xtuml.c 

OBJS += \
./gen/code_generation/_ch/Blink.o \
./gen/code_generation/_ch/BlinkEE_bridge.o \
./gen/code_generation/_ch/Blink_Flasher_class.o \
./gen/code_generation/_ch/MyBlink_sys_main.o \
./gen/code_generation/_ch/sys_user_co.o \
./gen/code_generation/_ch/sys_xtuml.o 

C_DEPS += \
./gen/code_generation/_ch/Blink.d \
./gen/code_generation/_ch/BlinkEE_bridge.d \
./gen/code_generation/_ch/Blink_Flasher_class.d \
./gen/code_generation/_ch/MyBlink_sys_main.d \
./gen/code_generation/_ch/sys_user_co.d \
./gen/code_generation/_ch/sys_xtuml.d 


# Each subdirectory must supply rules for building sources it contributes
gen/code_generation/_ch/%.o: ../gen/code_generation/_ch/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


