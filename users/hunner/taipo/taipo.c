// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md
// This will need some messing with but it's close
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // I can't figure out why add_oneshot_mods isn't found when compiling georgi
/*
    if(record->event.pressed)
        switch(keycode) {
        case MY_LGUI: add_oneshot_mods(MOD_BIT(KC_LGUI)); add_mods(MOD_BIT(KC_LGUI)); break;
        case MY_LALT: add_oneshot_mods(MOD_BIT(KC_LALT)); add_mods(MOD_BIT(KC_LALT)); break;
        case MY_LCTL: add_oneshot_mods(MOD_BIT(KC_LCTL)); add_mods(MOD_BIT(KC_LCTL)); break;
        case MY_LSFT: add_oneshot_mods(MOD_BIT(KC_LSFT)); add_mods(MOD_BIT(KC_LSFT)); break;
        }
    else
        switch(keycode) {
        case MY_LGUI: case MY_LALT: case MY_LCTL: case MY_LSFT: clear_mods(); break;
        }
*/
    return true;
}

// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_leader_key.md
// This lets you do something like F12 with LEADER+0+2
// The timings need fixing though
LEADER_EXTERNS();
void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_1) { tap_code16(KC_F1); }
    SEQ_ONE_KEY(KC_2) { tap_code16(KC_F2); }
    SEQ_ONE_KEY(KC_3) { tap_code16(KC_F3); }
    SEQ_ONE_KEY(KC_4) { tap_code16(KC_F4); }
    SEQ_ONE_KEY(KC_5) { tap_code16(KC_F5); }
    SEQ_ONE_KEY(KC_6) { tap_code16(KC_F6); }
    SEQ_ONE_KEY(KC_7) { tap_code16(KC_F7); }
    SEQ_ONE_KEY(KC_8) { tap_code16(KC_F8); }
    SEQ_ONE_KEY(KC_9) { tap_code16(KC_F9); }

    SEQ_TWO_KEYS(KC_0, KC_0) { tap_code16(KC_F10); }
    SEQ_TWO_KEYS(KC_0, KC_1) { tap_code16(KC_F11); }
    SEQ_TWO_KEYS(KC_0, KC_2) { tap_code16(KC_F12); }
    SEQ_TWO_KEYS(KC_0, KC_3) { tap_code16(KC_F13); }
    SEQ_TWO_KEYS(KC_0, KC_4) { tap_code16(KC_F14); }
    SEQ_TWO_KEYS(KC_0, KC_5) { tap_code16(KC_F15); }
    SEQ_TWO_KEYS(KC_0, KC_6) { tap_code16(KC_F16); }
    SEQ_TWO_KEYS(KC_0, KC_7) { tap_code16(KC_F17); }
    SEQ_TWO_KEYS(KC_0, KC_8) { tap_code16(KC_F18); }
    SEQ_TWO_KEYS(KC_0, KC_9) { tap_code16(KC_F19); }
  }
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
      case CM1: case CM2: case CM3: case CM4: case CM5: case CM6: case CM7: case CM8: case CM9: case CM10:
      case CM11: case CM12: case CM13: case CM14: case CM15: case CM16: case CM17: case CM18: case CM19: case CM20:
      case CM21: case CM22: case CM23: case CM24: case CM25: case CM26: case CM27: case CM28: case CM29: case CM30:
      case CM31: case CM32: case CM33: case CM34: case CM35: case CM36: case CM37: case CM38: case CM39: case CM40:
      case CM41: case CM42: case CM43: case CM44: case CM45: case CM46: case CM47: case CM48: case CM49: case CM50:
      case CM51: case CM52: case CM53: case CM54: case CM55: case CM56: case CM57: case CM58: case CM59: case CM60:
      case CM61: case CM62: case CM63: case CM64: case CM65: case CM66: case CM67: case CM68: case CM69: case CM70:
      case CM71: case CM72: case CM73: case CM74: case CM75: case CM76: case CM77: case CM78: case CM79: case CM80:
      case CM81: case CM82: case CM83: case CM84: case CM85: case CM86: case CM87: case CM88: case CM89: case CM90:
      case CM91: case CM92: case CM93: case CM94: case CM95: case CM96: case CM97: case CM98: case CM99: case CM100:
      case CM101: case CM102: case CM103: case CM104:
            if (layer_state_is(_TAIPO)) {
                return true;
            }
    }

    return false;
}
