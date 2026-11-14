idf_component_register(
  SRCS "gpio_bsp.c"
  REQUIRES esp_driver_gpio
  PRIV_REQUIRES driver i2c_bsp
  INCLUDE_DIRS "./")
