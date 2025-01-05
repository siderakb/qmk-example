# QMK Example

一個簡單的 QMK 示例。可以與我的 [QMK 教學](https://ziteh.github.io/posts/diyqmkkeyboard-edit-qmk/)一同使用。

包含 Pro Micro 8MHz/3.3v （ATmega32U4）和 RP2040。

## 用法

準備好 [QMK 環境](https://docs.qmk.fm/#/newbs_getting_started)後，你可以將整個資料夾（例如 `0_my_kb_rp2040`）複製到你的 QMK 鍵盤目錄下（預設是`C:\Users\<USERNAME>\qmk_firmware\keyboards\`）。

```text
C:\Users\<USERNAME>\qmk_firmware\keyboards\
 ├── 0_my_kb_rp2040\
 │    ├── keymaps\default\
 │    │    └── keymap.c
 │    ├── config.h
 │    ├── keyboard.json
 │    └── readme.md
 ├── 0_sixty
 ├── 0xc7
 ├── 1k
 └── ...
```

開啓 QMK MSYS 編譯：

```bash
qmk compile -kb 0_my_kb_rp2040 -km default
```

完成後燒錄檔應該會在 `C:\Users\<USERNAME>\qmk_firmware\.build\0_my_kb_rp2040_default.uf2`

## 版本

此範例在 QMK [`0.27.5`](https://github.com/qmk/qmk_firmware/releases/tag/0.27.5) 測試成功。
