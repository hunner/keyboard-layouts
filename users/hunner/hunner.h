#pragma once

#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ortho_3x10_wrapper(...)       LAYOUT_ortho_3x10(__VA_ARGS__)

#define _BOW 0 // dvroak layer
#define _PORT 1 // left thumb
#define _STARBOARD 2 // right thumb
#define _AFT 3 // both thumbs

#define L_BSPC LT(_PORT, KC_BSPC)
#define R_SPC  LT(_STARBOARD, KC_SPC)

#define L_THUMB L_BSPC
#define R_THUMB R_SPC

#define LSFT_A   LSFT_T(KC_A)
#define LCTL_O   LCTL_T(KC_O)
#define LALT_E   LALT_T(KC_E)
#define LGUI_U   LGUI_T(KC_U)

#define RGUI_H   RGUI_T(KC_H)
#define RALX_T   RALT_T(KC_T)
#define RCTL_N   RCTL_T(KC_N)
#define RSFT_S   RSFT_T(KC_S)

#define PASTE    LSFT(KC_INS)

//      ______________LAYER_SIDE_ROW_______________
#define ________________BOW_LEFT_1_________________     KC_Z   , KC_X   , KC_B   , KC_P   , KC_Y
#define ________________BOW_LEFT_2_________________     LSFT_A , LCTL_O , LALT_E , LGUI_U , KC_I
#define          _______BOW_LEFT_3________                       KC_Q   , KC_J   , KC_K

#define ________________BOW_RIGHT_1________________     KC_F   , KC_G   , KC_C   , KC_R   , KC_L
#define ________________BOW_RIGHT_2________________     KC_D   , RGUI_H , RALX_T , RCTL_N , RSFT_S
#define          _______BOW_RIGHT_3_______                       KC_M   , KC_W   , KC_V

#define _______________PORT_LEFT_1_________________     KC_QUOT, KC_COMM, KC_DOT , KC_SCLN, KC_PGUP
#define _______________PORT_LEFT_2_________________     KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_PGDN
#define          ______PORT_LEFT_3________                       KC_GRV , KC_LBRC, KC_RBRC

#define _______________PORT_RIGHT_1________________     KC_HOME, _______, _______, KC_BSLS, _______
#define _______________PORT_RIGHT_2________________     KC_END , KC_EQL , KC_SLSH, KC_PLUS, KC_MINS
#define          ______PORT_RIGHT_3_______                       _______, _______, _______

#define _____________STARBOARD_LEFT_1______________     KC_1   , KC_2   , KC_3   , KC_4   , KC_5
#define _____________STARBOARD_LEFT_2______________     _______, _______, _______, _______, _______
#define          ____STARBOARD_LEFT_3_____                       _______, _______, _______

#define _____________STARBOARD_RIGHT_1_____________     KC_6   , KC_7   , KC_8   , KC_9   , KC_0
#define _____________STARBOARD_RIGHT_2_____________     KC_INS , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
#define          ____STARBOARD_RIGHT_3____                       _______, _______, _______

#define ________________AFT_LEFT_1_________________     KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5
#define ________________AFT_LEFT_2_________________     KC_F11 , KC_F12 , _______, _______, PASTE
#define          _______AFT_LEFT_3________                       _______, _______, _______

#define ________________AFT_RIGHT_1________________     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10
#define ________________AFT_RIGHT_2________________     _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R
#define          _______AFT_RIGHT_3______                       _______, _______, _______


#endif
