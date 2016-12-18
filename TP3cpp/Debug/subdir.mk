################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Bibliographie.cpp \
../BibliographieTesteur.cpp \
../ContratException.cpp \
../Journal.cpp \
../JournalTesteur.cpp \
../Ouvrage.cpp \
../OuvrageTesteur.cpp \
../Reference.cpp \
../ReferenceTesteur.cpp \
../gestionBibliographie.cpp \
../validationFormat.cpp 

OBJS += \
./Bibliographie.o \
./BibliographieTesteur.o \
./ContratException.o \
./Journal.o \
./JournalTesteur.o \
./Ouvrage.o \
./OuvrageTesteur.o \
./Reference.o \
./ReferenceTesteur.o \
./gestionBibliographie.o \
./validationFormat.o 

CPP_DEPS += \
./Bibliographie.d \
./BibliographieTesteur.d \
./ContratException.d \
./Journal.d \
./JournalTesteur.d \
./Ouvrage.d \
./OuvrageTesteur.d \
./Reference.d \
./ReferenceTesteur.d \
./gestionBibliographie.d \
./validationFormat.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/etudiant/Documents/TP3/TP3cpp/contrib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


