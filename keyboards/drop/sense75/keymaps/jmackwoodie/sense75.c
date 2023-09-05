// Copyright 2022 Massdrop, Inc.
// SPDX-License-Identifier: GPL-2.0-or-later
#include "rgb_matrix.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {

// ADDED INDEX NUMBERS FOR LEDS

// top underglow sd2-sd18
    { 0, B_2,  A_2,  C_2  }, // 0 - TopUnderglow1
    { 0, B_3,  A_3,  C_3  }, // 1 - TopUnderglow2
    { 0, B_5,  A_5,  C_5  }, // 2 - TopUnderglow3
    { 0, B_6,  A_6,  C_6  }, // 3 - TopUnderglow4
    { 0, B_7,  A_7,  C_7  }, // 4 - TopUnderglow5
    { 0, B_9,  A_9,  C_9  }, // 5 - TopUnderglow6
    { 0, B_10, A_10, C_10 }, // 6 - TopUnderglow7
    { 0, B_12, A_12, C_12 }, // 7 - TopUnderglow8
    { 0, B_13, A_13, C_13 }, // 8 - TopUnderglow9
    { 0, B_14, A_14, C_14 }, // 9 - TopUnderglow10
    { 0, B_16, A_16, C_16 }, // 10 - TopUnderglow11
    { 1, B_12, A_12, C_12 }, // 11 - TopUnderglow12

// sd1 + function + sd18
    { 0, B_1,  A_1,  C_1  }, // 12 - LeftUnderglow1
    { 0, E_2,  D_2,  F_2  }, // 13 - Esc
    { 0, E_3,  D_3,  F_3  }, // 14 - F1
    { 0, E_4,  D_4,  F_4  }, // 15 - F2
    { 0, E_5,  D_5,  F_5  }, // 16 - F3
    { 0, E_6,  D_6,  F_6  }, // 17 - F4
    { 0, E_7,  D_7,  F_7  }, // 18 - F5
    { 0, E_8,  D_8,  F_8  }, // 19 - F6
    { 0, E_9,  D_9,  F_9  }, // 20 - F7
    { 0, E_10, D_10, F_10 }, // 21 - F8
    { 0, E_11, D_11, F_11 }, // 22 - F9
    { 0, E_12, D_12, F_12 }, // 23 - F10
    { 0, E_13, D_13, F_13 }, // 24 - F11
    { 0, E_14, D_14, F_14 }, // 25 - F12
    { 0, E_15, D_15, F_15 }, // 26 - Print
    // <enc gap>
    { 1, B_13, A_13, C_13 }, // 27 - RightUnderglow1

// sd45 + num + sd21
    { 0, H_1,  G_1,  I_1  }, // 28 - LeftUnderglow2
    { 0, H_2,  G_2,  I_2  }, // 29 - ~
    { 0, H_3,  G_3,  I_3  }, // 30 - 1
    { 0, H_4,  G_4,  I_4  }, // 31 - 2
    { 0, H_5,  G_5,  I_5  }, // 32 - 3
    { 0, H_6,  G_6,  I_6  }, // 33 - 4
    { 0, H_7,  G_7,  I_7  }, // 34 - 5
    { 0, H_8,  G_8,  I_8  }, // 35 - 6
    { 0, H_9,  G_9,  I_9  }, // 36 - 7
    { 0, H_10, G_10, I_10 }, // 37 - 8
    { 0, H_11, G_11, I_11 }, // 38 - 9
    { 0, H_12, G_12, I_12 }, // 39 - 0
    { 0, H_13, G_13, I_13 }, // 40 - -
    { 0, H_14, G_14, I_14 }, // 41 - =
    { 0, H_15, G_15, I_15 }, // 42 - Backspace
    { 0, H_16, G_16, I_16 }, // 43 - Delete
    { 1, B_15, A_15, C_15 }, // 44 - RightUnderglow2

