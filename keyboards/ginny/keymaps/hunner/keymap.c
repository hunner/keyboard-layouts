#include QMK_KEYBOARD_H
//#include "g/engine.h"
//#include "g/keymap_engine.h"

/* Note: Don't edit this file! 
 *
 * You can tweak what dictionaries/languages are loaded in dicts.def
 * Your personal keymap is over in user.def
 *
 * This is the most non-QMK powered device ever :)
 * Happy Hacking,
 *		-- Germ
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ginny(
		KC_A, KC_S, KC_E, KC_T, KC_L, KC_R, KC_N, KC_I, KC_O, KC_P
)};

/*
#include "hunner.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ginny(
        KC_A, KC_O, KC_E, KC_I,
        L_THUMB, R_THUMB,
        KC_H, KC_T, KC_N, KC_S
    )
};
*/
