# 02_I2C_PCF85063

[English](README.md) | [简体中文](README_ZH.md)

## 功能

通过 I2C 设置板载 PCF85063 RTC 的初始时间并读取时间。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

串口定期输出日期和时间。

## 常见问题

示例每次启动都会写入固定初始时间；设置时钟时请修改 CTime 初始值。
