#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_PLUS,        KC_UNDS,        KC_F4,          KC_F5,          MO(5),                                          TD(DANCE_0),    KC_F6,          KC_F7,          KC_MINUS,       KC_EQUAL,       KC_0,           KC_DELETE,      
    MO(3),          KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PAGE_UP,                                     KC_HOME,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           MO(3),          
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_PGDN,                                                                        KC_END,         KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    LM(1,MOD_LSFT), KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       LM(1,MOD_LSFT), 
    LM(6,MOD_LGUI), LM(9,MOD_LCTL|MOD_LALT|MOD_LSFT), KC_LEFT, KC_RIGHT, KC_LEFT_CTRL, KC_LEFT_GUI,                                                                                                    KC_RIGHT_GUI,   KC_RIGHT_CTRL,  KC_DOWN,        KC_UP,          LM(9,MOD_LCTL|MOD_LALT|MOD_LSFT), LM(6,MOD_LGUI), 
    KC_SPACE,       KC_TAB,         KC_LEFT_ALT,                    KC_RIGHT_ALT,   CW_TOGG,        KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_1),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MO(7),          KC_MEH,         KC_TRANSPARENT, KC_TRANSPARENT, LM(8,MOD_LGUI), KC_LEFT_CTRL,                                                                                                   KC_RIGHT_CTRL,  LM(8,MOD_LGUI), KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,         MO(7),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_INSERT,      KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_DELETE,      KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_COMMA,       KC_DOT,         KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_END,         KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, HSV_86_255_128,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, LGUI(LSFT(KC_LEFT)),KC_TRANSPARENT, LGUI(LSFT(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_6),     LGUI(KC_5),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_3),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_7),     LGUI(KC_2),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LSFT(KC_SPACE)),LGUI(KC_4),     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(LGUI(LCTL(KC_SPACE))),KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_1)))),LALT(LGUI(LCTL(LSFT(KC_2)))),LALT(LGUI(LCTL(LSFT(KC_3)))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_V)))),LALT(LGUI(LCTL(LSFT(KC_S)))),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_U)))),KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_E)))),LALT(LGUI(LCTL(LSFT(KC_C)))),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 LGUI(LSFT(KC_5)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_Q)),LALT(LGUI(LCTL(LSFT(KC_T)))),LALT(LGUI(LCTL(LSFT(KC_M)))),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(KC_COMMA))),LALT(LGUI(LCTL(KC_DOT))),LALT(LGUI(LCTL(LSFT(KC_BSLS)))),LALT(LGUI(LCTL(LSFT(KC_K)))),
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_LEFT)))),LALT(LGUI(LCTL(LSFT(KC_RIGHT)))),KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_RBRC)))),LALT(LGUI(LCTL(LSFT(KC_DOWN)))),LALT(LGUI(LCTL(LSFT(KC_UP)))),LALT(LGUI(LCTL(LSFT(KC_LBRC)))),KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(LGUI(LCTL(LSFT(KC_TAB)))),KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_GRAVE,       KC_TRANSPARENT, KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RCBR,                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {0,0,65}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {0,0,65}, {242,166,158}, {242,166,158}, {242,166,158}, {0,0,255}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {0,0,65}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158}, {242,166,158} },

    [1] = { {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196}, {83,255,196} },

    [2] = { {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204}, {172,218,204} },

    [3] = { {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {71,151,188}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {193,218,204}, {193,218,204}, {193,218,204}, {122,218,204}, {122,218,204}, {193,218,204}, {193,218,204}, {193,218,204}, {122,218,204}, {122,218,204}, {193,218,204}, {193,218,204}, {193,218,204}, {193,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {229,151,255}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204}, {122,218,204} },

    [4] = { {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {0,0,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {126,219,228}, {126,219,228}, {0,0,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {0,0,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {126,219,228}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255}, {210,247,255} },

    [5] = { {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {122,218,204}, {232,154,186}, {232,154,186}, {232,154,186}, {122,218,204}, {122,218,204}, {232,154,186}, {122,218,204}, {232,154,186}, {232,154,186}, {122,218,204}, {232,154,186}, {122,218,204}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {0,255,255}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {193,218,204}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {193,218,204}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {193,183,242}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {122,218,204}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186}, {232,154,186} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {28,205,255}, {172,183,239}, {0,216,255}, {83,255,188}, {0,0,0}, {0,0,197}, {0,0,0}, {83,255,119}, {0,0,130}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {28,205,255}, {172,183,239}, {0,216,255}, {83,255,188}, {0,0,0}, {0,0,197}, {166,205,255}, {83,255,119}, {0,0,130}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239}, {172,183,239} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(2); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
    case HSV_86_255_128:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(86,255,128);
        }
        return false;
  }
  return true;
}

