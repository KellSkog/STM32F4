CC := gcc
######################################
# target
######################################
TARGET := f401-servo-x86
BUILD_DIR := build/x86


C_SOURCES =  \
Src/main.c

OBJECTS := $(BUILD_DIR)/$(notdir $(C_SOURCES:.c=.o))

# C includes
C_INCLUDES = -IMocking \
-IInc \
-IMiddlewares/Third_Party/FreeRTOS/Source/include \
-IMiddlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 \
-IMiddlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F \
-IDrivers/CMSIS/Device/ST/STM32F4xx/Include \
-IDrivers/CMSIS/Include \
-IDrivers/STM32F4xx_HAL_Driver/Inc \
-IDrivers/STM32F4xx_HAL_Driver/Inc/Legacy

CFLAGS := $(C_INCLUDES)

all: $(BUILD_DIR)/$(TARGET).out

$(BUILD_DIR)/$(TARGET).out: $(OBJECTS)
	@echo "Building: " $@
	$(CC) $(CFLAGS) $< -o $@

$(BUILD_DIR)/%.o: Src/%.c | $(BUILD_DIR) 
	$(CC) -DSTM32F401xE=1 -c $(CFLAGS) $< -o $@

$(BUILD_DIR):
	-mkdir build
	mkdir $@
#######################################
# clean up
#######################################
clean:
	-rm -fR $(BUILD_DIR)