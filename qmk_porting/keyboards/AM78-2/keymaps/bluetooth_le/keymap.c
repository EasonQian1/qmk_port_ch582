/*
Copyright 2022 OctopusZ <https://github.com/OctopusZ>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define BLE0 BLE_SLOT0
#define BLE1 BLE_SLOT1
#define BLE2 BLE_SLOT2
#define BLE3 BLE_SLOT3
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_all(/* 0: qwerty */
                      KC_ESC,  KC_F1,  KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,  KC_F11,  KC_F12, KC_MUTE,
                      KC_GRV,  KC_1,   KC_2,    KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0,    KC_MINS, KC_EQL,  KC_BSPC,KC_PGUP,
                      KC_TAB,  KC_Q,   KC_W,    KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,KC_PGDN,
                      KC_CAPS, KC_A,   KC_S,    KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN, KC_QUOT, KC_ENTER, KC_DEL, 
                      KC_LSFT, KC_Z,   KC_X,    KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  KC_UP,   MO(1),
                      KC_LCTL, KC_LGUI, KC_LALT,                     KC_SPC,                KC_RALT, KC_RCTL, KC_LEFT,  KC_DOWN, KC_RGHT  	
                     ),
    [1] = LAYOUT_all(/* 1: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,KC_HOME,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,KC_SCRL,
                     MO(9),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, KC_INS,
                     _______, _______, _______, KC_CALC, _______, _______, _______, _______, _______, _______, _______, KC_MPLY, KC_VOLU, _______,
                     _______, _______, _______, _______,                                     _______,          _______, KC_MPRV, KC_VOLD, KC_MNXT),
    [2] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [3] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [4] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [5] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [6] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [7] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [8] = LAYOUT_all(/* 2: fn */
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    [9] = LAYOUT_all(/* 2: fn */
                     _______, BLE0,    BLE1,     BLE2,    BLE3,   USB_MODE, _______, _______, _______, _______, _______, _______, BLE_ALL_CLEAR, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,_______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______,                                     _______,          _______, _______, _______, _______),
    // clang-format on
};

#ifdef ENCODER_MAP_ENABLE

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [7] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [8] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [9] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};

#endif