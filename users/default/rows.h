#pragma once

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)

#define ___________________BLANK___________________                 _______, _______, _______, _______, _______

#define _________________DVORAK_L1_________________                 KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y
#define _________________DVORAK_L2_________________                 KC_A,    KC_O,    KC_E,    KC_U,    KC_I
#define _________________DVORAK_L3_________________                 KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X
#define ______________DVORAK_L2_MODS_______________                 LSFT_T(KC_A), LCTL_T(KC_O), LALT_T(KC_E), LGUI_T(KC_U), KC_I
#define ______________DVORAK_L3_SHIFT______________                 LSFT_T(KC_SCLN), KC_Q,    KC_J,    KC_K,    KC_X

#define _________________DVORAK_R1_________________                 KC_F,    KC_G,    KC_C,    KC_R,    KC_L
#define _________________DVORAK_R2_________________                 KC_D,    KC_H,    KC_T,    KC_N,    KC_S
#define _________________DVORAK_R3_________________                 KC_B,    KC_M,    KC_W,    KC_V,    KC_Z
#define ______________DVORAK_R2_MODS_______________                 KC_D,    LGUI_T(KC_H), LALT_T(KC_T), LCTL_T(KC_N), LSFT_T(KC_S)
#define ______________DVORAK_R3_SHIFT______________                 KC_B,    KC_M,    KC_W,    KC_V,    RSFT_T(KC_Z)

#define _________________QWERTY_L1_________________                 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________                 KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define _________________QWERTY_L3_________________                 KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________                 KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________                 KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________                 KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define ________________NUMBER_LEFT________________                 KC_1,    KC_2,    KC_3,    KC_4,    KC_5
#define ________________NUMBER_RIGHT_______________                 KC_6,    KC_7,    KC_8,    KC_9,    KC_0
#define ________________SYMBOL_LEFT________________                 KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC
#define ________________SYMBOL_RIGHT_______________                 KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN

#define __________________ARROWS___________________                 _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT

#define _________________FUNC_LEFT_________________                 KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5
#define _________________FUNC_RIGHT________________                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10

#define _________________RAISE_L1__________________                 ________________NUMBER_LEFT________________
#define _________________RAISE_L2__________________                 _________________FUNC_LEFT_________________
#define _________________RAISE_L3__________________                 _________________FUNC_RIGHT________________

#define _________________RAISE_R1__________________                 ________________NUMBER_RIGHT_______________
#define _________________RAISE_R2__________________                 __________________ARROWS___________________
#define _________________RAISE_R3__________________                 _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END

#define _________________LOWER_L1__________________                 ________________SYMBOL_LEFT________________
#define _________________LOWER_L2__________________                 ___________________BLANK___________________
#define _________________LOWER_L3__________________                 ___________________BLANK___________________

#define _________________LOWER_R1__________________                 ________________SYMBOL_RIGHT_______________
#define _________________LOWER_R2__________________                 KC_PLUS, KC_MINS, KC_SLSH, KC_LCBR, KC_RCBR
#define _________________LOWER_R3__________________                 KC_EQL,  KC_BSLS, KC_PIPE, KC_LBRC, KC_RBRC

/*  Spacetime layer template:
 *  [_LAYER] = LAYOUT(
 *    _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
 *    _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
 *    _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
 *    _______,                            _______, _______, _______,   _______, _______, _______,                            _______
 *  ),
 */
