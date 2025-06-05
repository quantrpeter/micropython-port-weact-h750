# WEACT_H750 Board Support for MicroPython

This board definition enables MicroPython on the WeAct STM32H750 board.

## Features
- STM32H750 MCU
- 128KB Flash, 512KB RAM
- USB FS
- SD Card
- UART, LED

## Pinout
- UART1 TX: PA9
- UART1 RX: PA10
- LED: PB0 (Blue)
- USB VBUS Detect: PA9
- SD Card Detect: PC13

## Notes
- Adjust pin assignments as needed for your specific board revision.
- The linker script is set to `stm32h750.ld`.
