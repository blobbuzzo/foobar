#include "foobar.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
    ALT_T(KC_Q), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, 
    GUI_T(KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, GUI_T(KC_ENT),
    SFT_T(KC_Z), CTL_T(KC_X), LT(4, KC_C), LT(3, KC_V), KC_BSPC, KC_SPC, LT(2, KC_B), LT(1, KC_N), KC_M, SFT_T(KC_ESC)),

  KEYMAP(
    KC_TRNS, KC_LSHIFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP, KC_PGDN, KC_DEL, 
    KC_TAB, KC_LSHIFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  KEYMAP(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
    KC_GRV, KC_MINS, KC_EQL, KC_QUOT, KC_BSLS, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

  KEYMAP(
    KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20,
    KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
    KC_TILD, KC_UNDS, KC_PLUS, KC_TRNS, KC_DQUO, KC_TRNS, KC_QUES, KC_PIPE, KC_COMM, KC_DOT),

  KEYMAP(
    KC_LPRN, KC_VOLD, KC_VOLU, KC_MUTE, KC_PSCR, KC_TRNS, KC_TRNS, KC_SLCK, KC_PAUS, KC_RPRN, 
    KC_LBRC, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, RGB_MODE_FORWARD, RGB_HUI, RGB_HUD, KC_TRNS, KC_RBRC, 
    KC_LCBR, KC_LABK, KC_TRNS, RESET, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, KC_RABK, KC_RCBR)
};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
