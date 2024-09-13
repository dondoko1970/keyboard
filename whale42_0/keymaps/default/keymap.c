// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
     LT(2,KC_TAB),     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSPC,
     KC_LSFT,      KC_A,      KC_S,      KC_Z,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_MINS,      KC_ENT,
     KC_LCTL,      KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,      KC_DOT,      KC_SLSH,      KC_RSFT,
     KC_LGUI,      LALT_T(KC_F17),      MO(1),      KC_SPC,      MO(2),      LT(3,KC_ESC)
    ),

    [1] = LAYOUT(
     KC_TRNS,      LSFT(KC_1),      LSFT(KC_2),      LSFT(KC_3),      LSFT(KC_4),      LSFT(KC_5),      LSFT(KC_6),      LSFT(KC_7),      LSFT(KC_8),      LSFT(KC_9),      LSFT(KC_0),      KC_DEL,
     KC_TRNS,      KC_GRV,      KC_EQL,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_QUOT,      LSFT(KC_QUOT),      KC_SCLN,      LSFT(KC_SCLN),      KC_SLSH,      LSFT(KC_SLSH),
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_LBRC,      KC_RBRC,      KC_BSLS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_ESC,      MO(3),      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
    ),  

    [2] = LAYOUT(
     KC_TRNS,      KC_PSLS,      KC_PAST,      KC_7,      KC_8,      KC_9,      KC_EQL,      KC_HOME,      KC_UP,      KC_PGUP,      KC_F19,      KC_TRNS,
     KC_TRNS,      KC_MINS,      KC_PLUS,      KC_4,      KC_5,      KC_6,      KC_COMM,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_F20,      KC_TRNS,
     KC_TRNS,      KC_F15,      KC_0,      KC_1,      KC_2,      KC_3,      KC_DOT,      KC_END,      KC_DOWN,      KC_PGDN,      KC_MUTE,      KC_TRNS,
     KC_ESC,      KC_TRNS,      KC_F18,      KC_TRNS,      KC_TRNS,      KC_LCTL
    ),

    [3] = LAYOUT(
     KC_CAPS,      KC_TRNS,      KC_F12,      KC_F7,      KC_F8,      KC_F9,      KC_SCRL,      KC_PSCR,      KC_VOLU,      KC_NO,      KC_INS,      RGB_SPI,
     KC_TRNS,      KC_TRNS,      KC_F11,      KC_F4,      KC_F5,      KC_F6,      KC_TRNS,      KC_MPLY,      KC_MUTE,      RGB_VAI,      RGB_MOD,      RGB_TOG,
     KC_TRNS,      KC_TRNS,      KC_F10,      KC_F1,      KC_F2,      KC_F3,      KC_TRNS,      KC_APP,      KC_VOLD,      RGB_VAD,      RGB_RMOD,      RGB_SPD,
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
    )
};
