#ifndef ICON_BITMAPS_H
#define ICON_BITMAPS_H
#include <pgmspace.h>

#define ICON_WIDTH 40
#define ICON_HEIGHT 40

// 'moon', 40x40px
const unsigned char icons_moon [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0xff, 0x00, 0x08, 0x00, 0x80, 0x7f, 0x00, 0x08, 0x00, 0xe0, 0x3f, 0x00, 0x00, 0x00, 0xf8, 0x0f, 
	0x00, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0x08, 0xfe, 0x03, 0x10, 0x00, 0x00, 0xfe, 0x01, 0x00, 
	0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x80, 0xff, 0x10, 0x00, 0x10, 0x80, 0x7f, 0x00, 0x80, 0x01, 
	0xc0, 0x7f, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x00, 0x00, 0xc0, 0x7f, 0x00, 0x04, 0x00, 0xc0, 
	0x7f, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x00, 0x00, 0x00, 0xc2, 0xff, 0x20, 0x00, 0x10, 0xc0, 0xff, 
	0x01, 0x00, 0x00, 0xc0, 0xff, 0x03, 0x80, 0x01, 0x80, 0xff, 0x03, 0xc0, 0x00, 0x00, 0xff, 0x07, 
	0xe0, 0x00, 0x00, 0xff, 0x1f, 0xf8, 0x00, 0x00, 0xfe, 0xbf, 0x7e, 0x00, 0x00, 0xfe, 0xff, 0x7f, 
	0x00, 0x10, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0xe0, 0xff, 0x07, 0x00, 
	0x00, 0xc0, 0xff, 0x03, 0x08, 0x00, 0x00, 0xff, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'smiley', 40x40px
const unsigned char icons_smiley [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0x00, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0x00, 0xf8, 
	0xff, 0x1f, 0x00, 0x00, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0xfe, 0xff, 0x7f, 0x00, 0x00, 0xff, 0xff, 
	0xff, 0x00, 0x80, 0xff, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xe0, 0x03, 0xff, 0xc0, 
	0x07, 0xe0, 0x11, 0x7e, 0x88, 0x07, 0xe0, 0xf9, 0x3c, 0x9f, 0x07, 0xf0, 0xfd, 0x3c, 0xbf, 0x0f, 
	0xf0, 0xfd, 0x3c, 0xbf, 0x0f, 0xf0, 0xfd, 0x3c, 0xbf, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xf0, 
	0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 
	0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xfb, 0xff, 0x3f, 0x0f, 0xe0, 0xf3, 0xff, 
	0x1f, 0x07, 0xe0, 0xe7, 0xff, 0x8f, 0x07, 0xe0, 0x8f, 0xff, 0xc7, 0x07, 0xc0, 0x3f, 0xfe, 0xf0, 
	0x03, 0x80, 0x7f, 0x00, 0xf8, 0x01, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0xfe, 0xff, 0x7f, 0x00, 
	0x00, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0xf8, 0xff, 0x1f, 0x00, 0x00, 0xf0, 0xff, 0x0f, 0x00, 0x00, 
	0x80, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'sunglasses', 40x40px
const unsigned char icons_sunglasses [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x01, 0x00, 0x00, 0x80, 0xff, 0x01, 0x00, 0x00, 0xfc, 
	0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 
	0xff, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 0xff, 
	0x03, 0xc0, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0e, 
	0x00, 0x00, 0x00, 0x00, 0x0e, 0x70, 0xf0, 0x19, 0x3c, 0x0e, 0x70, 0xc0, 0x19, 0x30, 0x0e, 0x70, 
	0xc0, 0x19, 0x30, 0x0e, 0x70, 0xc0, 0x19, 0x30, 0x0e, 0xf0, 0x00, 0x18, 0x00, 0x0f, 0xf0, 0x07, 
	0x7e, 0xc0, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0xff, 0xff, 
	0xff, 0x03, 0xc0, 0xcf, 0xff, 0xff, 0x03, 0xc0, 0x0f, 0x00, 0xff, 0x03, 0xc0, 0x1f, 0x00, 0xff, 
	0x03, 0xc0, 0x3f, 0x00, 0xff, 0x03, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 0x3f, 0x00, 0x00, 0x80, 0xff, 0x01, 0x00, 0x00, 
	0x80, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'fire', 40x40px
const unsigned char icons_fire [] PROGMEM = {
	0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x40, 0x00, 0x00, 0x00, 0x08, 
	0x22, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x08, 0xaa, 0x00, 0x00, 0x00, 0x04, 0x44, 
	0x00, 0x00, 0x00, 0x08, 0xa8, 0x02, 0x02, 0x00, 0x10, 0x50, 0x01, 0x00, 0x00, 0x08, 0xa8, 0x8a, 
	0x00, 0x00, 0x00, 0xd0, 0xc5, 0x00, 0x00, 0x00, 0xa8, 0xa2, 0x00, 0x00, 0x00, 0xf4, 0x41, 0x00, 
	0x00, 0x20, 0xaa, 0xaa, 0x00, 0x00, 0x40, 0xdc, 0x41, 0x00, 0x00, 0xa0, 0xa8, 0x22, 0x00, 0x00, 
	0x40, 0x70, 0x11, 0x00, 0x80, 0xa0, 0xa8, 0xa8, 0x02, 0x40, 0x40, 0xdc, 0x59, 0x00, 0x80, 0xa8, 
	0xa8, 0xaa, 0x02, 0x00, 0x51, 0xf0, 0x1f, 0x01, 0x80, 0xaa, 0xa8, 0x8a, 0x00, 0x00, 0x54, 0xdd, 
	0x5d, 0x00, 0x00, 0xaa, 0xaa, 0xaa, 0x00, 0x00, 0xf4, 0xff, 0x7f, 0x01, 0x00, 0xea, 0xaa, 0xaa, 
	0x02, 0x00, 0xdc, 0xdd, 0xff, 0x05, 0x80, 0xaa, 0xba, 0xaa, 0x02, 0x00, 0xfd, 0xff, 0xff, 0x05, 
	0x80, 0xea, 0xfa, 0xba, 0x02, 0x00, 0xfd, 0xff, 0xff, 0x05, 0x80, 0xea, 0xbf, 0xbf, 0x02, 0x00, 
	0xf4, 0xff, 0x7f, 0x01, 0x00, 0xe8, 0xff, 0xaf, 0x00, 0x00, 0xd0, 0xff, 0x5f, 0x00, 0x00, 0xa0, 
	0xfe, 0x2b, 0x00, 0x00, 0x40, 0xff, 0x17, 0x00
};
// 'demon', 40x40px
const unsigned char icons_demon [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x00, 0x00, 0x80, 0x89, 0x00, 0x00, 0x00, 
	0x80, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x09, 0x00, 0x00, 0x40, 
	0x8e, 0x00, 0x00, 0x00, 0x41, 0x82, 0x00, 0x00, 0x80, 0x21, 0x86, 0x11, 0x02, 0x80, 0x20, 0x87, 
	0x31, 0x06, 0x00, 0x60, 0xc7, 0x31, 0x06, 0x00, 0x60, 0xe7, 0x31, 0x00, 0x00, 0xc0, 0xe7, 0x31, 
	0x00, 0x00, 0xc6, 0xe7, 0x18, 0x00, 0x00, 0x8c, 0xe7, 0x9c, 0x00, 0x30, 0x98, 0xff, 0x0f, 0x0c, 
	0x70, 0xf8, 0xff, 0x4f, 0x0e, 0x70, 0xf8, 0xff, 0x6f, 0x0e, 0x20, 0xf8, 0xff, 0x3f, 0x04, 0x60, 
	0xfc, 0xff, 0x1f, 0x06, 0xc0, 0x8c, 0xff, 0x18, 0x03, 0x80, 0x6d, 0x3e, 0xfb, 0x01, 0x00, 0xef, 
	0xdd, 0xfb, 0x00, 0x00, 0x1f, 0x1c, 0x7c, 0x00, 0x00, 0xfe, 0xff, 0x3f, 0x00, 0x00, 0xfc, 0xff, 
	0x3f, 0x00, 0x00, 0xbc, 0x73, 0x3c, 0x00, 0x00, 0x1c, 0x00, 0x19, 0x00, 0x00, 0xdc, 0xcc, 0x1b, 
	0x00, 0x00, 0xd8, 0xff, 0x09, 0x00, 0x00, 0xd8, 0x38, 0x0d, 0x00, 0x00, 0x30, 0x83, 0x0c, 0x00, 
	0x00, 0xf8, 0xef, 0x1f, 0x00, 0x00, 0x1c, 0xff, 0x39, 0x00, 0x00, 0x0c, 0x00, 0x30, 0x00, 0x00, 
	0x06, 0x00, 0x60, 0x00, 0x00, 0x06, 0x00, 0x60, 0x00, 0x00, 0x03, 0x00, 0xc0, 0x00, 0xc0, 0x03, 
	0x00, 0xc0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'skull', 40x40px
const unsigned char icons_skull [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x01, 0x00, 0x00, 0xf0, 
	0xff, 0x0f, 0x00, 0x00, 0xfc, 0xff, 0x1f, 0x00, 0x00, 0xfe, 0xff, 0x3f, 0x00, 0x00, 0xff, 0xff, 
	0x7f, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x80, 0xff, 0xff, 0xff, 0x00, 0xc0, 0xff, 0xff, 0xff, 
	0x01, 0xc0, 0xff, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0xff, 0x01, 0xe0, 0xfe, 0xff, 0xff, 0x03, 
	0xe0, 0xfc, 0xc3, 0x0f, 0x03, 0xe0, 0xf9, 0x83, 0x0f, 0x07, 0xe0, 0xf9, 0x81, 0x0f, 0x06, 0xc0, 
	0xf9, 0x81, 0x0f, 0x06, 0xc0, 0xfb, 0x81, 0x0f, 0x06, 0xc0, 0xfb, 0x83, 0x0f, 0x07, 0x80, 0xff, 
	0x83, 0x9f, 0x07, 0x80, 0xff, 0xc7, 0xff, 0x03, 0x00, 0xff, 0xff, 0xed, 0x03, 0x00, 0xfe, 0xff, 
	0xff, 0x03, 0x00, 0xfc, 0xff, 0xff, 0x03, 0x00, 0xf8, 0xff, 0xff, 0x07, 0x00, 0xe0, 0xff, 0xff, 
	0x07, 0x00, 0x80, 0xff, 0xbf, 0x03, 0x00, 0x00, 0x7f, 0xff, 0x03, 0x00, 0x00, 0xff, 0xff, 0x01, 
	0x00, 0x00, 0xfe, 0x3e, 0x00, 0x00, 0x00, 0xfc, 0x1e, 0x00, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1344)
const int icons_allArray_LEN = 6;
const unsigned char* icons_allArray[6] = {
	icons_demon,
	icons_fire,
	icons_moon,
	icons_skull,
	icons_smiley,
	icons_sunglasses
};



#endif