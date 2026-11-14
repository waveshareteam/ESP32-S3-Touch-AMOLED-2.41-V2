# 08_Li-ion_Test

[English](README.md) | [简体中文](README_ZH.md)

## 功能

初始化电池供电控制输出，使开发板可以保持锂电池供电。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 需要连接器和极性匹配、已充电的 3.7 V 锂电池。

## 怎么运行

安装[仓库指定版本](../../../../README_ZH.md)的 Arduino-ESP32，并把项目文件夹位置设为 `examples/arduino/`（或将其中的 `libraries/` 复制到自己的项目文件夹）。选择 `ESP32S3 Dev Module` 并设置下列非默认选项后，打开 `08_Li-ion_Test.ino` 上传；串口监视器使用 115200 波特率。

| 工具菜单 | 取值 |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## 预期现象

连接有电的电池后，程序启动并断开 USB，开发板仍保持供电。

## 常见问题

本示例使能电池供电，不显示电量百分比，也未实现按键关机。
