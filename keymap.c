#include QMK_KEYBOARD_H

/*  This file was originally generated with QMK JSON2C, but I've since edited it
 *  to be easier to read. This is what gets used to build the firmware, so the
 *  JSON shouldn't be treated as the source of truth. -JB*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(KC_ESC, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,
                          KC_TAB, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_ENT,
                          KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_QUOT,
                          KC_LCTL,KC_GRV, KC_LGUI,KC_LALT,MO(1),  KC_SPC, KC_SPC, MO(2),  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT),
	[1] = LAYOUT_ortho_4x12(KC_ESC, KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
                          KC_TAB, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_LCBR,KC_RCBR,KC_ENT,
                          KC_LSFT,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, RGB_VAI,RGB_VAD,KC_MUTE,RGB_TOG,KC_PIPE,
                          KC_LCTL,RGB_MOD,KC_LGUI,KC_LALT,MO(1),  KC_SPC, KC_SPC, MO(2),  KC_MNXT,KC_VOLD,KC_VOLU,KC_MPLY),
	[2] = LAYOUT_ortho_4x12(KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL,
                          KC_TAB, KC_4,   KC_5,   KC_6,   KC_PPLS,KC_HOME,KC_PGUP,KC_MINS,KC_EQL, KC_LBRC,KC_RBRC,KC_ENT,
                          KC_LSFT,KC_7,   KC_8,   KC_9,   KC_MINS,KC_END, KC_PGDN,KC_NUHS,KC_NUBS,KC_MUTE,KC_TRNS,KC_BSLS,
                          KC_LCTL,KC_COMM,KC_0,   KC_DOT, MO(1),  KC_SPC, KC_SPC, MO(2),  KC_MNXT,KC_VOLD,KC_VOLU,KC_MPLY)
};

