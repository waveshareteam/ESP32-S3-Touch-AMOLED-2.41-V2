# 05_WIFI_STA

[English](README.md) | [简体中文](README_ZH.md)

## 功能

以 STA 模式连接 2.4 GHz Wi-Fi 网络。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 需要一个 2.4 GHz Wi-Fi 接入点。

## 怎么运行

使用[仓库指定的 ESP-IDF 版本](../../../README_ZH.md)，在本示例目录运行：

```bash
idf.py set-target esp32s3 build flash monitor
```

## 预期现象

连接成功后，串口输出分配到的 IP 地址。

## 常见问题

编译前请在 `components/esp_wifi_bsp/esp_wifi_bsp.c` 中设置 SSID 和密码。
