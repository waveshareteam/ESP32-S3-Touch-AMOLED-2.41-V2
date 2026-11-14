# Factory Demo

[English](README.md) | [简体中文](README_ZH.md)

## 功能

运行出厂触摸界面，展示电池电压、RTC、IMU、SD 卡容量，以及 Wi-Fi 和 BLE 扫描。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 检查对应功能时可接入 TF 卡与 3.7 V 锂电池。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

屏幕显示出厂界面、外设数据与扫描页面。

## 常见问题

SD 卡挂载失败时会尝试格式化，请先备份卡内文件；GPIO 自测需要连接 GPIO7–GPIO8 与 EXIO5–EXIO6 两组回环。
