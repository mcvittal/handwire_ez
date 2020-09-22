/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2   , KC_3   , KC_4  , KC_5  ,                       KC_6  , KC_7  , KC_8   , KC_9   , KC_0  , KC_MINS,
     KC_GRV , KC_Q  , KC_W   , KC_E   , KC_R  , KC_T  ,                       KC_Y  , KC_U  , KC_I   , KC_O   , KC_P  , KC_BSPC,
     KC_TAB , KC_A  , KC_S   , KC_D   , KC_F  , KC_G  ,                       KC_H  , KC_J  , KC_K   , KC_L   ,KC_SCLN, KC_QUOT,
     KC_CAPS, KC_Z  , KC_X   , KC_C   , KC_V  , KC_B  ,                       KC_N  , KC_M  , KC_COMM, KC_DOT ,KC_SLSH, KC_NUBS,
     KC_LSFT, KC_LCTL,KC_LALT, KC_LGUI, KC_ENT,                                       KC_ENT, KC_RGUI, KC_RALT,KC_RCTL, KC_RSFT,
                                               RAISE ,KC_SPC ,        KC_INS , LOWER,
                                                      KC_HOME,        KC_END ,
                                       KC_SPC,KC_BSLS, RESET,         KC_PSCR ,KC_DEL,KC_SPC
  ),

  [_LOWER] = LAYOUT_5x6(
     _______,_______,_______,_______,_______,_______,                         _______,_______,_______,KC_LCBR,KC_RCBR,KC_EQL ,
     _______,_______, _______,KC_UP ,_______,_______,                         _______,_______,_______,_______,_______,_______,
     _______,_______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,                        _______,_______,_______,_______,KC_PIPE,_______,
     _______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,KC_BSLS,_______,
     _______,_______,_______,_______,_______,                                         _______,_______,_______,_______,_______,
                                             _______,_______,        _______,_______,
                                                     _______,        _______,
                                     _______,_______,_______,        _______,_______,_______

  ),

  [_RAISE] = LAYOUT_5x6(
      KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 ,                         KC_F7 ,  KC_F8   , KC_F9    , KC_F10    , KC_F11, KC_F12,
     _______,_______,_______,_______,_______,_______,                    KC_MS_WH_UP, _______  , KC_MS_UP , _______   ,_______,_______,
     _______,_______,_______,_______,_______,_______,                  KC_MS_WH_DOWN,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,_______,_______,
     _______,_______,_______,_______,_______,_______,                        _______,KC_MS_BTN1,KC_MS_BTN3,KC_MS_BTN2 ,_______,_______,
     _______,_______,_______,_______,_______,                                        _______   ,_______   ,_______    ,_______,_______,
                                             _______,_______,        _______,_______,
                                                     _______,        _______,
                                     _______,_______,_______,        _______,_______,_______

  )
};
