idf_component_register(
  SRCS "user_app.c"
  PRIV_REQUIRES gpio_bsp i2c_bsp
  INCLUDE_DIRS "./")
