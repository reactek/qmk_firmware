#include QMK_KEYBOARD_H
#include "mtdjr.h"

extern keymap_config_t keymap_config;

#define KC_LOCK TD(TD_ALTLOCK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_kc(
  // ,----+-----+-----+-----+-----+-----,         ,----+-----+-----+-----+-----+-----,
       TAB,    Q,    W,    E,    R,    T,             Y,    U,    I,    O,    P, BSPC,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
      LCTL,    A,    S,    D,    F,    G,             H,    J,    K,    L, SCLN, QUOT,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
      LSFT,    Z,    X,    C,    V,    B,             N,    M, COMM,  DOT, SLSH,  ENT,
  // |----+-----+-----+-----+-----+-----|-,     ,-|----+-----+-----+-----+-----+-----|
                          LGUI, LOWR,  SPC,       SPC, RASE, LOCK
  //                     `----+-----+-----`     `----+-----+-----`
   ),

  [_LOWER] = LAYOUT_kc(
  // ,----+-----+-----+-----+-----+-----,         ,----+-----+-----+-----+-----+-----,
       ESC,    1,    2,    3,    4,    5,             6,    7,    8,    9,    0,  DEL,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
          ,     ,     ,     ,     ,     ,              ,     ,     , LCBR, RCBR, BSLS,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
          ,     ,     , XCPY, XINS,     ,              ,     ,     ,     ,     ,     ,
  // |----+-----+-----+-----+-----+-----|-,     ,-|----+-----+-----+-----+-----+-----|
                              ,     ,     ,          ,     ,
  //                     `----+-----+-----`     `----+-----+-----`
  ),

  [_RAISE] = LAYOUT_kc(
  // ,----+-----+-----+-----+-----+-----,         ,----+-----+-----+-----+-----+-----,
       GRV, EXLM,   AT, HASH,  DLR, PERC,          CIRC, AMPR, ASTR, LPRN, RPRN,  DEL,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
          ,     ,     ,     , MINS,  EQL,              ,     ,   UP, LBRC, RBRC, PIPE,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
          ,     ,     ,     ,     ,     ,              , LEFT, DOWN, RGHT,     ,     ,
  // |----+-----+-----+-----+-----+-----|-,     ,-|----+-----+-----+-----+-----+-----|
                              ,     ,     ,          ,     ,
  //                     `----+-----+-----`     `----+-----+-----`
   ),
  [_ADJUST] = LAYOUT_kc(
  // ,----+-----+-----+-----+-----+-----,         ,----+-----+-----+-----+-----+-----,
      STOG, xxxx, xxxx, xxxx,  RST, xxxx,          ROOT, PPLY, PSEF, xxxx, xxxx,  CAD,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
      SDM,   SDP, SBOF, SBON, xxxx, xxxx,          xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,
  // |----+-----+-----+-----+-----+-----|         |----+-----+-----+-----+-----+-----|
      xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,          xxxx, xxxx, xxxx, xxxx, xxxx, xxxx,
  // |----+-----+-----+-----+-----+-----|-,     ,-|----+-----+-----+-----+-----+-----|
                          xxxx,     , xxxx,      xxxx,     , xxxx
  //                     `----+-----+-----`     `----+-----+-----`
  )
};