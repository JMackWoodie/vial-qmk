/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include QMK_KEYBOARD_H
#include "keychron_common.h"

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

// clang-format off

enum layers{
    BASE,
    MOUSE,
    RGB,
    FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_91_ansi(
        KC_MUTE,           KC_ESC,             KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_PSCR,    KC_DEL,     KC_MUTE,
        MC_1,              KC_GRV,             KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,                KC_DEL,
        MC_2,              KC_TAB,             KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,                KC_PGUP,
        MC_3,              LT(MOUSE,KC_CAPS),  KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,                 KC_ENT,                 KC_PGDN,
        MC_4,              KC_LSFT,                        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,                 KC_RSFT,    KC_UP,
        MC_5,              KC_LCTL,            KC_LGUI,    KC_LALT,    MO(FN),                KC_SPC,                              KC_SPC,                  MT(KC_RALT,KC_APP),MO(RGB),KC_RCTL,  KC_LEFT,    KC_DOWN,    KC_RGHT),

    [MOUSE] = LAYOUT_91_ansi(
        _______,           _______,         _______,       _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,   _______,   _______,
        _______,           _______,         _______,       _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,              _______,
        _______,           _______,         _______,       _______,        _______,    _______,    KC_WH_U,    KC_BTN1,    KC_MS_U,    KC_BTN2,    _______,    _______,   _______,   _______,   _______,              KC_HOME,
        _______,           _______,         LSA(KC_Z),     LSA(KC_X),      _______,    _______,    KC_WH_D,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_BTN1,    _______,   _______,              _______,              KC_END,
        _______,           _______,         C(G(KC_LEFT)), C(G(KC_RIGHT)), _______,    _______,    _______,    KC_BTN5,    KC_BTN3,    KC_BTN4,    _______,   _______,              _______,   _______,
        _______,           _______,         _______,       _______,        MO(FN),                _______,                              _______,                 _______,    MO(RGB),    _______,   _______,   _______,   _______),

    [RGB] = LAYOUT_91_ansi(
        _______,           _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   CG_TOGG,   _______,   _______,   _______,
        _______,           _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,              _______,
        _______,           RGB_TOG,            RGB_VAI,    RGB_SPI,    RGB_HUI,    RGB_SAI,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,              _______,
        _______,           RGB_MOD,            RGB_VAD,    RGB_SPD,    RGB_HUD,    RGB_SAD,    _______,    _______,    _______,    _______,    _______,    _______,   _______,              _______,              _______,
        _______,           _______,                        RGB_M_P,    RGB_M_B,    RGB_M_R,    RGB_M_SW,   _______,    _______,    _______,    _______,    _______,   _______,              _______,   _______,
        _______,           _______,            _______,    _______,    _______,                _______,                             _______,                 _______,    _______,   _______,   _______,   _______,   _______),

    [FN] = LAYOUT_91_ansi(
        _______,           KC_BRID,            KC_BRIU,    KC_TASK,    KC_FLXP,    RGB_VAD,    RGB_VAI,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_MUTE,    KC_VOLD,   KC_VOLU,   QK_BOOT,   _______,   _______,   _______,
        _______,           _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,              _______,
        _______,           _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,   _______,   _______,              _______,
        _______,           _______,            _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,              _______,              _______,
        _______,           _______,                        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,              _______,   _______,
        _______,           _______,            _______,    _______,    _______,                _______,                             _______,                 _______,    _______,   _______,   _______,   _______,   _______),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE]  = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [MOUSE] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [RGB]   = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [FN]    = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) }
};
#endif // ENCODER_MAP_ENABLE

// clang-format on

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }

    if (!record->event.pressed) {
        switch (keycode) {
            case RGB_TOG:
                switch (rgb_matrix_get_flags()) {
                    case LED_FLAG_ALL:
                        rgb_matrix_set_flags(LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR);
                        break;
                    case (LED_FLAG_KEYLIGHT | LED_FLAG_MODIFIER | LED_FLAG_INDICATOR):
                        rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                        break;
                    case LED_FLAG_UNDERGLOW:
                        rgb_matrix_set_flags(LED_FLAG_NONE);
                        break;
                    default:
                        rgb_matrix_set_flags(LED_FLAG_ALL);
                        break;
                }
                return false;
        }
    }
    return true;
}
