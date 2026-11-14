# 05_WIFI_STA

[English](README.md) | [简体中文](README_ZH.md)

## 功能

以 STA 模式连接 2.4 GHz Wi-Fi 网络。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 需要一个 2.4 GHz Wi-Fi 接入点。

## 怎么运行

安装[仓库指定版本](../../../../README_ZH.md)的 Arduino-ESP32，并把项目文件夹位置设为 `examples/arduino/`（或将其中的 `libraries/` 复制到自己的项目文件夹）。选择 `ESP32S3 Dev Module` 并设置下列非默认选项后，打开 `05_WIFI_STA.ino` 上传；串口监视器使用 115200 波特率。

| 工具菜单 | 取值 |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## 预期现象

连接成功后，串口输出分配到的 IP 地址。

## 常见问题

编译前请在 `espwifi.cpp` 中设置 SSID 和密码。
