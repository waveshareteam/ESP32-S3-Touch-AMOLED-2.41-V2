#include <stdio.h>
#include <esp_sleep.h>
#include <esp_log.h>
#include "freertos/FreeRTOS.h"
#include "display_bsp.h"
#include "touch_bsp.h"
#include "main_config.h"
#include "esp_lv_adapter.h"
#include "lvgl.h"
#include "lv_demos.h"

static i2c_master_bus_handle_t i2c_handle = NULL;

extern "C" void app_main(void) {
    i2c_master_bus_config_t i2c_bus_conf = {};
    i2c_bus_conf.clk_source = I2C_CLK_SRC_DEFAULT;
    i2c_bus_conf.sda_io_num = I2C_SDA_PIN;
    i2c_bus_conf.scl_io_num = I2C_SCL_PIN;
    i2c_bus_conf.i2c_port = BSP_I2C_NUM;
    ESP_ERROR_CHECK(i2c_new_master_bus(&i2c_bus_conf, &i2c_handle));

    bsp_display_init(i2c_handle,LCD_WIDTH * LCD_HEIGHT * 2);
    bsp_display_lcd_init();
    ESP_ERROR_CHECK(bsp_display_touch_reset());
    bsp_display_indev_init(bsp_touch_init(i2c_handle,LCD_WIDTH,LCD_HEIGHT));
    ESP_ERROR_CHECK(esp_lv_adapter_start());
    if(esp_lv_adapter_lock(-1) == ESP_OK) {
		lv_demo_widgets();
    	esp_lv_adapter_unlock();
  	}
}
