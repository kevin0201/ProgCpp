################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Ouvrage.cpp \
../src/gestionReferences.cpp \
../src/validationFormat.cpp 

OBJS += \
./src/Ouvrage.o \
./src/gestionReferences.o \
./src/validationFormat.o 

CPP_DEPS += \
./src/Ouvrage.d \
./src/gestionReferences.d \
./src/validationFormat.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


