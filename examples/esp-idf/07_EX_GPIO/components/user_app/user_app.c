#include <stdio.h>
#include "user_app.h"

#include "gpio_bsp.h"
#include "i2c_bsp.h"

void user_app_init(void);
void example_GPIO_task(void *reg);
void user_top_init(void)
{
  I2C_master_Init();    //I2C
  esp32_gpio_init();    //GPIO
  printf("GPIO_Test_Start \n");
  user_app_init();
}
void user_app_init(void)
{
  //vTaskDelay(pdMS_TO_TICKS(5000));
  xTaskCreate(example_GPIO_task, "example_GPIO_task", 3000, NULL, 2, NULL);
  //xTaskCreate(example_hasswp_task, "example_hasswp_task", 6000,(void*)(&xmqttMess), 2, &hasswp_test);
  //xTaskCreate(qmi8658c_example, "qmi8658c_example", 3000, NULL, 2, NULL);
  //xTaskCreate(PCF85063_example, "PCF85063_example", 3000, NULL , 2, NULL);
  //xTaskCreate(adc_example, "adc_example", 3000, NULL , 2, NULL);
  //xTaskCreate(example_can_task_read, "example_can_task_read", 3000, NULL , 2, NULL);
}
void example_GPIO_task(void *reg)
{
  for(;;)
  {
    uint8_t _add = 0;
    GPIO_SET(example_out_gpio_1,0);
    EXIO_Set_State(TCA_GPIO_5,0);
    vTaskDelay(pdMS_TO_TICKS(200));
    if(GPIO_GET(example_in_gpio_2)==0 && EXIO_Get_State(TCA_GPIO_6)==0)
    {
      _add++;
    }
    GPIO_SET(example_out_gpio_1,1);
    EXIO_Set_State(TCA_GPIO_5,1);
    vTaskDelay(pdMS_TO_TICKS(200));
    if(GPIO_GET(example_in_gpio_2)==1 && EXIO_Get_State(TCA_GPIO_6)==1)
    {
      _add++;
    }
    GPIO_SET(example_out_gpio_1,1);
    EXIO_Set_State(TCA_GPIO_5,0);
    vTaskDelay(pdMS_TO_TICKS(200));
    if(GPIO_GET(example_in_gpio_2)==1 && EXIO_Get_State(TCA_GPIO_6)==0)
    {
      _add++;
    }
    if(_add == 3)
    {
      printf("GPIO test passed.\n");
    }
    else
    {
      printf("GPIO test failed.\n");
    }
  }
}


