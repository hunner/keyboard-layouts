#include "hunner.h"

enum combos {
  XB_ESC,
  BP_TAB,
  QJ_CLIC,
  QK_CLIC,
  JK_CLIC,

  GC_ENT,
  CR_BSPC,
  WV_SPC
};

const uint16_t PROGMEM xb_combo[] = {KC_X, KC_B, COMBO_END};
const uint16_t PROGMEM bp_combo[] = {KC_B, KC_P, COMBO_END};
const uint16_t PROGMEM qj_combo[] = {KC_Q, KC_J, COMBO_END};
const uint16_t PROGMEM qk_combo[] = {KC_Q, KC_K, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};

const uint16_t PROGMEM gc_combo[] = {KC_G, KC_C, COMBO_END};
const uint16_t PROGMEM cr_combo[] = {KC_C, KC_R, COMBO_END};
const uint16_t PROGMEM wv_combo[] = {KC_W, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  // Left half
  [XB_ESC]  = COMBO(xb_combo, KC_ESC),
  [BP_TAB]  = COMBO(bp_combo, KC_TAB),
  [QJ_CLIC] = COMBO(qj_combo, KC_BTN1),
  [QK_CLIC] = COMBO(qk_combo, KC_BTN3),
  [JK_CLIC] = COMBO(jk_combo, KC_BTN2),

  // Right half
  [GC_ENT]  = COMBO(gc_combo, KC_ENT),
  [CR_BSPC] = COMBO(cr_combo, KC_BSPC),
  [WV_SPC]  = COMBO(wv_combo, KC_SPC)
};

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LEFT, _RIGHT, _ADJUST);
}
