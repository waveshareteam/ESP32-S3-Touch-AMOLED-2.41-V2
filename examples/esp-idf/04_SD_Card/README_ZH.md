# 04_SD_Card

[English](README.md) | [简体中文](README_ZH.md)

## 功能

通过 SPI 挂载 TF 卡，并输出卡信息和容量。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 启动前插入已格式化为 FAT 文件系统的 TF 卡。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

挂载成功后，串口输出卡信息和容量。

## 常见问题

默认 SPI 路径挂载失败时不格式化；切换到代码中的 SDMMC 路径后，挂载失败会触发格式化。
