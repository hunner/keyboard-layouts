#include QMK_KEYBOARD_H
#include "hunner.h"
#include "plank.c"

/*
enum combos {
  // Left helm combos
  UE_I,
  UO_Y,
  UA_P,
  OE_B,
  EA_X,
  OA_Z,
  AOE_K,
  AOU_J,
  AEU_Q,
  AOEU_ESC,
  OEU_TAB,

  // Right helm combos
  HT_D,
  HN_F,
  HS_G,
  TN_C,
  TS_R,
  NS_L,
  TNS_M,
  HNS_W,
  HTS_V,
  HTNS_ENT,
  HTN_BSPC,

  // Left port combos
  C12_QUO,
  C13_COM,
  C23_DOT,
  C14_SCL,
  C24_PU,
  C34_PD,
  C134_GV,
  C124_LB,
  C123_RB,

  // Right port combos
  C56_ED,
  C57_HM,
  C67_BS,

  // Left starboard combos
  C34_5,

  // Right starboard combos
  C56_6,

  // Left aft combos
  C12_F1,
  C13_F2,
  C23_F3,
  C14_F4,
  C24_F5,

  // Right aft combos
  C57_F6 ,
  C58_F7 ,
  C67_F8 ,
  C68_F9 ,
  C78_F10,
};

// Left helm combos
const uint16_t PROGMEM ue_combo[] = {LGUI_U, LALT_E, COMBO_END};
const uint16_t PROGMEM uo_combo[] = {LGUI_U, LCTL_O, COMBO_END};
const uint16_t PROGMEM ua_combo[] = {LGUI_U, LSFT_A, COMBO_END};
const uint16_t PROGMEM oe_combo[] = {LCTL_O, LALT_E, COMBO_END};
const uint16_t PROGMEM ea_combo[] = {LALT_E, LSFT_A, COMBO_END};
const uint16_t PROGMEM oa_combo[] = {LCTL_O, LSFT_A, COMBO_END};
const uint16_t PROGMEM aoe_combo[] = {LSFT_A, LCTL_O, LALT_E, COMBO_END};
const uint16_t PROGMEM aou_combo[] = {LSFT_A, LCTL_O, LGUI_U, COMBO_END};
const uint16_t PROGMEM aeu_combo[] = {LSFT_A, LALT_E, LGUI_U, COMBO_END};
const uint16_t PROGMEM aoeu_combo[] = {LSFT_A, LCTL_O, LALT_E, LGUI_U, COMBO_END};
const uint16_t PROGMEM oeu_combo[] = {LCTL_O, LALT_E, LGUI_U, COMBO_END};

// Right helm combos
const uint16_t PROGMEM ht_combo[] = {RGUI_H, RALX_T, COMBO_END};
const uint16_t PROGMEM hn_combo[] = {RGUI_H, RCTL_N, COMBO_END};
const uint16_t PROGMEM hs_combo[] = {RGUI_H, RSFT_S, COMBO_END};
const uint16_t PROGMEM tn_combo[] = {RALX_T, RCTL_N, COMBO_END};
const uint16_t PROGMEM ts_combo[] = {RALX_T, RSFT_S, COMBO_END};
const uint16_t PROGMEM ns_combo[] = {RCTL_N, RSFT_S, COMBO_END};
const uint16_t PROGMEM tns_combo[] = {RALX_T, RCTL_N, RSFT_S, COMBO_END};
const uint16_t PROGMEM hns_combo[] = {RGUI_H, RCTL_N, RSFT_S, COMBO_END};
const uint16_t PROGMEM hts_combo[] = {RGUI_H, RALX_T, RSFT_S, COMBO_END};
const uint16_t PROGMEM htns_combo[] = {RGUI_H, RALX_T, RCTL_N, RSFT_S, COMBO_END};
const uint16_t PROGMEM htn_combo[] = {RGUI_H, RALX_T, RCTL_N, COMBO_END};

// Left port combos
const uint16_t PROGMEM quot_combo[] = {KC_LCBR, KC_RCBR, COMBO_END};
const uint16_t PROGMEM comm_combo[] = {KC_LCBR, KC_LPRN, COMBO_END};
const uint16_t PROGMEM dot_combo[]  = {KC_RCBR, KC_LPRN, COMBO_END};
const uint16_t PROGMEM scln_combo[] = {KC_LCBR, KC_RPRN, COMBO_END};
const uint16_t PROGMEM pgup_combo[] = {KC_RCBR, KC_RPRN, COMBO_END};
const uint16_t PROGMEM pgdn_combo[] = {KC_LPRN, KC_RPRN, COMBO_END};
const uint16_t PROGMEM grv_combo[]  = {KC_LCBR, KC_LPRN, KC_RPRN, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_LCBR, KC_RCBR, KC_RPRN, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_LCBR, KC_RCBR, KC_LPRN, COMBO_END};

// Right port combos
const uint16_t PROGMEM end_combo[]  = {KC_EQL , KC_SLSH, COMBO_END};
const uint16_t PROGMEM home_combo[] = {KC_EQL , KC_PLUS, COMBO_END};
const uint16_t PROGMEM bsls_combo[] = {KC_SLSH, KC_PLUS, COMBO_END};

// Left starboard combos
const uint16_t PROGMEM c34_combo[] = {KC_3, KC_4, COMBO_END};

// Right starboard combos
const uint16_t PROGMEM c56_combo[] = {KC_7, KC_8, COMBO_END};

// Left aft combos
const uint16_t PROGMEM f1_combo[]  = {KC_F11 , KC_F12 , COMBO_END};
const uint16_t PROGMEM f2_combo[]  = {KC_F11 , KC_INS, COMBO_END};
const uint16_t PROGMEM f3_combo[]  = {KC_F12 , KC_INS , COMBO_END};
const uint16_t PROGMEM f4_combo[]  = {KC_F11 , PASTE  , COMBO_END};
const uint16_t PROGMEM f5_combo[]  = {KC_F12 , PASTE  , COMBO_END};

// Right aft combos
const uint16_t PROGMEM f6_combo[]  = {KC_LEFT, KC_UP  , COMBO_END};
const uint16_t PROGMEM f7_combo[]  = {KC_LEFT, KC_RGHT, COMBO_END};
const uint16_t PROGMEM f8_combo[]  = {KC_DOWN, KC_UP  , COMBO_END};
const uint16_t PROGMEM f9_combo[]  = {KC_DOWN, KC_RGHT, COMBO_END};
const uint16_t PROGMEM f10_combo[] = {KC_UP  , KC_RGHT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  // Left helm combos
  [UE_I]  = COMBO(ue_combo, KC_I),
  [UO_Y]  = COMBO(uo_combo, KC_Y),
  [UA_P]  = COMBO(ua_combo, KC_P),
  [OE_B]  = COMBO(oe_combo, KC_B),
  [EA_X]  = COMBO(ea_combo, KC_X),
  [OA_Z]  = COMBO(oa_combo, KC_Z),
  [AOE_K] = COMBO(aoe_combo, KC_K),
  [AOU_J] = COMBO(aou_combo, KC_J),
  [AEU_Q] = COMBO(aeu_combo, KC_Q),
  [AOEU_ESC] = COMBO(aoeu_combo, KC_ESC),
  [OEU_TAB] = COMBO(oeu_combo, KC_TAB),

  // Right helm combos
  [HT_D]  = COMBO(ht_combo, KC_D),
  [HN_F]  = COMBO(hn_combo, KC_F),
  [HS_G]  = COMBO(hs_combo, KC_G),
  [TN_C]  = COMBO(tn_combo, KC_C),
  [TS_R]  = COMBO(ts_combo, KC_R),
  [NS_L]  = COMBO(ns_combo, KC_L),
  [TNS_M] = COMBO(tns_combo, KC_M),
  [HNS_W] = COMBO(hns_combo, KC_W),
  [HTS_V] = COMBO(hts_combo, KC_V),
  [HTNS_ENT] = COMBO(htns_combo, KC_ENT),
  [HTN_BSPC] = COMBO(htn_combo, KC_BSPC),

  // Left port combos
  [C12_QUO] = COMBO(quot_combo, KC_QUOT),
  [C13_COM] = COMBO(comm_combo, KC_COMM),
  [C23_DOT] = COMBO(dot_combo, KC_DOT),
  [C14_SCL] = COMBO(scln_combo, KC_SCLN),
  [C24_PU]  = COMBO(pgup_combo, KC_PGUP),
  [C34_PD]  = COMBO(pgdn_combo, KC_PGDN),
  [C134_GV] = COMBO(grv_combo, KC_GRV),
  [C124_LB] = COMBO(lbrc_combo, KC_LBRC),
  [C123_RB] = COMBO(rbrc_combo, KC_RBRC),

  // Right port combos
  [C56_ED] = COMBO(end_combo, KC_END),
  [C57_HM] = COMBO(home_combo, KC_HOME),
  [C67_BS] = COMBO(bsls_combo, KC_BSLS),

  // Left starboard combos
  [C34_5]  = COMBO(c34_combo, KC_5),

  // Right starboard combos
  [C56_6]  = COMBO(c56_combo, KC_6),

  // Left aft combos
  [C12_F1]  =  COMBO(f1_combo, KC_F1),
  [C13_F2]  =  COMBO(f2_combo, KC_F2),
  [C23_F3]  =  COMBO(f3_combo, KC_F3),
  [C14_F4]  =  COMBO(f4_combo, KC_F4),
  [C24_F5]  =  COMBO(f5_combo, KC_F5),

  // Right aft combos
  [C57_F6 ]  =  COMBO(f6_combo , KC_F6),
  [C58_F7 ]  =  COMBO(f7_combo , KC_F7),
  [C67_F8 ]  =  COMBO(f8_combo , KC_F8),
  [C68_F9 ]  =  COMBO(f9_combo , KC_F9),
  [C78_F10]  =  COMBO(f10_combo, KC_F10),
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_HELM] = LAYOUT_ginny_wrapper(
      LSFT_A , LCTL_O , LALT_E , LGUI_U ,
      L_THUMB, TD(TD_SPACE_STAR_PLANK),
      RGUI_H , RALX_T , RCTL_N , RSFT_S
      ),

  [_PORT] = LAYOUT_ginny_wrapper(
      KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN,
      L_THUMB, R_THUMB,
      KC_EQL , KC_SLSH, KC_PLUS, KC_MINS
      ),

  [_STARBOARD] = LAYOUT_ginny_wrapper(
      KC_1   , KC_2   , KC_3   , KC_4   ,
      L_THUMB, R_THUMB,
      KC_7   , KC_8   , KC_9   , KC_0
      ),

  [_AFT] = LAYOUT_ginny_wrapper(
      KC_F11 , KC_F12 , KC_INS , PASTE  ,
      L_THUMB, R_THUMB,
      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
      ),

  [_PLANK] = LAYOUT_ginny_wrapper(
      _______, KC_BTN1, KC_BTN2, KC_BTN3,
      LT(_MAP, PASTE), R_THUMB,
      MS_LEFT, MS_DOWN, MS_UP  , MS_RGHT
      ),

  [_MAP] = LAYOUT_ginny_wrapper(
      _______, KC_BTN1, KC_BTN2, KC_BTN3,
      _______, _______,
      MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR
      ),
};
