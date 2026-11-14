# 04_SD_Card

[English](README.md) | [简体中文](README_ZH.md)

## 功能

通过 SPI 挂载 TF 卡，并输出卡信息和容量。

## 硬件需求

ESP32-S3-Touch-AMOLED-2.41-V2 开发板和 USB 数据线。 启动前插入已格式化为 FAT 文件系统的 TF 卡。

## 怎么运行

安装[仓库指定版本](../../../../README_ZH.md)的 Arduino-ESP32，并把项目文件夹位置设为 `examples/arduino/`（或将其中的 `libraries/` 复制到自己的项目文件夹）。选择 `ESP32S3 Dev Module` 并设置下列非默认选项后，打开 `04_SD_Card.ino` 上传；串口监视器使用 115200 波特率。

| 工具菜单 | 取值 |
| --- | --- |
| USB CDC On Boot | Enabled |
| Flash Size | 16MB (128Mb) |
| Partition Scheme | 16M Flash (3MB APP/9.9MB FATFS) |
| PSRAM | OPI PSRAM |

## 预期现象

挂载成功后，串口输出卡信息和容量。

## 常见问题

默认 SPI 路径挂载失败时不格式化；切换到代码中的 SDMMC 路径后，挂载失败会触发格式化。
