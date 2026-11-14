# 03_I2C_QMI8658

[English](README.md) | [简体中文](README_ZH.md)

## 功能

通过 I2C 读取板载 QMI8658 IMU 的加速度与角速度。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

移动开发板时，串口输出的三轴加速度与陀螺仪数据随之变化。

## 常见问题

暂无。
