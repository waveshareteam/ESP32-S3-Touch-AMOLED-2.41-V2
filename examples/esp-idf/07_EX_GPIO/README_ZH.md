# 07_EX_GPIO

[English](README.md) | [简体中文](README_ZH.md)

## 功能

使用外部回环接线测试原生 GPIO 与 TCA9554 扩展 GPIO。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 断电后，用两根跳线将 J8 上的 GPIO7 与 GPIO8、EXIO5 与 EXIO6 分别短接。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

串口循环输出 GPIO test passed 或 GPIO test failed。

## 常见问题

测试通过需要同时连接两组回环；J8 引脚位置见 V2 原理图。
