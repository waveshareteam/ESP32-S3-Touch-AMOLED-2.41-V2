# 01_ADC_Test

[English](README.md) | [简体中文](README_ZH.md)

## 功能

读取电池电压 ADC，输出原始采样值与换算电压。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 测量电池电压时可连接 3.7 V 锂电池。

## 怎么运行

安装[仓库指定版本](../../../../README_ZH.md)的 Arduino-ESP32，并把项目文件夹位置设为 `examples/arduino/`（或将其中的 `libraries/` 复制到自己的项目文件夹）。选择 `ESP32S3 Dev Module` 并设置下列非默认选项后，打开 `01_ADC_Test.ino` 上传；串口监视器使用 115200 波特率。

| 工具菜单 | 取值 |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## 预期现象

串口每秒输出 ADC 原始值和电压。

## 常见问题

本示例输出分压采样结果，不估算电池百分比。
