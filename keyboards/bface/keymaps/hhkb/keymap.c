/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

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
#define BASEMAC 0
#define MACMODE 3
#define BASEHHKB 2
#define HHKBMODE 5
#define BASELITE 1
#define HHKBLITE 4
#include QMK_KEYBOARD_H
//mac mode
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASEMAC] = LAYOUT(//mac hhkb
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,          KC_BSPC, 
        KC_LCTL,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,                  KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,       MO(MACMODE),
            KC_LALT,  KC_LGUI,                     KC_SPC,                            KC_RGUI,KC_RALT
    ),
    [BASELITE] = LAYOUT(//hhkb lite with backspace
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,          KC_BSPC, 
        KC_LCTL,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,                  KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,       MO(HHKBLITE),
            KC_LALT,  KC_LGUI,                     KC_SPC,                            KC_RGUI,KC_RALT
    ),
    [BASEHHKB] = LAYOUT(//hhkb
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,  KC_BSLS,  KC_GRV,
        KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,          KC_DEL, 
        KC_LCTL,  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,                  KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,       MO(HHKBMODE),
            KC_LALT,  KC_LGUI,                     KC_SPC,                            KC_RGUI,KC_RALT
    ),
    [MACMODE] = LAYOUT(//hhkb mac
        KC_POWER,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,  KC_INS,   KC_DEL,
        KC_CAPS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_UP,   KC_RBRC,          KC_NUMLOCK, 
        KC_TRNS,  KC__VOLDOWN,KC__VOLUP,KC__MUTE,KC_F20,KC_TRNS,KC_PAST,KC_PSLS,KC_HOME,KC_PGUP,KC_LEFT,KC_RGHT,                  KC_PENT,
        KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PPLS,KC_PMNS,KC_END,KC_PGDN,KC_DOWN,           KC_TRNS,       KC_TRNS,
            KC_TRNS,  KC_TRNS,                     KC_TRNS,                            KC_TRNS,KC_TRNS
    ),
    [HHKBLITE] = LAYOUT(//hhkb lite backspace
        KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,  KC_INS,   KC_DEL,
        KC_CAPS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_UP,   KC_RBRC,          KC_BSPC, 
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PAST,KC_PSLS,KC_HOME,KC_PGUP,KC_LEFT,KC_RGHT,                  KC_PENT,
        KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PPLS,KC_PMNS,KC_END,KC_PGDN,KC_DOWN,           KC_TRNS,       KC_TRNS,
            KC_TRNS,  KC_TRNS,                     KC_TRNS,                            KC_TRNS,KC_TRNS
    ),
    [HHKBMODE] = LAYOUT(//hhkb
        KC_TRNS,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,  KC_INS,   KC_DEL,
        KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_SLCK,KC_PAUS,KC_UP,   KC_RBRC,          KC_BSPC, 
        KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_HOME,KC_PGUP,KC_LEFT,KC_RGHT,                  KC_TRNS,
        KC_TRNS,   KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_END,KC_PGDN,KC_DOWN,           KC_TRNS,       KC_TRNS,
            KC_TRNS,  KC_TRNS,                     KC_TRNS,                            KC_STOP,KC_TRNS
    ),
};
