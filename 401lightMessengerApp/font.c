#include "font.h"

/*
// smallMax.c
// Font type    : Full (95 characters)
// Font size    : 8x16 pixels
// Memory usage : 1524 bytes


bitmapMatrixFont smallMax[1524] ={
0x08,0x10,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x18,0x18,0x00,0x00,0x00,  // !
0x00,0x66,0x66,0x66,0x22,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x36,0x36,0x36,0x7F,0x7F,0x36,0x36,0x7F,0x7F,0x36,0x36,0x36,0x00,0x00,0x00,  // #
0x00,0x08,0x3E,0x7F,0x6B,0x68,0x78,0x3E,0x0F,0x0B,0x6B,0x7F,0x3E,0x08,0x00,0x00,  // $
0x00,0x63,0x63,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x63,0x63,0x00,0x00,0x00,  // %
0x00,0x00,0x3C,0x7E,0x66,0x6E,0x3C,0x38,0x7D,0x6F,0x66,0x7F,0x3B,0x00,0x00,0x00,  // &
0x00,0x18,0x18,0x18,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x06,0x0E,0x1C,0x18,0x30,0x30,0x30,0x30,0x30,0x18,0x1C,0x0E,0x06,0x00,0x00,  // (
0x00,0x30,0x38,0x1C,0x0C,0x06,0x06,0x06,0x06,0x06,0x0C,0x1C,0x38,0x30,0x00,0x00,  // )
0x00,0x00,0x00,0x18,0x18,0x7E,0x7E,0x18,0x3C,0x66,0x66,0x00,0x00,0x00,0x00,0x00,  // *
0x00,0x00,0x00,0x00,0x18,0x18,0x7E,0x7E,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x08,0x10,0x00,0x00,  // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,  // .
0x00,0x03,0x03,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x60,0x60,0x00,0x00,0x00,  // /

0x00,0x3E,0x7F,0x63,0x63,0x67,0x6F,0x7B,0x73,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // 0
0x00,0x04,0x0C,0x1C,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x00,0x00,0x00,  // 1
0x00,0x3E,0x7F,0x63,0x03,0x03,0x06,0x06,0x0C,0x18,0x30,0x7F,0x7F,0x00,0x00,0x00,  // 2
0x00,0x3E,0x7F,0x63,0x03,0x03,0x1E,0x1E,0x03,0x03,0x63,0x7F,0x3E,0x00,0x00,0x00,  // 3
0x00,0x18,0x18,0x18,0x30,0x30,0x66,0x66,0x7F,0x7F,0x06,0x06,0x06,0x00,0x00,0x00,  // 4
0x00,0x7E,0x7E,0x60,0x60,0x60,0x7E,0x3F,0x03,0x03,0x63,0x7F,0x3E,0x00,0x00,0x00,  // 5
0x00,0x06,0x1E,0x38,0x30,0x60,0x7E,0x7F,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // 6
0x00,0x7F,0x7F,0x06,0x06,0x0C,0x0C,0x0C,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,  // 7
0x00,0x3E,0x7F,0x63,0x63,0x63,0x3E,0x3E,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // 8
0x00,0x3E,0x7F,0x63,0x63,0x63,0x7F,0x3F,0x03,0x06,0x0E,0x3C,0x30,0x00,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x18,0x08,0x10,0x00,0x00,  // ;
0x00,0x00,0x02,0x06,0x0C,0x18,0x30,0x30,0x18,0x0C,0x06,0x02,0x00,0x00,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0x7E,0x7E,0x00,0x00,0x7E,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x20,0x30,0x18,0x0C,0x06,0x06,0x0C,0x18,0x30,0x20,0x00,0x00,0x00,0x00,  // >
0x00,0x3E,0x7F,0x63,0x03,0x06,0x0C,0x18,0x18,0x00,0x00,0x18,0x18,0x00,0x00,0x00,  // ?

0x00,0x3E,0x7F,0x63,0x43,0x4F,0x5B,0x53,0x5F,0x4E,0x60,0x7F,0x3E,0x00,0x00,0x00,  // @
0x00,0x08,0x1C,0x1C,0x36,0x36,0x36,0x63,0x63,0x7F,0x7F,0x63,0x63,0x00,0x00,0x00,  // A
0x00,0x7E,0x7F,0x63,0x63,0x63,0x7E,0x7E,0x63,0x63,0x63,0x7F,0x7E,0x00,0x00,0x00,  // B
0x00,0x3E,0x7F,0x63,0x60,0x60,0x60,0x60,0x60,0x60,0x63,0x7F,0x3E,0x00,0x00,0x00,  // C
0x00,0x7E,0x7F,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x7F,0x7E,0x00,0x00,0x00,  // D
0x00,0x7F,0x7F,0x60,0x60,0x60,0x7C,0x7C,0x60,0x60,0x60,0x7F,0x7F,0x00,0x00,0x00,  // E
0x00,0x7F,0x7F,0x60,0x60,0x60,0x7C,0x7C,0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,  // F
0x00,0x3E,0x7F,0x63,0x60,0x60,0x6F,0x6F,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // G
0x00,0x63,0x63,0x63,0x63,0x63,0x7F,0x7F,0x63,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // H
0x00,0x3C,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x3C,0x00,0x00,0x00,  // I
0x00,0x1E,0x1E,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x6C,0x7C,0x38,0x00,0x00,0x00,  // J
0x00,0x63,0x63,0x66,0x66,0x6C,0x7C,0x7C,0x6C,0x66,0x66,0x63,0x63,0x00,0x00,0x00,  // K
0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,0x7F,0x00,0x00,0x00,  // L
0x00,0x63,0x77,0x7F,0x6B,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // M
0x00,0x43,0x63,0x73,0x7B,0x7F,0x6F,0x67,0x63,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // N
0x00,0x3E,0x7F,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // O

0x00,0x7E,0x7F,0x63,0x63,0x63,0x7F,0x7E,0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,  // P
0x00,0x3E,0x7F,0x63,0x63,0x63,0x63,0x63,0x6B,0x6F,0x67,0x7E,0x3B,0x00,0x00,0x00,  // Q
0x00,0x7E,0x7F,0x63,0x63,0x63,0x7F,0x7E,0x7C,0x66,0x63,0x63,0x63,0x00,0x00,0x00,  // R
0x00,0x3E,0x7F,0x63,0x60,0x70,0x3C,0x0E,0x07,0x03,0x63,0x7F,0x3E,0x00,0x00,0x00,  // S
0x00,0x7E,0x7E,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,  // T
0x00,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // U
0x00,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x36,0x1C,0x08,0x00,0x00,0x00,  // V
0x00,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00,0x00,0x00,  // W
0x00,0x63,0x63,0x63,0x36,0x36,0x1C,0x1C,0x36,0x36,0x63,0x63,0x63,0x00,0x00,0x00,  // X
0x00,0x63,0x63,0x36,0x36,0x1C,0x1C,0x18,0x18,0x30,0x30,0x60,0x60,0x00,0x00,0x00,  // Y
0x00,0x7F,0x7F,0x06,0x06,0x0C,0x0C,0x18,0x18,0x30,0x30,0x7F,0x7F,0x00,0x00,0x00,  // Z
0x00,0x3E,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3E,0x00,0x00,0x00,  // [
0x00,0x60,0x60,0x30,0x30,0x18,0x18,0x0C,0x0C,0x06,0x06,0x03,0x03,0x00,0x00,0x00,  // <backslash>
0x00,0x3E,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x3E,0x00,0x00,0x00,  // ]
0x00,0x18,0x3C,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x00,0x00,0x00,  // _

0x00,0x18,0x18,0x18,0x10,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0x63,0x63,0x63,0x67,0x7F,0x3B,0x00,0x00,0x00,  // a
0x00,0x60,0x60,0x60,0x60,0x7E,0x7F,0x63,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x3E,0x7F,0x63,0x60,0x60,0x63,0x7F,0x3E,0x00,0x00,0x00,  // c
0x00,0x03,0x03,0x03,0x03,0x3F,0x7F,0x63,0x63,0x63,0x67,0x7F,0x3B,0x00,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x3E,0x7F,0x63,0x63,0x7F,0x60,0x7F,0x3E,0x00,0x00,0x00,  // e
0x00,0x0C,0x1C,0x18,0x18,0x3C,0x3C,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0x63,0x63,0x63,0x63,0x7F,0x3F,0x03,0x3E,0x1C,  // g
0x00,0x60,0x60,0x60,0x60,0x6E,0x7F,0x73,0x63,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // h
0x00,0x18,0x18,0x00,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,  // i
0x00,0x0C,0x0C,0x00,0x00,0x1C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x18,0x38,0x30,  // j
0x00,0x60,0x60,0x60,0x60,0x66,0x6E,0x7C,0x78,0x7C,0x6E,0x67,0x63,0x00,0x00,0x00,  // k
0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x0E,0x0E,0x00,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0x6E,0x7F,0x6B,0x6B,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0x6E,0x7F,0x73,0x63,0x63,0x63,0x63,0x63,0x00,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x3E,0x7F,0x63,0x63,0x63,0x63,0x7F,0x3E,0x00,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0x7E,0x7F,0x63,0x63,0x63,0x63,0x7F,0x7E,0x60,0x60,0x60,  // p
0x00,0x00,0x00,0x00,0x00,0x3F,0x7F,0x63,0x63,0x63,0x63,0x7F,0x3F,0x03,0x03,0x03,  // q
0x00,0x00,0x00,0x00,0x00,0x36,0x3E,0x38,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x3E,0x7F,0x60,0x7E,0x3F,0x03,0x7F,0x3E,0x00,0x00,0x00,  // s
0x00,0x18,0x18,0x18,0x18,0x3C,0x3C,0x18,0x18,0x18,0x18,0x0C,0x0C,0x00,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x67,0x7F,0x3B,0x00,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x36,0x1C,0x08,0x00,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x36,0x1C,0x1C,0x36,0x63,0x63,0x00,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0x63,0x63,0x63,0x63,0x63,0x67,0x7F,0x3B,0x03,0x3E,0x1C,  // y
0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x06,0x0C,0x18,0x30,0x7F,0x7F,0x00,0x00,0x00,  // z
0x00,0x0E,0x18,0x18,0x0C,0x1C,0x38,0x1C,0x0C,0x18,0x18,0x18,0x0E,0x00,0x00,0x00,  // {
0x00,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,  // |
0x00,0x38,0x0C,0x0C,0x18,0x1C,0x0E,0x1C,0x18,0x0C,0x0C,0x0C,0x38,0x00,0x00,0x00,  // }
0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x7F,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00   // ~
};


// SourceCodePro_11.c
// Font type    : Full (95 characters)
// Font size    : 8x16 pixels
// Memory usage : 1524 bytes

bitmapMatrixFont SourceCodePro_11[1524] PROGMEM={
0x08,0x10,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x38,0x38,0x00,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x00,0x78,0x78,0x78,0x78,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x00,0x00,0x00,0x2C,0x28,0x7C,0x7C,0xFC,0xFC,0x78,0x00,0x00,0x00,0x00,  // #
0x00,0x00,0x00,0x00,0x30,0x7C,0x7C,0x78,0x3C,0xEC,0xFC,0x30,0x30,0x00,0x00,0x00,  // $
0x00,0x00,0x00,0x00,0xF0,0xFE,0xFC,0xF8,0x7C,0x7C,0xFC,0xFC,0x00,0x00,0x00,0x00,  // %
0x00,0x00,0x00,0x00,0x00,0x78,0x78,0x78,0xF6,0xFC,0xFC,0xFE,0x00,0x00,0x00,0x00,  // &
0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x00,0x1C,0x18,0x30,0x30,0x30,0x30,0x30,0x30,0x18,0x1C,0x00,0x00,  // (
0x00,0x00,0x00,0x00,0x60,0x70,0x30,0x18,0x18,0x18,0x18,0x30,0x70,0x60,0x00,0x00,  // )
0x00,0x00,0x00,0x00,0x30,0x7C,0x7C,0x38,0x78,0x28,0x00,0x00,0x00,0x00,0x00,0x00,  // *
0x00,0x00,0x00,0x00,0x00,0x30,0x30,0x30,0xFC,0xFC,0x30,0x30,0x00,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x18,0x30,0x20,0x00,  // ,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x00,0x00,0x00,0x00,  // .
0x00,0x00,0x00,0x00,0x0C,0x1C,0x18,0x18,0x30,0x30,0x30,0x60,0x60,0x60,0x00,0x00,  // /

0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xCC,0xFC,0xFC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // 0
0x00,0x00,0x00,0x00,0x00,0x70,0x70,0x10,0x10,0x10,0x10,0x7C,0x00,0x00,0x00,0x00,  // 1
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0x0C,0x1C,0x38,0x70,0xFC,0x00,0x00,0x00,0x00,  // 2
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0x1C,0x3C,0x3C,0xFC,0xFC,0x00,0x00,0x00,0x00,  // 3
0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x78,0xF8,0xFC,0xFC,0x18,0x00,0x00,0x00,0x00,  // 4
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0x7C,0x0C,0xFC,0xFC,0x00,0x00,0x00,0x00,  // 5
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0xE0,0xFC,0xFC,0xEC,0x7C,0x00,0x00,0x00,0x00,  // 6
0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x18,0x38,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // 7
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0x7C,0xFC,0xEC,0xFC,0x00,0x00,0x00,0x00,  // 8
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xFC,0xFC,0x3C,0xFC,0xF8,0x00,0x00,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x30,0x00,0x38,0x38,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x30,0x00,0x38,0x38,0x18,0x30,0x20,0x00,  // ;
0x00,0x00,0x00,0x00,0x00,0x0C,0x3C,0x78,0x60,0x70,0x3C,0x0C,0x00,0x00,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x00,0x00,0x00,0x60,0x70,0x3C,0x1C,0x3C,0x70,0x60,0x00,0x00,0x00,0x00,  // >
0x00,0x00,0x00,0x00,0x7C,0x7C,0x1C,0x38,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // ?

0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xFC,0xFC,0xFC,0xFC,0xD8,0xFC,0x7C,0x00,0x00,  // @
0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x78,0x7C,0x7C,0xFC,0xCE,0x00,0x00,0x00,0x00,  // A
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x7C,0x00,0x00,0x00,0x00,  // B
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xE0,0xC0,0xC0,0xFE,0x7C,0x00,0x00,0x00,0x00,  // C
0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xCC,0xC4,0xCC,0xDC,0xFC,0x00,0x00,0x00,0x00,  // D
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x60,0x7C,0x7C,0x60,0x7C,0x00,0x00,0x00,0x00,  // E
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x60,0x7C,0x7C,0x60,0x60,0x00,0x00,0x00,0x00,  // F
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xC0,0xDC,0xDC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // G
0x00,0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0xFC,0xFC,0xCC,0xCC,0x00,0x00,0x00,0x00,  // H
0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x30,0x30,0x30,0x30,0xFC,0x00,0x00,0x00,0x00,  // I
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x0C,0x0C,0x0C,0xFC,0x7C,0x00,0x00,0x00,0x00,  // J
0x00,0x00,0x00,0x00,0x00,0x4E,0x5C,0x78,0x78,0x7C,0x4C,0x4E,0x00,0x00,0x00,0x00,  // K
0x00,0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x7C,0x00,0x00,0x00,0x00,  // L
0x00,0x00,0x00,0x00,0x00,0xEC,0xEC,0xFC,0xFC,0xFC,0xFC,0xCC,0x00,0x00,0x00,0x00,  // M
0x00,0x00,0x00,0x00,0x00,0xEC,0xEC,0xFC,0xFC,0xDC,0xDC,0xCC,0x00,0x00,0x00,0x00,  // N
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xCC,0xC6,0xCC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // O

0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x5C,0x7C,0x78,0x40,0x40,0x00,0x00,0x00,0x00,  // P
0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xCC,0xC4,0xCC,0xFC,0x7C,0x3C,0x1E,0x00,0x00,  // Q
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x5C,0x7C,0x78,0x5C,0x4E,0x00,0x00,0x00,0x00,  // R
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x70,0x7C,0x1C,0xEC,0xFC,0x00,0x00,0x00,0x00,  // S
0x00,0x00,0x00,0x00,0x00,0xFE,0xFE,0x30,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // T
0x00,0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // U
0x00,0x00,0x00,0x00,0x00,0xCE,0xCC,0x6C,0x7C,0x78,0x38,0x38,0x00,0x00,0x00,0x00,  // V
0x00,0x00,0x00,0x00,0x00,0xC6,0xC6,0xF6,0xFC,0xFC,0xFC,0x6C,0x00,0x00,0x00,0x00,  // W
0x00,0x00,0x00,0x00,0x00,0xEC,0x7C,0x78,0x38,0x78,0x7C,0xEC,0x00,0x00,0x00,0x00,  // X
0x00,0x00,0x00,0x00,0x00,0xCE,0xEC,0x7C,0x78,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // Y
0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x18,0x38,0x70,0xE0,0xFC,0x00,0x00,0x00,0x00,  // Z
0x00,0x00,0x00,0x00,0x3C,0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,0x3C,0x00,0x00,  // [
0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x30,0x30,0x30,0x18,0x18,0x1C,0x0C,0x00,0x00,  // <backslash>
0x00,0x00,0x00,0x00,0x78,0x78,0x18,0x18,0x18,0x18,0x18,0x18,0x78,0x78,0x00,0x00,  // ]
0x00,0x00,0x00,0x00,0x00,0x38,0x38,0x78,0x6C,0x4C,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0x00,0x00,  // _

0x00,0x00,0x00,0x00,0x70,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0xFC,0xFC,0x00,0x00,0x00,0x00,  // a
0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xFC,0xFC,0xCC,0xFC,0xFC,0x00,0x00,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xC0,0xFC,0x7C,0x00,0x00,0x00,0x00,  // c
0x00,0x00,0x00,0x00,0x0C,0x0C,0x0C,0x7C,0xFC,0xCC,0xFC,0xFC,0x00,0x00,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xFC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // e
0x00,0x00,0x00,0x00,0x3E,0x3E,0x30,0x7C,0x7C,0x30,0x30,0x30,0x00,0x00,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x7E,0x7C,0x70,0x7E,0xFE,0xFC,0x00,0x00,  // g
0x00,0x00,0x00,0x00,0xC0,0xC0,0xC0,0xFC,0xFC,0xCC,0xCC,0xCC,0x00,0x00,0x00,0x00,  // h
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0xF8,0xF8,0x18,0x18,0x18,0x00,0x00,0x00,0x00,  // i
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0xF8,0xF8,0x18,0x18,0x18,0xF8,0xF8,0x00,0x00,  // j
0x00,0x00,0x00,0x00,0x60,0x60,0x60,0x7C,0x78,0x78,0x7C,0x6E,0x00,0x00,0x00,0x00,  // k
0x00,0x00,0x00,0x00,0xF0,0xF0,0x30,0x30,0x30,0x30,0x3C,0x3C,0x00,0x00,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFE,0xF6,0xF6,0xF6,0x00,0x00,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xCC,0xCC,0xCC,0x00,0x00,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xCC,0xFC,0x7C,0x00,0x00,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xCC,0xFC,0xFC,0xC0,0xC0,0x00,0x00,  // p
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0xCC,0xFC,0xFC,0x0C,0x0C,0x00,0x00,  // q
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x60,0x60,0x60,0x00,0x00,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x7C,0xFC,0xFC,0x00,0x00,0x00,0x00,  // s
0x00,0x00,0x00,0x00,0x00,0x30,0x30,0xFC,0xFC,0x30,0x34,0x3C,0x00,0x00,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0xFC,0xFC,0x00,0x00,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCC,0x6C,0x7C,0x78,0x38,0x00,0x00,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF6,0xFE,0xFC,0xFC,0xFC,0x00,0x00,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xEC,0x78,0x38,0x7C,0xEC,0x00,0x00,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xCE,0xEC,0x7C,0x78,0x38,0xF0,0xF0,0x00,0x00,  // y
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x7C,0x38,0x70,0xFC,0x00,0x00,0x00,0x00,  // z
0x00,0x00,0x00,0x00,0x3C,0x3C,0x30,0x30,0x70,0x70,0x30,0x30,0x3C,0x3C,0x00,0x00,  // {
0x00,0x00,0x00,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,  // |
0x00,0x00,0x00,0x00,0x70,0x70,0x30,0x38,0x3C,0x3C,0x30,0x30,0x70,0x70,0x00,0x00,  // }
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0xFC,0x58,0x00,0x00,0x00,0x00,0x00,  // ~
};
*/

