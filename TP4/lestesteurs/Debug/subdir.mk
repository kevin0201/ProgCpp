################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BibliographieTesteur.cpp \
../JournalTesteur.cpp \
../OuvrageTesteur.cpp \
../ReferenceTesteur.cpp 

OBJS += \
./BibliographieTesteur.o \
./JournalTesteur.o \
./OuvrageTesteur.o \
./ReferenceTesteur.o 

CPP_DEPS += \
./BibliographieTesteur.d \
./JournalTesteur.d \
./OuvrageTesteur.d \
./ReferenceTesteur.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/etudiant/Documents/TP4/source" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


