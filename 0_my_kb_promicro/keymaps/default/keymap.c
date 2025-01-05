// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Keycodes list: https://docs.qmk.fm/keycodes
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// clang-format off
    [0] = LAYOUT(
      KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_P7,   KC_P8,   KC_P9,
      KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
      KC_P1,   KC_P2,   KC_P3,
               KC_P0,   MO(1),   KC_PENT
    ),

    [1] = LAYOUT(
      _______, _______, _______, _______,
      KC_HOME, KC_UP,   KC_PGUP,
      KC_LEFT, _______, KC_RGHT, _______,
      KC_END,  KC_DOWN, KC_PGDN,
               KC_INS,  _______, KC_DEL
    )};
// clang-format on
