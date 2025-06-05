# MCU settings
MCU_SERIES = h7
CMSIS_MCU = STM32H750xx
MICROPY_FLOAT_IMPL = double
AF_FILE = boards/stm32h743_af.csv

# When not using Mboot the ISR text goes first, then the rest after the filesystem
LD_FILES = boards/stm32h750.ld boards/common_ifs.ld
TEXT0_ADDR = 0x00000000
TEXT1_ADDR = 0x90000000
