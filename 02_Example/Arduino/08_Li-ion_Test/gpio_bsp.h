#ifndef GPIO_BSP_H
#define GPIO_BSP_H
#include "driver/gpio.h"
#define TCA_GPIO_0 0
#define TCA_GPIO_1 1
#define TCA_GPIO_2 2
#define TCA_GPIO_3 3
#define TCA_GPIO_4 4
#define TCA_GPIO_5 5
#define TCA_GPIO_6 6
#define TCA_GPIO_7 7

#define EXIO_OLED_RESET TCA_GPIO_0
#define EXIO_TP_RESET   TCA_GPIO_1
#define EXIO_RTC_INT    TCA_GPIO_2
#define EXIO_IMU_INT2   TCA_GPIO_3
#define EXIO_IMU_INT1   TCA_GPIO_4

#define example_out_gpio_1 (gpio_num_t)7
#define example_in_gpio_2  (gpio_num_t)8

#define BAT_PIN (gpio_num_t)16    //BAT_PIN
#define example_key (gpio_num_t)15

void esp32_gpio_init(void);
void BAT_ON(void);
void BAT_OFF(void);
uint8_t EXIO_Get_State(uint8_t pin);
void EXIO_Set_State(uint8_t pin,uint8_t value);
void GPIO_SET(uint8_t pin,uint8_t value);
uint8_t GPIO_GET(uint8_t pin);
#endif