// Retro8x16.c
// Font type    : Full (95 characters)
// Font size    : 8x16 pixels
// Memory usage : 1524 bytes

bitmapMatrixFont Retro8x16[1524] = {
    0x08, 0x10, 0x20, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00,                                                                         // <space>
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, // !
    0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // "
    0x24, 0x24, 0x24, 0x24, 0x7E, 0x7E, 0x24, 0x24, 0x7E, 0x7E, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00, // #
    0x10, 0x10, 0x3C, 0x3C, 0x50, 0x50, 0x38, 0x38, 0x14, 0x14, 0x78, 0x78, 0x10, 0x10, 0x00, 0x00, // $
    0x00, 0x00, 0x62, 0x62, 0x64, 0x64, 0x08, 0x08, 0x10, 0x10, 0x26, 0x26, 0x46, 0x46, 0x00, 0x00, // %
    0x30, 0x30, 0x48, 0x48, 0x48, 0x48, 0x30, 0x30, 0x4A, 0x4A, 0x44, 0x44, 0x3A, 0x3A, 0x00, 0x00, // &
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // '
    0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x00, 0x00, // (
    0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, // )
    0x10, 0x10, 0x54, 0x54, 0x38, 0x38, 0x10, 0x10, 0x38, 0x38, 0x54, 0x54, 0x10, 0x10, 0x00, 0x00, // *
    0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x7C, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, // +
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, // ,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // -
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, // .
    0x00, 0x00, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x00, 0x00, // /

    0x3C, 0x3C, 0x42, 0x42, 0x46, 0x46, 0x5A, 0x5A, 0x62, 0x62, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // 0
    0x08, 0x08, 0x18, 0x18, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C, 0x1C, 0x00, 0x00, // 1
    0x3C, 0x3C, 0x42, 0x42, 0x02, 0x02, 0x1C, 0x1C, 0x20, 0x20, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, // 2
    0x7E, 0x7E, 0x02, 0x02, 0x04, 0x04, 0x1C, 0x1C, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // 3
    0x04, 0x04, 0x0C, 0x0C, 0x14, 0x14, 0x24, 0x24, 0x7E, 0x7E, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00, // 4
    0x7E, 0x7E, 0x40, 0x40, 0x7C, 0x7C, 0x02, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // 5
    0x1E, 0x1E, 0x20, 0x20, 0x40, 0x40, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // 6
    0x7E, 0x7E, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, // 7
    0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // 8
    0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x02, 0x02, 0x04, 0x04, 0x78, 0x78, 0x00, 0x00, // 9
    0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // :
    0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x08, 0x08, 0x08, 0x08, 0x10, 0x00, 0x00, 0x00, // ;
    0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x00, 0x00, // <
    0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x00, 0x00, 0x7E, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // =
    0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x00, 0x00, // >
    0x20, 0x20, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ?

    0x3C, 0x3C, 0x42, 0x42, 0x4A, 0x4A, 0x56, 0x56, 0x4C, 0x4C, 0x40, 0x40, 0x3E, 0x3E, 0x00, 0x00, // @
    0x18, 0x18, 0x24, 0x24, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // A
    0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x00, 0x00, // B
    0x3C, 0x3C, 0x42, 0x42, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // C
    0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x00, 0x00, // D
    0x7E, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, // E
    0x7E, 0x7E, 0x40, 0x40, 0x40, 0x40, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, // F
    0x3E, 0x3E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x4E, 0x4E, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x00, 0x00, // G
    0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7E, 0x7E, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // H
    0x38, 0x38, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x38, 0x00, 0x00, // I
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // J
    0x42, 0x42, 0x44, 0x44, 0x48, 0x48, 0x70, 0x70, 0x48, 0x48, 0x44, 0x44, 0x42, 0x42, 0x00, 0x00, // K
    0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, // L
    0x42, 0x42, 0x66, 0x66, 0x5A, 0x5A, 0x5A, 0x5A, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // M
    0x42, 0x42, 0x62, 0x62, 0x52, 0x52, 0x5A, 0x5A, 0x4A, 0x4A, 0x46, 0x46, 0x42, 0x42, 0x00, 0x00, // N
    0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // O

    0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, // P
    0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x4A, 0x4A, 0x44, 0x44, 0x3A, 0x3A, 0x00, 0x00, // Q
    0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x48, 0x48, 0x44, 0x44, 0x42, 0x42, 0x00, 0x00, // R
    0x3C, 0x3C, 0x42, 0x42, 0x40, 0x40, 0x3C, 0x3C, 0x02, 0x02, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // S
    0x7C, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, // T
    0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // U
    0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x00, 0x00, // V
    0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x5A, 0x5A, 0x5A, 0x5A, 0x66, 0x66, 0x42, 0x42, 0x00, 0x00, // W
    0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x24, 0x24, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // X
    0x44, 0x44, 0x44, 0x44, 0x28, 0x28, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, // Y
    0x7E, 0x7E, 0x02, 0x02, 0x04, 0x04, 0x18, 0x18, 0x20, 0x20, 0x40, 0x40, 0x7E, 0x7E, 0x00, 0x00, // Z
    0x7E, 0x7E, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E, 0x7E, 0x00, 0x00, // [
    0x00, 0x00, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x00, 0x00, // <backslash>
    0x7E, 0x7E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x7E, 0x7E, 0x00, 0x00, // ]
    0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x28, 0x28, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ^
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x00, 0x00, // _

    0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // `
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x02, 0x02, 0x3E, 0x3E, 0x42, 0x42, 0x3E, 0x3E, 0x00, 0x00, // a
    0x40, 0x40, 0x40, 0x40, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x00, 0x00, // b
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3E, 0x3E, 0x00, 0x00, // c
    0x02, 0x02, 0x02, 0x02, 0x3E, 0x3E, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x00, 0x00, // d
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42, 0x42, 0x7E, 0x7E, 0x40, 0x40, 0x3E, 0x3E, 0x00, 0x00, // e
    0x1C, 0x1C, 0x22, 0x22, 0x20, 0x20, 0x7C, 0x7C, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, // f
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x02, 0x02, 0x3C, 0x3C, // g
    0x40, 0x40, 0x40, 0x40, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // h
    0x10, 0x10, 0x00, 0x00, 0x30, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x38, 0x00, 0x00, // i
    0x04, 0x04, 0x00, 0x00, 0x3C, 0x3C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x44, 0x44, 0x38, 0x38, // j
    0x40, 0x40, 0x40, 0x40, 0x42, 0x42, 0x44, 0x44, 0x78, 0x78, 0x44, 0x44, 0x42, 0x42, 0x00, 0x00, // k
    0x30, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x38, 0x38, 0x00, 0x00, // l
    0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x42, 0x42, 0x00, 0x00, // m
    0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00, 0x00, // n
    0x00, 0x00, 0x00, 0x00, 0x3C, 0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x3C, 0x00, 0x00, // o

    0x00, 0x00, 0x00, 0x00, 0x7C, 0x7C, 0x42, 0x42, 0x42, 0x42, 0x7C, 0x7C, 0x40, 0x40, 0x40, 0x40, // p
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x02, 0x02, 0x02, 0x02, // q
    0x00, 0x00, 0x00, 0x00, 0x5E, 0x5E, 0x60, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00, 0x00, // r
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x3E, 0x40, 0x40, 0x3C, 0x3C, 0x02, 0x02, 0x7C, 0x7C, 0x00, 0x00, // s
    0x10, 0x10, 0x10, 0x10, 0x7C, 0x7C, 0x10, 0x10, 0x10, 0x10, 0x12, 0x12, 0x0C, 0x0C, 0x00, 0x00, // t
    0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x46, 0x46, 0x3A, 0x3A, 0x00, 0x00, // u
    0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x00, 0x00, // v
    0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x5A, 0x5A, 0x5A, 0x5A, 0x66, 0x66, 0x00, 0x00, // w
    0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x24, 0x24, 0x18, 0x18, 0x24, 0x24, 0x42, 0x42, 0x00, 0x00, // x
    0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3E, 0x3E, 0x02, 0x02, 0x3C, 0x3C, // y
    0x00, 0x00, 0x00, 0x00, 0x7E, 0x7E, 0x04, 0x04, 0x18, 0x18, 0x20, 0x20, 0x7E, 0x7E, 0x00, 0x00, // z
    0x0E, 0x0E, 0x18, 0x18, 0x18, 0x18, 0x70, 0x70, 0x18, 0x18, 0x18, 0x18, 0x0E, 0x0E, 0x00, 0x00, // {
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00, 0x00, // |
    0x70, 0x70, 0x18, 0x18, 0x18, 0x18, 0x0E, 0x0E, 0x18, 0x18, 0x18, 0x18, 0x70, 0x70, 0x00, 0x00, // }
    0x00, 0x00, 0x00, 0x00, 0x24, 0x24, 0x54, 0x54, 0x48, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ~
};
