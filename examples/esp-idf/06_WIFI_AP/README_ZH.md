# 06_WIFI_AP

[English](README.md) | [简体中文](README_ZH.md)

## 功能

在开发板上创建 Wi-Fi 接入点。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 需要带 Wi-Fi 的手机或电脑。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

手机或电脑可以发现并连接配置好的 Wi-Fi 网络。

## 常见问题

SSID 和密码写在 `main/main.c` 中；本示例不提供网页。
