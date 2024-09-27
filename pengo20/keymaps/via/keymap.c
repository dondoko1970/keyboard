// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
	QMKFENRIR= SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMKFENRIR:
        if (record->event.pressed) {
            // when pressed
            SEND_STRING(SS_LCTL(SS_LSFT("a")));
        } else {
            // when released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM mycomboCE[] = {KC_C, KC_E, COMBO_END};
const uint16_t PROGMEM mycomboAS[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM mycomboCA[] = {KC_C, KC_A, COMBO_END};
const uint16_t PROGMEM mycomboCS[] = {KC_C, KC_S, COMBO_END};
const uint16_t PROGMEM mycomboSD[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM mycomboOP[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM mycomboNM[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM mycomboHN[] = {KC_H, KC_N, COMBO_END};
//const uint16_t PROGMEM mycomboLMINUS[] = {KC_M, KC_L, COMBO_END};

combo_t key_combos[] = {
    COMBO(mycomboCE, KC_LSFT),
    COMBO(mycomboAS, KC_LCTL),
	COMBO(mycomboCA, C_S_T(KC_NO)),
    COMBO(mycomboCS, QMKFENRIR),
	COMBO(mycomboSD, OSL(1)),
	COMBO(mycomboHN, KC_F23),
	COMBO(mycomboNM, OSL(3)),
    COMBO(mycomboOP, MO(6))
//	COMBO(mycomboLMINUS, KC_ENT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
		KC_C,      KC_E,      KC_R,      KC_T,
		KC_A,      KC_S,      KC_D,      KC_G,
		KC_U,      KC_I,      KC_O,      KC_P,
		KC_H,      KC_N,      KC_M,      KC_L,
		MO(5),     LT(2,KC_F17)      ,LT(4,KC_SPC),      MO(2)
    ),

    [1] = LAYOUT(
		S(KC_1),      S(KC_2),      S(KC_3),      S(KC_4),
		KC_LSFT,      KC_GRV,      KC_EQL,      S(KC_5),
		S(KC_6),      S(KC_7),      S(KC_9),      S(KC_0),
		KC_QUOT,      S(KC_QUOT),      KC_SCLN,      S(KC_SCLN),
		KC_TRNS,      KC_TAB,      KC_TRNS,      KC_TRNS
    ),  

    [2] = LAYOUT(
		KC_ESC,      KC_DEL,      KC_HOME,      KC_END,  
		KC_TAB,      KC_LGUI,      KC_LALT,      KC_LSFT,
		KC_PGUP,      KC_UP,      KC_PGDN,      KC_BSPC, 
		KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_ENT,
		KC_LCTL,      KC_F18,     KC_NO,      KC_RCTL
    ),

    [3] = LAYOUT(
		KC_F1,      KC_F2,      KC_F3,          KC_F4,
		KC_CAPS,    KC_LSFT,    KC_SCRL,        KC_PSCR,
		KC_F9,      KC_F10,     KC_F11,         KC_F12,
		KC_F5,      KC_F6,      KC_F7,          KC_F8,
		KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS
    ),
    [4] = LAYOUT(
		KC_Q,      KC_W,      KC_NO,      KC_F,
		KC_Z,      KC_X,      KC_V,      KC_B,
		KC_Y,      KC_COMM,      KC_DOT,      KC_SLSH, 
		KC_J,      KC_K,      KC_MINS,      S(KC_SLSH),
		KC_TRNS,      KC_LSFT,      KC_TRNS,      KC_TRNS
    ),
	[5] = LAYOUT(
		S(KC_EQL),      KC_4,      KC_5,      KC_6,
		KC_0,      KC_1,      KC_2,      KC_3,     
		KC_MINS,      S(KC_8),      KC_SLSH,      KC_LBRC,
		KC_7,      KC_8,      KC_9,      KC_RBRC,  
		KC_TRNS,      KC_TRNS,       KC_TRNS,      KC_TRNS
	),
	[6] = LAYOUT(
		RGB_VAI,      RGB_MOD,      RGB_SPI,      KC_TRNS,  
		RGB_VAD,      RGB_RMOD,      RGB_SPD,      RGB_TOG,
		KC_MPLY,      KC_VOLU,      KC_TRNS,      KC_TRNS, 
		KC_MUTE,      KC_VOLD,      KC_TRNS,      KC_NO,   
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
	),
	[7] = LAYOUT(
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
		KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS
	)
};



/*
   KC_C,      KC_E,      KC_R,      KC_T,
   KC_U,      KC_I,      KC_O,      KC_P,
   KC_A,      KC_S,      KC_D,      KC_G,
   KC_H,      KC_N,      KC_M,      KC_L,
   MO(5),     LT(2,KC_F17)      ,LT(4,KC_SPC),      MO(2)
*/

