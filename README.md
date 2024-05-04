# QMK Example

一個簡單的 QMK 示例。可以與我的 [QMK 教學](https://ziteh.github.io/posts/diyqmkkeyboard-edit-qmk/)一同使用。

使用 Pro Micro 8MHz/3.3v （ATmega32U4）。

## 用法

準備好 [QMK 環境](https://docs.qmk.fm/#/newbs_getting_started)後，你可以將整個 `mytestkb` 資料夾複製到你的 QMK 鍵盤目錄下（預設是`C:\Users\<USERNAME>\qmk_firmware\keyboards\`）。

```
C:\Users\<USERNAME>\qmk_firmware\keyboards\
 ├── mytestkb
 │    ├── keymaps\default\
 │    │    └── keymap.c
 │    ├── config.h
 │    ├── info.json
 │    ├── rules.mk
 │    └── readme.md
 ├── nack
 ├── navi60
 ├── neokeys
 └── ... ...
```

編譯：

```bash
qmk compile -kb mytetstkb -km default
```

完成後燒錄檔應該會在 `C:\Users\<USERNAME>\qmk_firmware\.build\mytestkb_default.hex`

## 版本

此範例在 QMK [`0.24.8`](https://github.com/qmk/qmk_firmware/releases/tag/0.24.8) 測試成功。
