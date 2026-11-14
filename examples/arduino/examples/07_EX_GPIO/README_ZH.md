# 07_EX_GPIO

[English](README.md) | [简体中文](README_ZH.md)

## 功能

使用外部回环接线测试原生 GPIO 与 TCA9554 扩展 GPIO。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 断电后，用两根跳线将 J8 上的 GPIO7 与 GPIO8、EXIO5 与 EXIO6 分别短接。

## 怎么运行

安装[仓库指定版本](../../../../README_ZH.md)的 Arduino-ESP32，并把项目文件夹位置设为 `examples/arduino/`（或将其中的 `libraries/` 复制到自己的项目文件夹）。选择 `ESP32S3 Dev Module` 并设置下列非默认选项后，打开 `07_EX_GPIO.ino` 上传；串口监视器使用 115200 波特率。

| 工具菜单 | 取值 |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## 预期现象

串口循环输出 GPIO test passed 或 GPIO test failed。

## 常见问题

测试通过需要同时连接两组回环；J8 引脚位置见 V2 原理图。
