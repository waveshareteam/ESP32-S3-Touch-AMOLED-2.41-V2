# 01_ADC_Test

[English](README.md) | [简体中文](README_ZH.md)

## 功能

读取电池电压 ADC，输出原始采样值与换算电压。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 测量电池电压时可连接 3.7 V 锂电池。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

串口每秒输出 ADC 原始值和电压。

## 常见问题

本示例输出分压采样结果，不估算电池百分比。
