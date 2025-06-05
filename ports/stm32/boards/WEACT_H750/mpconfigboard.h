#define MICROPY_HW_BOARD_NAME       "WEACT_H750"
#define MICROPY_HW_MCU_NAME         "STM32H750"

#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (1)
#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_HAS_FLASH        (1)

// HSE is 25MHz (typical for WeAct H750 boards)
#define MICROPY_HW_CLK_PLLM         (5)
#define MICROPY_HW_CLK_PLLN         (192)
#define MICROPY_HW_CLK_PLLP         (2)
#define MICROPY_HW_CLK_PLLQ         (2)
#define MICROPY_HW_CLK_PLLR         (2)
#define MICROPY_HW_CLK_LAST_FREQ    (1)

// UART config (example, adjust as needed)
#define MICROPY_HW_UART1_TX     (pin_A9)
#define MICROPY_HW_UART1_RX     (pin_A10)

// LED config (example, adjust as needed)
#define MICROPY_HW_LED1             (pin_B0) // Blue LED
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS           (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)

// SD card config (example, adjust as needed)
#define MICROPY_HW_SDCARD_DETECT_PIN (pin_C13)

// Flash config
#define MICROPY_HW_FLASH_FS_LABEL   "WEACTH750"
