#line 1 "D:\\Projects\\Arduino Projects\\NanoBoii\\MenuButton.h"
#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#define FRAME_WIDTH 32
#define FRAME_HEIGHT 32

// 'PlayButton Normal', 32x32px
const unsigned char PlayButton_Normal [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x06, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0xc2, 0xff, 0xff, 0x43, 
0xc2, 0xff, 0xff, 0x43, 0x82, 0xff, 0xff, 0x41, 0x02, 0xff, 0xff, 0x40, 0x02, 0xfe, 0x7f, 0x40, 
0x02, 0xfc, 0x3f, 0x40, 0x02, 0xf8, 0x1f, 0x40, 0x02, 0xf0, 0x0f, 0x40, 0x02, 0xe0, 0x07, 0x40, 
0x02, 0xc0, 0x03, 0x40, 0x02, 0x80, 0x01, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x60, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 
};
// 'PlayButton Selected', 32x32px
const unsigned char PlayButton_Selected [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0x0e, 0x00, 0x00, 0x60, 
0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 
0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0xc6, 0xff, 0xff, 0x63, 
0xc6, 0xff, 0xff, 0x63, 0x86, 0xff, 0xff, 0x61, 0x06, 0xff, 0xff, 0x60, 0x06, 0xfe, 0x7f, 0x60, 
0x06, 0xfc, 0x3f, 0x60, 0x06, 0xf8, 0x1f, 0x60, 0x06, 0xf0, 0x0f, 0x60, 0x06, 0xe0, 0x07, 0x60, 
0x06, 0xc0, 0x03, 0x60, 0x06, 0x80, 0x01, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 
0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 
0x06, 0x00, 0x00, 0x60, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00,
};
// 'PlayButton Normal', 32x32px
const unsigned char PlayButton_Pressed [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0x0e, 0x00, 0x00, 0x68, 0x16, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x00, 0x68, 
0x16, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x00, 0x68, 0x16, 0x00, 0x00, 0x70, 0xce, 0xff, 0xff, 0x6b, 
0xd6, 0xff, 0xff, 0x73, 0x8e, 0xff, 0xff, 0x69, 0x16, 0xff, 0xff, 0x70, 0x0e, 0xfe, 0x7f, 0x68, 
0x16, 0xfc, 0x3f, 0x70, 0x0e, 0xf8, 0x1f, 0x68, 0x16, 0xf0, 0x0f, 0x70, 0x0e, 0xe0, 0x07, 0x68, 
0x16, 0xc0, 0x03, 0x70, 0x0e, 0x80, 0x01, 0x68, 0x16, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x00, 0x68, 
0x16, 0x00, 0x00, 0x70, 0x0e, 0x00, 0x00, 0x68, 0x16, 0x00, 0x00, 0x70, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char SettingButton_Normal [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x06, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x80, 0x01, 0x40, 0x02, 0x8c, 0x31, 0x40, 
0x02, 0xdc, 0x3b, 0x40, 0x02, 0xf8, 0x1f, 0x40, 0x82, 0x39, 0xb8, 0x41, 0x82, 0x2f, 0xf0, 0x41, 
0x02, 0x67, 0xe0, 0x40, 0x02, 0xc2, 0x41, 0x40, 0x02, 0xc2, 0x43, 0x40, 0xc2, 0x63, 0xfe, 0x43, 
0xc2, 0x63, 0xfe, 0x43, 0x02, 0xc2, 0x43, 0x40, 0x02, 0xc2, 0x41, 0x40, 0x02, 0x67, 0xe0, 0x40, 
0x82, 0x2f, 0xf0, 0x41, 0x82, 0x39, 0xb8, 0x41, 0x02, 0xf8, 0x1f, 0x40, 0x02, 0xdc, 0x3b, 0x40, 
0x02, 0x8c, 0x31, 0x40, 0x02, 0x80, 0x01, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x60, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char SettingButton_Selected [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0x0e, 0x00, 0x00, 0x70, 
0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x80, 0x01, 0x60, 0x06, 0x8c, 0x31, 0x60, 
0x06, 0xdc, 0x3b, 0x60, 0x06, 0xf8, 0x1f, 0x60, 0x86, 0x39, 0xb8, 0x61, 0x86, 0x2f, 0xf0, 0x61, 
0x06, 0x67, 0xe0, 0x60, 0x06, 0xc2, 0x41, 0x60, 0x06, 0xc2, 0x43, 0x60, 0xc6, 0x63, 0xfe, 0x63, 
0xc6, 0x63, 0xfe, 0x63, 0x06, 0xc2, 0x43, 0x60, 0x06, 0xc2, 0x41, 0x60, 0x06, 0x67, 0xe0, 0x60, 
0x86, 0x2f, 0xf0, 0x61, 0x86, 0x39, 0xb8, 0x61, 0x06, 0xf8, 0x1f, 0x60, 0x06, 0xdc, 0x3b, 0x60, 
0x06, 0x8c, 0x31, 0x60, 0x06, 0x80, 0x01, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 
0x0e, 0x00, 0x00, 0x70, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char SettingButton_Pressed [] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0x0e, 0x00, 0x00, 0x68, 0x16, 0x80, 0x01, 0x70, 0x0e, 0x8c, 0x31, 0x68, 
0x16, 0xdc, 0x3b, 0x70, 0x0e, 0xf8, 0x1f, 0x68, 0x96, 0x39, 0xb8, 0x71, 0x8e, 0x2f, 0xf0, 0x69, 
0x16, 0x67, 0xe0, 0x70, 0x0e, 0xc2, 0x41, 0x68, 0x16, 0xc2, 0x43, 0x70, 0xce, 0x63, 0xfe, 0x6b, 
0xd6, 0x63, 0xfe, 0x73, 0x0e, 0xc2, 0x43, 0x68, 0x16, 0xc2, 0x41, 0x70, 0x0e, 0x67, 0xe0, 0x68, 
0x96, 0x2f, 0xf0, 0x71, 0x8e, 0x39, 0xb8, 0x69, 0x16, 0xf8, 0x1f, 0x70, 0x0e, 0xdc, 0x3b, 0x68, 
0x16, 0x8c, 0x31, 0x70, 0x0e, 0x80, 0x01, 0x68, 0x16, 0x00, 0x00, 0x70, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char Favorite_Normal [] PROGMEM = 
{
0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x3f, 0x06, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x20, 0x00, 0x40, 0x02, 0x70, 0x00, 0x40, 
0x02, 0xf0, 0x00, 0x40, 0x02, 0xf0, 0x81, 0x43, 0x02, 0xf0, 0xe3, 0x43, 0x02, 0xf8, 0xff, 0x43, 
0x02, 0xf8, 0xff, 0x41, 0x02, 0xfc, 0xff, 0x40, 0x02, 0xff, 0x7f, 0x40, 0x82, 0xff, 0x3f, 0x40, 
0x82, 0xff, 0x3f, 0x40, 0x02, 0xff, 0x7f, 0x40, 0x02, 0xfc, 0xff, 0x40, 0x02, 0xf8, 0xff, 0x41, 
0x02, 0xf8, 0xff, 0x43, 0x02, 0xf0, 0xe3, 0x43, 0x02, 0xf0, 0x81, 0x43, 0x02, 0xf0, 0x00, 0x40, 
0x02, 0x70, 0x00, 0x40, 0x02, 0x20, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 
0x02, 0x00, 0x00, 0x40, 0x06, 0x00, 0x00, 0x60, 0xfc, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char Favorite_Selected [] PROGMEM = 
{
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0x0e, 0x00, 0x00, 0x70, 
0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x20, 0x00, 0x60, 0x06, 0x70, 0x00, 0x60, 
0x06, 0xf0, 0x00, 0x60, 0x06, 0xf0, 0x81, 0x63, 0x06, 0xf0, 0xe3, 0x63, 0x06, 0xf8, 0xff, 0x63, 
0x06, 0xf8, 0xff, 0x61, 0x06, 0xfc, 0xff, 0x60, 0x06, 0xff, 0x7f, 0x60, 0x86, 0xff, 0x3f, 0x60, 
0x86, 0xff, 0x3f, 0x60, 0x06, 0xff, 0x7f, 0x60, 0x06, 0xfc, 0xff, 0x60, 0x06, 0xf8, 0xff, 0x61, 
0x06, 0xf8, 0xff, 0x63, 0x06, 0xf0, 0xe3, 0x63, 0x06, 0xf0, 0x81, 0x63, 0x06, 0xf0, 0x00, 0x60, 
0x06, 0x70, 0x00, 0x60, 0x06, 0x20, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x60, 
0x0e, 0x00, 0x00, 0x70, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 
};
const unsigned char Favorite_Pressed [] PROGMEM = 
{
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x3f, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0x0e, 0x00, 0x00, 0x68, 0x16, 0x20, 0x00, 0x70, 0x0e, 0x70, 0x00, 0x68, 
0x16, 0xf0, 0x00, 0x70, 0x0e, 0xf0, 0x81, 0x6b, 0x16, 0xf0, 0xe3, 0x73, 0x0e, 0xf8, 0xff, 0x6b, 
0x16, 0xf8, 0xff, 0x71, 0x0e, 0xfc, 0xff, 0x68, 0x16, 0xff, 0x7f, 0x70, 0x8e, 0xff, 0x3f, 0x68, 
0x96, 0xff, 0x3f, 0x70, 0x0e, 0xff, 0x7f, 0x68, 0x16, 0xfc, 0xff, 0x70, 0x0e, 0xf8, 0xff, 0x69, 
0x16, 0xf8, 0xff, 0x73, 0x0e, 0xf0, 0xe3, 0x6b, 0x16, 0xf0, 0x81, 0x73, 0x0e, 0xf0, 0x00, 0x68, 
0x16, 0x70, 0x00, 0x70, 0x0e, 0x20, 0x00, 0x68, 0x16, 0x00, 0x00, 0x70, 0xae, 0xaa, 0xaa, 0x6a, 
0x56, 0x55, 0x55, 0x75, 0xfc, 0xff, 0xff, 0x3f, 0xf8, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00,  
};

#endif