// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    QMKFENRIR = SAFE_RANGE
};
 
int glowMode = 0;


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
    	
    case BL_TOGG:
    	if (record->event.pressed) {
    	    glowMode = (glowMode+1) % 4;
    	}
	    break;

    }
    
    return true;
};

const uint16_t PROGMEM mycombo1[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM mycombo2[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM mycombo3[] = {KC_Z, KC_A, COMBO_END};
const uint16_t PROGMEM mycombo4[] = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM mycombo5[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM mycombo6[] = {KC_L, KC_BSPC, COMBO_END};
combo_t key_combos[] = {
    COMBO(mycombo1, KC_LCTL),
    COMBO(mycombo2, KC_LSFT),
	COMBO(mycombo3, C_S_T(KC_NO)),
	COMBO(mycombo4, QMKFENRIR),
	COMBO(mycombo5, KC_TAB),
	COMBO(mycombo6, KC_RSFT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,   
     KC_A,      KC_S,      KC_D,      KC_F,      KC_G,   
     KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,   
     KC_LGUI,      MT(MOD_LALT,KC_F17),      MO(1),      
     KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,   
     KC_H,      KC_J,      KC_K,      KC_L,      KC_BSPC,
     KC_N,      KC_M,      KC_COMM,      KC_DOT,      LT(4,KC_ENT),
     KC_SPC,      MO(2),      LT(3,KC_ESC)
     ),

    [1] = LAYOUT(
     KC_TAB,      S(KC_2),      S(KC_3),      S(KC_4),      S(KC_5),    
     KC_LSFT,      KC_GRV,      KC_EQL,      KC_SLSH,      KC_MINS,     
     KC_LCTL,      S(KC_1),      KC_LCTL,      KC_LALT,      KC_SPC,    
     KC_ESC,      MO(3),      KC_TRNS,
     S(KC_6),      S(KC_7),      S(KC_8),      S(KC_9),      S(KC_0),          
     KC_QUOT,      S(KC_QUOT),      KC_SCLN,      S(KC_SCLN),      KC_TRNS,     
     KC_LBRC,      KC_RBRC,      KC_BSLS,      S(KC_SLSH),      KC_RSFT,       
     KC_TRNS,      KC_TRNS,      KC_TRNS
     ),

    [2] = LAYOUT(
     KC_TAB,      KC_PAST,      KC_7,      KC_8,      KC_9,    
     KC_LSFT,      S(KC_EQL),      KC_4,      KC_5,      KC_6, 
     KC_LCTL,      KC_0,      KC_1,      KC_2,      KC_3,      
     KC_TRNS,      KC_TRNS,      KC_F18,
     KC_EQL,      KC_HOME,      KC_UP,      KC_PGUP,      DF(0),
     KC_COMM,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_TRNS, 
     KC_DOT,      LT(4,KC_END),      KC_DOWN,      KC_PGDN,      KC_LSFT, 
     KC_TRNS,      KC_TRNS,      KC_ESC
     ),

    [3] = LAYOUT(
     KC_CAPS,      KC_F12,      KC_F7,      KC_F8,      KC_F9,
     KC_LSFT,      KC_F11,      KC_F4,      KC_F5,      KC_F6,
     KC_LCTL,      KC_F10,      KC_F1,      KC_F2,      KC_F3,
     KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_SCRL,      KC_PSCR,      KC_VOLU,      KC_F19,      KC_F20, 
     KC_TRNS,      KC_MPLY,      KC_MUTE,      KC_F21,      KC_TRNS,
     KC_TRNS,      KC_APP,      KC_VOLD,      KC_TRNS,      KC_TRNS,
     KC_TRNS,      KC_TRNS,      KC_TRNS
     ),

    [4] = LAYOUT(
     KC_PSLS,      KC_PAST,      KC_TRNS,      KC_TRNS,      RGB_SPI,      
     KC_MINS,      S(KC_EQL),      RGB_VAI,      RGB_MOD,      RGB_TOG,    
     KC_F15,      KC_TRNS,      RGB_VAD,      RGB_RMOD,      RGB_SPD,      
     KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_TAB,      TG(5),      KC_TRNS,      KC_TRNS,      KC_INS,     
     KC_LSFT,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_DEL, 
     KC_LCTL,      KC_TRNS,      KC_TRNS,      KC_LCTL,      KC_TRNS, 
     KC_TRNS,      KC_TRNS,      KC_TRNS
     ),

    [5] = LAYOUT(
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_TRNS,      KC_TRNS,      KC_TRNS,
     KC_TRNS,      KC_7,      KC_8,      KC_9,      TG(5),     
     KC_TRNS,      KC_4,      KC_5,      KC_6,      KC_TRNS,
     KC_0,      KC_1,      KC_2,      KC_3,      MO(2),     
     KC_TRNS,      LT(1,KC_SPC),      KC_TRNS
     )
};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

	// glowMode‚Ì’l‚É‰ž‚¶‚Äunderglow(flag= 2)‚©backlight(flag= 4)‚ðŒõ‚ç‚¹‚é
	HSV hsv = {0, 0, 0};
    RGB rgb = hsv_to_rgb(hsv);
    for (uint8_t i = led_min; i < led_max; i++) {
    	if (glowMode & 2) {
            if (HAS_FLAGS(g_led_config.flags[i], 0x04)) {
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
            }
    	}
    	if (glowMode & 1) {
            if (HAS_FLAGS(g_led_config.flags[i], 0x02)) {
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
            }
    	}
    }
    return false;
}


