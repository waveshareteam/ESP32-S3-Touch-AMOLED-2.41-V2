# 08_Li-ion_Test

[English](README.md) | [简体中文](README_ZH.md)

## 功能

初始化电池供电控制输出，使开发板可以保持锂电池供电。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 需要连接器和极性匹配、已充电的 3.7 V 锂电池。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

连接有电的电池后，程序启动并断开 USB，开发板仍保持供电。

## 常见问题

本示例使能电池供电，不显示电量百分比，也未实现按键关机。
