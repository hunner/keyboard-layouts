#include QMK_KEYBOARD_H
#include "hunner.h"

/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_ginny(
		KC_A, KC_S, KC_E, KC_T, KC_L, KC_R, KC_N, KC_I, KC_O, KC_P
)};
*/

enum combos {
  UE_I,
  UO_Y,
  UA_P,
  OE_B,
  EA_X,
  OA_Z,
  AOE_K,
  AOU_J,
  AEU_Q,

  HT_D,
  HN_F,
  HS_G,
  TN_C,
  TS_R,
  NS_L,
  TNS_M,
  HNS_W,
  HTS_V,
};

const uint16_t PROGMEM ue_combo[] = {KC_U, KC_E, COMBO_END};
const uint16_t PROGMEM uo_combo[] = {KC_U, KC_O, COMBO_END};
const uint16_t PROGMEM ua_combo[] = {KC_U, KC_A, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM ea_combo[] = {KC_E, KC_A, COMBO_END};
const uint16_t PROGMEM oa_combo[] = {KC_O, KC_A, COMBO_END};
const uint16_t PROGMEM aoe_combo[] = {KC_A, KC_O, KC_E, COMBO_END};
const uint16_t PROGMEM aou_combo[] = {KC_A, KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM aeu_combo[] = {KC_A, KC_E, KC_U, COMBO_END};

const uint16_t PROGMEM ht_combo[] = {KC_H, KC_T, COMBO_END};
const uint16_t PROGMEM hn_combo[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM hs_combo[] = {KC_H, KC_S, COMBO_END};
const uint16_t PROGMEM tn_combo[] = {KC_T, KC_N, COMBO_END};
const uint16_t PROGMEM ts_combo[] = {KC_T, KC_S, COMBO_END};
const uint16_t PROGMEM ns_combo[] = {KC_N, KC_S, COMBO_END};
const uint16_t PROGMEM tns_combo[] = {KC_T, KC_N, KC_S, COMBO_END};
const uint16_t PROGMEM hns_combo[] = {KC_H, KC_N, KC_S, COMBO_END};
const uint16_t PROGMEM hts_combo[] = {KC_H, KC_T, KC_S, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [UE_I]  = COMBO(ue_combo, KC_I),
  [UO_Y]  = COMBO(uo_combo, KC_Y),
  [UA_P]  = COMBO(ua_combo, KC_P),
  [OE_B]  = COMBO(oe_combo, KC_B),
  [EA_X]  = COMBO(ea_combo, KC_X),
  [OA_Z]  = COMBO(oa_combo, KC_Z),
  [AOE_K]  = COMBO(aoe_combo, KC_K),
  [AOU_J]  = COMBO(aou_combo, KC_J),
  [AEU_Q]  = COMBO(aeu_combo, KC_Q),

  [HT_D]  = COMBO(ht_combo, KC_D),
  [HN_F]  = COMBO(hn_combo, KC_F),
  [HS_G]  = COMBO(hs_combo, KC_G),
  [TN_C]  = COMBO(tn_combo, KC_C),
  [TS_R]  = COMBO(ts_combo, KC_R),
  [NS_L]  = COMBO(ns_combo, KC_L),
  [TNS_M]  = COMBO(tns_combo, KC_M),
  [HNS_W]  = COMBO(hns_combo, KC_W),
  [HTS_V]  = COMBO(hts_combo, KC_V)
};

// LSFT() works, LSFT_T() does not. Some difference with holding keys vs. tapping?
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BOW] = LAYOUT_ginny(
      KC_A, KC_O, KC_E, KC_U,
      KC_BSPC, KC_SPC,
      KC_H, KC_T, KC_N, KC_S
      ),

  [_PORT] = LAYOUT_ginny(
      KC_Z, KC_X, KC_B, KC_P,
      L_THUMB, R_THUMB,
      KC_G, KC_C, KC_R, KC_L
      ),

  [_STARBOARD] = LAYOUT_ginny(
      KC_Y, KC_Q, KC_J, KC_K,
      L_THUMB, R_THUMB,
      KC_F, KC_V, KC_W, KC_M
      ),

  [_AFT] = LAYOUT_ginny(
      KC_A, KC_O, KC_E, KC_U,
      L_THUMB, R_THUMB,
      KC_H, KC_T, KC_N, KC_S
      )
};
