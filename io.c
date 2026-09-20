//Constants

enum {
    PERIPHERAL_BASE_ADDR = 0x3F000000,
    GPFSEL0         = PERIPHERAL_BASE_ADDR + 0x200000,
    GPSET0          = PERIPHERAL_BASE_ADDR + 0x20001C,
    GPCLR0          = PERIPHERAL_BASE_ADDR + 0x200028,
    GPPUD           = PERIPHERAL_BASE_ADDR + 0x200094,
    GPPUDCLK0       = PERIPHERAL_BASE_ADDR + 0x200098
};

enum {
    GPIO_MAX_PIN       = 53,
    GPIO_FUNCTION_ALT5 = 2
};

enum {
    PULL_NONE = 0,
    PULL_DOWN = 1,
    PULL_UP   = 2
};

enum {
    AUX_BASE        = PERIPHERAL_BASE_ADDR + 0x215000,
    AUX_ENABLES     = AUX_BASE + 4,
    AUX_MU_IO_REG   = AUX_BASE + 64,
    AUX_MU_IER_REG  = AUX_BASE + 68,
    AUX_MU_IIR_REG  = AUX_BASE + 72,
    AUX_MU_LCR_REG  = AUX_BASE + 76,
    AUX_MU_MCR_REG  = AUX_BASE + 80,
    AUX_MU_LSR_REG  = AUX_BASE + 84,
    AUX_MU_CNTL_REG = AUX_BASE + 96,
    AUX_MU_BAUD_REG = AUX_BASE + 104,
    AUX_UART_CLOCK = 250000000,
    UART_BAUD_RATE      = 115200,
    AUX_MU_BAUD_VAL = (AUX_UART_CLOCK / (UART_BAUD_RATE * 8)) - 1
};

void mmio_write(long res, unsigned int val);
unsigned int mmio_red(long reg);
