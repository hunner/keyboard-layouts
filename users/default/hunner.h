#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ortho_3x10_wrapper(...)       LAYOUT_ortho_3x10(__VA_ARGS__)

#define _BASE 0 // dvroak layer
#define _LEFT 1 // left thumb
#define _RIGHT 2 // right thumb
#define _ADJUST 3 // both thumbs

#define L_BSPC LT(_LEFT, KC_BSPC)
#define R_SPC  LT(_RIGHT, KC_SPC)

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
#define _______________BASE_LEFT_1_________________     KC_Z   , KC_X   , KC_B   , KC_P   , KC_Y
#define _______________BASE_LEFT_2_________________     LSFT_A , LCTL_O , LALT_E , LGUI_U , KC_I
#define          ______BASE_LEFT_3________                       KC_Q   , KC_J   , KC_K

#define _______________BASE_RIGHT_1________________     KC_F   , KC_G   , KC_C   , KC_R   , KC_L
#define _______________BASE_RIGHT_2________________     KC_D   , RGUI_H , RALX_T , RCTL_N , RSFT_S
#define          ______BASE_RIGHT_3_______                       KC_M   , KC_W   , KC_V

#define _______________LEFT_LEFT_1_________________     KC_QUOT, KC_COMM, KC_DOT , KC_SCLN, KC_PGUP
#define _______________LEFT_LEFT_2_________________     KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_PGDN
#define          ______LEFT_LEFT_3________                       KC_GRV , KC_LBRC, KC_RBRC

#define _______________LEFT_RIGHT_1________________     KC_HOME, _______, _______, KC_BSLS, _______
#define _______________LEFT_RIGHT_2________________     KC_END , KC_EQL , KC_SLSH, KC_PLUS, KC_MINS
#define          ______LEFT_RIGHT_3_______                       _______, _______, _______

#define _______________RIGHT_LEFT_1________________     KC_1   , KC_2   , KC_3   , KC_4   , KC_5

#define _______________RIGHT_RIGHT_1_______________     KC_6   , KC_7   , KC_8   , KC_9   , KC_0
#define _______________RIGHT_RIGHT_2_______________     KC_INS , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT

#define _______________ADJUST_LEFT_1_______________     KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5
#define _______________ADJUST_LEFT_2_______________     KC_F11 , KC_F12 , _______, _______, PASTE

#define _______________ADJUST_RIGHT_1______________     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10
#define _______________ADJUST_RIGHT_2______________     _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R


#endif
