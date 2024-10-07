// Copyright 2021 JZ-Skyloong (@JZ-Skyloong)
// SPDX-License-Identifier: GPL-2.0-or-later

// compile command:
// qmk compile -kb skyloong/gk61/pro_48 -km Rogier

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Bsp│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E | R │ T │ Y │ U │ I │ O │ P │ [ │ ] │ \ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │   |Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │   |Sft|   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│GUI│Alt│   │Spc│Mut│   │   |MO1|Alt│App│Ctl│   │Mo2|
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_all(
         KC_ESC,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,        KC_6,     KC_7,       KC_8,     KC_9,        KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,
         KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,     KC_U,       KC_I,     KC_O,        KC_P,     KC_LBRC,  KC_RBRC,   KC_BSLS,
        KC_CAPS,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,     KC_J,       KC_K,     KC_L,     KC_SCLN,     KC_QUOT,              KC_ENT,
        KC_LSFT,     KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,     KC_M,    KC_COMM,   KC_DOT,     KC_SLSH,               KC_RSFT,
        KC_LCTL,  KC_LGUI,  KC_LALT,             KC_SPC,   KC_SPC,     KC_MUTE,               MO(1),  KC_RALT,      KC_APP,     KC_RCTL,               MO(2)
    ),

   /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ ` │F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│DEL│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │←  │↓  │↑  │→  │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │   │   │   │   │   │   │   │   │   │   │   │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
[1] = LAYOUT_all(
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,       KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,
    _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,            _______,
    _______,  _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______,            _______,
    _______,  _______,  _______,            _______,  _______,     _______,            _______,  _______,  _______,  _______,            _______
),

[2] = LAYOUT_all(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______, _______, _______, _______, QK_BOOT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,
    _______, _______, _______,          _______, _______, _______,          _______, _______, _______, _______,            _______
),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) }
};
#endif

static uint16_t esc_timer = 0;
static uint8_t esc_brightness = 255; // Maximum brightness

// Function to scale RGB values based on brightness
void set_rgb_brightness(uint8_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t brightness) {
    uint8_t scaled_r = (r * brightness) / 255;
    uint8_t scaled_g = (g * brightness) / 255;
    uint8_t scaled_b = (b * brightness) / 255;
    rgb_matrix_set_color(index, scaled_r, scaled_g, scaled_b);
}

// Function gets called every time a key is pressed or released
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // Light up the ESC key when any key is pressed
        set_rgb_brightness(0, RGB_RED, esc_brightness); // Set ESC key (index 0) to RGB_RED with current brightness
        esc_timer = timer_read(); // Start the timer to fade out the esc key
        esc_brightness = 255; // Reset brightness to maximum
    }
    return true;
}

// Function gets called every tick of the lighting engine 
// Do all lighting changes here because if you do it in process_record_user, it will be overwritten immediately by the global lighting effect (if a global lighting effect is active).
void matrix_scan_user(void) {
    if (timer_elapsed(esc_timer) > 10 && esc_brightness > 0) { // Check if 10ms have passed and brightness is greater than 0
        esc_brightness--; // Decrease brightness
        esc_timer = timer_read(); // Reset the timer
    }

    if (esc_brightness > 0) {
       set_rgb_brightness(0, RGB_RED, esc_brightness); // Update ESC key color with new brightness
    }  

        // Check if layer 1 is active
    if (layer_state_is(1)) {
        // Set arrow keys to red
        set_rgb_brightness(34, RGB_TEAL, 255); // Left arrow key
        set_rgb_brightness(35, RGB_TEAL, 255); // Down arrow key
        set_rgb_brightness(36, RGB_TEAL, 255); // Up arrow key
        set_rgb_brightness(37, RGB_TEAL, 255); // Right arrow key
    }
}


