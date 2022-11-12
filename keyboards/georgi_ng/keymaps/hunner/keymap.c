#include QMK_KEYBOARD_H
#include "hunner.h"

/* Keyboard Layout
 * ,---------------------------------.    ,------------------------------.
 * | FN  | LSU | LFT | LP | LH | ST1 |    | ST3 | RF | RP | RL | RT | RD |
 * |-----+-----+-----+----+----|-----|    |-----|----+----+----+----+----|
 * | PWR | LSD | LK  | LW | LR | ST2 |    | ST4 | RR | BB | RG | RS | RZ |
 * `---------------------------------'    `------------------------------'
 *                   ,---------------,    .---------------.
 *                   | LNO | LA | LO |    | RE | RU | RNO |
 *                   `---------------'    `---------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_georgi_wrapper(
    STN_FN,  STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,       STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    DF(1), STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,       STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                               STN_N1,  STN_A,   STN_O,         STN_E,   STN_U,   STN_N7
  ),
  [1] = LAYOUT_georgi_wrapper(
    DF(0), TAIPO_1_LEFT______________________, _______,       _______, TAIPO_1_RIGHT_____________________, _______,
    _______, TAIPO_2_LEFT______________________, _______,       _______, TAIPO_2_RIGHT_____________________, _______,
                               KC_SPC , KC_BSPC, _______,       _______, KC_BSPC, KC_SPC
  )
};
