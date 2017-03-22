
#ifndef TINYFONT_SPRITE_H
#define TINYFONT_SPRITE_H

#include <avr/io.h>
#include <avr/pgmspace.h>

const unsigned char PROGMEM TINYFONT_SPRITE[] =
{
// TILE 00
0x10, 0x00, 0x10, 0x00, 0xa0, 0x7b, 0xe0, 0x50,
// TILE 01
0xf6, 0xdf, 0x76, 0xc0, 0x09, 0x14, 0x02, 0x09,
// TILE 02
0xa0, 0x46, 0xa9, 0x00, 0x40, 0xe9, 0x46, 0x00,
// TILE 03
0x00, 0x82, 0x01, 0x00, 0x84, 0x64, 0x14, 0x00,
// TILE 04
0x9f, 0xd9, 0xb9, 0x9f, 0x90, 0xb9, 0xbf, 0xf8,
// TILE 05
0xf7, 0xa4, 0xa4, 0xef, 0x17, 0x1d, 0x1d, 0xfd,
// TILE 06
0x0f, 0xad, 0x0d, 0x0f, 0x87, 0xa5, 0x05, 0x0f,
// TILE 07
0x00, 0xa4, 0x4a, 0x00, 0x1a, 0xba, 0x3a, 0x00,
// TILE 08
0xff, 0xb9, 0xb3, 0xe3, 0xff, 0x95, 0x95, 0x9f,
// TILE 09
0xff, 0x59, 0x59, 0x16, 0xff, 0x9b, 0x9b, 0xd9,
// TILE 10
0xcf, 0x94, 0xf4, 0x1f, 0xf9, 0x2f, 0x59, 0x90,
// TILE 11
0xff, 0x28, 0x48, 0xf8, 0xff, 0x91, 0x93, 0xff,
// TILE 12
0xff, 0x55, 0xd5, 0x77, 0x7f, 0xd9, 0xdd, 0xdf,
// TILE 13
0x71, 0x8f, 0x81, 0x71, 0xff, 0x88, 0xc8, 0xff,
// TILE 14
0x99, 0xd6, 0xb6, 0x99, 0x07, 0xfc, 0x94, 0x07,
// TILE 15
0x21, 0x16, 0x28, 0x00, 0x80, 0x89, 0x8f, 0x80,
// TILE 16
0x70, 0x61, 0x62, 0x00, 0x75, 0x57, 0x56, 0x00,
// TILE 17
0x26, 0x76, 0x37, 0x10, 0xa7, 0xb7, 0x73, 0x00,
// TILE 18
0x87, 0x72, 0x06, 0x00, 0x70, 0x27, 0x50, 0x00,
// TILE 19
0x73, 0x14, 0x64, 0x00, 0x77, 0x53, 0x77, 0x00,
// TILE 20
0x7f, 0x15, 0x07, 0x00, 0x47, 0x75, 0x1f, 0x00,
// TILE 21
0x32, 0x47, 0x32, 0x00, 0x73, 0x64, 0x77, 0x00,
// TILE 22
0x15, 0x72, 0x45, 0x00, 0x61, 0x6a, 0x97, 0x00,
// TILE 23
0x40, 0x2f, 0x60, 0x20, 0xf0, 0x99, 0x96, 0xf6,
};

const unsigned char PROGMEM TINYFONT_MASK[] =
{
// TILE 00
0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00,
// TILE 01
0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f,
// TILE 02
0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
// TILE 03
0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0,
};

#endif