// 44+ qwer 22
    { 0, K_1,  J_1,  L_1  }, // 45 - LeftUnderglow3
    { 0, K_2,  J_2,  L_2  }, // 46 - Tab
    { 0, K_3,  J_3,  L_3  }, // 47 - Q
    { 0, K_4,  J_4,  L_4  }, // 48 - W
    { 0, K_5,  J_5,  L_5  }, // 49 - E
    { 0, K_6,  J_6,  L_6  }, // 50 - R
    { 0, K_7,  J_7,  L_7  }, // 51 - T
    { 0, K_8,  J_8,  L_8  }, // 52 - Y
    { 0, K_9,  J_9,  L_9  }, // 53 - U
    { 0, K_10, J_10, L_10 }, // 54 - I
    { 0, K_11, J_11, L_11 }, // 55 - O
    { 0, K_12, J_12, L_12 }, // 56 - P
    { 0, K_13, J_13, L_13 }, // 57 - [
    { 0, K_14, J_14, L_14 }, // 58 - ]
    { 0, K_15, J_15, L_15 }, // 59 - \
    { 0, K_16, J_16, L_16 }, // 60 - PgUp
    { 1, B_16, A_16, C_16 }, // 61 - RightUnderglow3

// asdf
    { 1, B_2,  A_2,  C_2  }, // 62 - Caps
    { 1, B_3,  A_3,  C_3  }, // 63 - A
    { 1, B_4,  A_4,  C_4  }, // 64 - S
    { 1, B_5,  A_5,  C_5  }, // 65 - D
    { 1, B_6,  A_6,  C_6  }, // 66 - F
    { 1, B_7,  A_7,  C_7  }, // 67 - G
    { 1, B_8,  A_8,  C_8  }, // 68 - H
    { 1, B_9,  A_9,  C_9  }, // 69 - J
    { 1, B_10, A_10, C_10 }, // 70 - K
    { 1, B_11, A_11, C_11 }, // 71 - L
    { 1, E_12, D_12, F_12 }, // 72 - ;
    { 1, E_13, D_13, F_13 }, // 73 - "
    { 1, E_14, D_14, F_14 }, // 74 - Enter
    { 1, H_15, G_15, I_15 }, // 75 - PgDn

// 43 + zxcv + 23
    { 1, B_1,  A_1,  C_1  }, // 76 - LeftUnderglow4
    { 1, E_2,  D_2,  F_2  }, // 77 - LShift
    { 1, E_3,  D_3,  F_3  }, // 78 - Z
    { 1, E_4,  D_4,  F_4  }, // 79 - X
    { 1, E_5,  D_5,  F_5  }, // 80 - C
    { 1, E_6,  D_6,  F_6  }, // 81 - V
    { 1, E_7,  D_7,  F_7  }, // 82 - B
    { 1, E_8,  D_8,  F_8  }, // 83 - N
    { 1, E_9,  D_9,  F_9  }, // 84 - M
    { 1, E_10, D_10, F_10 }, // 85 - ,
    { 1, E_11, D_11, F_11 }, // 86 - .
    { 1, H_12, G_12, I_12 }, // 87 - /
    { 1, H_13, G_13, I_13 }, // 88 - RShift
    { 1, H_14, G_14, I_14 }, // 89 - Up
    { 1, E_15, D_15, F_15 }, // 90 - RightUnderglow4

// 41 + mods + 24
    { 1, H_1,  G_1,  I_1  }, // 91 - LeftUnderglow5
    { 1, H_2,  G_2,  I_2  }, // 92 - LCtrl
    { 1, H_3,  G_3,  I_3  }, // 93 - LGui
    { 1, H_4,  G_4,  I_4  }, // 94 - LAlt
    { 1, H_5,  G_5,  I_5  }, // 95 - Space
    { 1, H_6,  G_6,  I_6  }, // 96 - RAlt
    { 1, H_7,  G_7,  I_7  }, // 97 - Fn
    { 1, H_8,  G_8,  I_8  }, // 98 - RCtrl
    { 1, H_9,  G_9,  I_9  }, // 99 - Left
    { 1, H_10, G_10, I_10 }, // 100 - Down
    { 1, H_11, G_11, I_11 }, // 101 - Right
    { 1, E_16, D_16, F_16 }, // 102 - RightUnderglow5

// bottom underglow 24 - 39
    { 1, K_2,  J_2,  L_2  }, // 103 - BottomUnderglow1
    { 1, K_3,  J_3,  L_3  }, // 104 - BottomUnderglow2
    { 1, K_4,  J_4,  L_4  }, // 105 - BottomUnderglow3
    { 1, K_6,  J_6,  L_6  }, // 106 - BottomUnderglow4
    { 1, K_10, J_10, L_10 }, // 107 - BottomUnderglow5
    { 1, K_13, J_13, L_13 }, // 108 - BottomUnderglow6
    { 1, K_15, J_15, L_15 }, // 109 - BottomUnderglow7
    { 1, H_16, G_16, I_16 } // 110 - BottomUnderglow8
};
#endif
