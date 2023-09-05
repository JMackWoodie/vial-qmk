// Copyright 2022 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┬───┬───┬───┐┌───┐┌───┐
     * │Esc││F1 │F2 │F3 │F4 ││F5 │F6 │F7 │F8 ││F9 │F10│F11│F12││PSc││   │
     * └───┘└───┴───┴───┴───┘└───┴───┴───┴───┴└───┴───┴───┴───┘└───┘└───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐┌───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp││Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤├───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  ││PgU│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤├───┤
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter ││PgD│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┘└───┘
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ Shift│┌───┐
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┘│ ↑ │
     * │Ctrl│GUI │Alt │                        │Alt│GUI│Ctl│┌───┼───┼───┐
     * └────┴────┴────┴────────────────────────┴───┴───┴───┘│ ← │ ↓ │ → │
     *                                                      └───┴───┴───┘
     */
    [0] = LAYOUT(
               KC_ESC,     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MPLY,
               KC_GRV,     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
               KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        LT(1,KC_CAPS),     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
              KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,
              KC_LCTL,     KC_LGUI, KC_LALT,                            KC_SPC,                    MT(KC_RALT,KC_APP), MO(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        // Switching between Windows virtual desktops, switching hosts in Synergy, and Mouse Keys.
        _______,       _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,       _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,       _______,        _______, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______,          KC_HOME,
        _______,     LSA(KC_Z),      LSA(KC_X), _______, _______, _______, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, _______,          _______,          KC_END,
        _______, C(G(KC_LEFT)), C(G(KC_RIGHT)), _______, _______, _______, _______, KC_BTN5, KC_BTN3, KC_BTN4, _______, _______,                   _______,
        _______, _______, _______,                                         _______,                     _______, MO(3), _______, _______, _______, _______
    ),
    [2] = LAYOUT(
        // RGB Stuff
        _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, CG_TOGG,          _______,
        _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, RGB_TOG, RGB_VAI, RGB_SPI, RGB_HUI,  RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, RGB_MOD, RGB_VAD, RGB_SPD, RGB_HUD,  RGB_SAD, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                             _______,                            _______, _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [2] = { ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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
};

//Testing CAPS lock indicator

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        // CAPS LED Index 62
        // Bottom Left Underglow 103
        // See sense75.c for all index numbers
        rgb_matrix_set_color(62, RGB_GREEN);
        rgb_matrix_set_color(103, RGB_GREEN);
        }
    return false;
};

/*
//Turns underglow LEDs GREEN if CAPS is on
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_UNDERGLOW) {
                rgb_matrix_set_color(i, RGB_GREEN);
            }
        }
    }
    return false;
};
*/
