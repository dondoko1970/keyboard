// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
     KC_Q,    KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      
     KC_A,    KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      
     KC_Z,    KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,      KC_DOT, 
     KC_LGUI,      MT(MOD_LALT,KC_F17),      MO(1),      KC_SPC,      MO(2),      LT(3,KC_ESC),    LT(4,KC_ENT),      KC_BSPC,        KC_P
    ),

    [1] = LAYOUT(
     S(KC_1),      S(KC_2),      S(KC_3),      S(KC_4),      S(KC_5),      S(KC_6),      S(KC_7),      S(KC_8),      S(KC_9),        
     KC_LSFT,      KC_GRV,      KC_EQL,      KC_TRNS,      KC_MINS,      KC_QUOT,      S(KC_QUOT),      KC_SCLN,      S(KC_SCLN),          
     KC_LCTL,      KC_TAB,      KC_TRNS,      KC_TRNS,      KC_SPC,      KC_LBRC,      KC_RBRC,      KC_BSLS,      S(KC_SLSH),          
     KC_ESC,      MO(3),      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,       KC_RSFT,   KC_SLSH,         S(KC_0)
    ),  

    [2] = LAYOUT(
     KC_TAB,      KC_PAST,      KC_7,      KC_8,      KC_9,      KC_EQL,      KC_HOME,      KC_UP,      KC_PGUP,
     KC_LSFT,      S(KC_EQL),      KC_4,      KC_5,      KC_6,      KC_COMM,      KC_LEFT,      KC_DOWN,      KC_RGHT,
     KC_LCTL,      KC_0,      KC_1,      KC_2,      KC_3,      KC_DOT,      LT(4,KC_END),      KC_DOWN,      KC_PGDN,      
     KC_TRNS,      KC_TRNS,      KC_F18,      KC_TRNS,      KC_TRNS,      KC_ESC,     KC_RSFT,       KC_TRNS,      KC_TRNS,      
    ),

    [3] = LAYOUT(
     KC_CAPS,      KC_F12,      KC_F7,      KC_F8,      KC_F9,      KC_SLCK,      KC_PSCR,      KC_VOLU,      KC_TRNS,
     KC_LSFT,      KC_F11,      KC_F4,      KC_F5,      KC_F6,      KC_TRNS,      KC_MPLY,      KC_MUTE,      KC_TRNS,
     KC_LCTL,      KC_F10,      KC_F1,      KC_F2,      KC_F3,      KC_TRNS,      KC_APP,      KC_VOLD,      KC_TRNS, 
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      MACRO(0),      KC_F20,       KC_F19, 
    ),

    [4] = LAYOUT(
     KC_PSLS,      KC_PAST,      KC_TRNS,      KC_TRNS,      RGB_SPI,      KC_TAB,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_MINS,      S(KC_EQL),      RGB_VAI,      RGB_MOD,      RGB_TOG,      KC_LSFT,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_F15,      KC_TRNS,      RGB_VAD,      RGB_RMOD,      RGB_SPD,      KC_LCTL,      KC_TRNS,      KC_TRNS,      KC_LCTL,
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_NO,         KC_DEL,      KC_INS,   
    ),

    [5] = LAYOUT(
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
    )
};
