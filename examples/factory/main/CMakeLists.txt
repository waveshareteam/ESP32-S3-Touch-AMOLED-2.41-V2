idf_component_register(
    SRCS "example_qspi_with_ram.c"
    INCLUDE_DIRS "."
    REQUIRES
        esp_lcd
        esp_lcd_sh8601
        esp_lcd_touch_ft5x06
        esp_wifi_bsp
        gpio_bsp
        i2c_bsp
        lvgl
        user_app)

set_source_files_properties(
    ${LV_DEMOS_SOURCES}
    PROPERTIES COMPILE_OPTIONS
    -DLV_LVGL_H_INCLUDE_SIMPLE)
