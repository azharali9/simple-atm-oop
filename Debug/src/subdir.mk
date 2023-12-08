################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AccountMainMenu.cpp \
../src/BalanceInquiry.cpp \
../src/DepositCash.cpp \
../src/WelcomeScreen.cpp \
../src/WithdrawCash.cpp \
../src/file.cpp \
../src/main.cpp 

OBJS += \
./src/AccountMainMenu.o \
./src/BalanceInquiry.o \
./src/DepositCash.o \
./src/WelcomeScreen.o \
./src/WithdrawCash.o \
./src/file.o \
./src/main.o 

CPP_DEPS += \
./src/AccountMainMenu.d \
./src/BalanceInquiry.d \
./src/DepositCash.d \
./src/WelcomeScreen.d \
./src/WithdrawCash.d \
./src/file.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


