#ifndef _SI2158_FIRMWARE_2_1_BUILD_4_H_
#define _SI2158_FIRMWARE_2_1_BUILD_4_H_

#define FIRMWARE_MAJOR        2
#define FIRMWARE_MINOR        1
#define BUILD_VERSION         4

#ifndef __FIRMWARE_STRUCT__
#define __FIRMWARE_STRUCT__
typedef struct firmware_struct {
	unsigned char firmware_len;
	unsigned char firmware_table[16];
} firmware_struct;
#endif /* __FIRMWARE_STRUCT__ */

firmware_struct Si2158_FW_2_1b4[] = {
{ 8 , { 0x04,0x01,0x00,0x00,0x08,0x05,0xDB,0xDA } },
{ 8 , { 0x05,0x79,0x0F,0x83,0x81,0xE4,0x3A,0xD4 } },
{ 9 , { 0x38,0xC8,0x9D,0x2C,0x98,0xF2,0xBC,0x74,0xAA } },
{ 8 , { 0x05,0xE1,0x35,0xF6,0x7E,0x75,0xCD,0xAB } },
{ 3 , { 0x4A,0x48,0xD8 } },
{ 8 , { 0x05,0xED,0x9F,0x0C,0x72,0x8D,0xC3,0x79 } },
{ 3 , { 0x42,0x81,0xFB } },
{ 8 , { 0x0F,0x15,0xC7,0xD7,0x77,0xD7,0xB8,0x0B } },
{ 8 , { 0x05,0x30,0x56,0x57,0x32,0xA3,0x03,0x5E } },
{ 16 , { 0x3F,0xB2,0x0C,0x91,0x18,0xD9,0xA9,0x89,0xA0,0x31,0x8E,0x38,0x83,0xA0,0xBC,0x9A } },
{ 3 , { 0x42,0xC2,0x88 } },
{ 8 , { 0x05,0x73,0x6C,0xBC,0xF9,0x81,0x87,0xAF } },
{ 3 , { 0x42,0x58,0xB1 } },
{ 8 , { 0x05,0x3E,0xD1,0xDF,0x49,0x37,0x5F,0x4C } },
{ 3 , { 0x4A,0x94,0x09 } },
{ 8 , { 0x05,0xEB,0x5D,0x20,0x5B,0xFC,0xD1,0x0A } },
{ 12 , { 0x33,0x6D,0xC6,0x74,0x4F,0x67,0x83,0xF6,0xEF,0xB3,0x50,0xAB } },
{ 8 , { 0x05,0xA4,0x15,0xD5,0x5E,0x4F,0x3D,0xD3 } },
{ 3 , { 0x4A,0xB4,0xA9 } },
{ 8 , { 0x05,0x74,0xDF,0xDE,0x0F,0xE8,0x26,0xBA } },
{ 3 , { 0x4A,0x5B,0xC6 } },
{ 8 , { 0x05,0x10,0x4C,0xBB,0x4A,0x3F,0x75,0x4A } },
{ 3 , { 0x4A,0x21,0xE3 } },
{ 8 , { 0x05,0x3C,0x5B,0xD0,0xEF,0x20,0x54,0x6B } },
{ 3 , { 0x4A,0xEC,0x94 } },
{ 8 , { 0x07,0x78,0x6D,0x1B,0xBA,0x7A,0x90,0xDD } },
{ 8 , { 0x05,0xD5,0xD0,0x69,0x7D,0x06,0x6D,0x8D } },
{ 3 , { 0x4A,0xC1,0x3D } },
{ 8 , { 0x05,0xD4,0xE7,0x0A,0x0A,0xC5,0xED,0xE0 } },
{ 3 , { 0x42,0x9E,0x3D } },
{ 8 , { 0x0F,0x15,0x60,0xEF,0xA4,0x00,0x64,0x24 } },
{ 16 , { 0x3F,0x60,0x0B,0x87,0x11,0xD5,0x29,0xCA,0x28,0xC6,0xEA,0x40,0xF1,0xAC,0x29,0x37 } },
{ 16 , { 0x37,0x87,0xDE,0x11,0x7F,0xB6,0x8A,0x2B,0x82,0x65,0xA5,0x37,0x95,0x08,0x69,0xC9 } },
{ 16 , { 0x37,0x42,0x97,0x48,0xA3,0x08,0xF8,0x2F,0xAF,0x2A,0x69,0x3E,0x8F,0xE1,0x33,0xA1 } },
{ 16 , { 0x3F,0x43,0xE3,0x78,0xC9,0xA2,0xF2,0x9B,0x2F,0x19,0xC1,0xB2,0xFE,0xA3,0xAC,0x2A } },
{ 2 , { 0x49,0x9B } },
{ 8 , { 0x07,0xC6,0x1D,0x75,0x47,0x35,0xF9,0xD5 } },
{ 8 , { 0x07,0xE7,0xC9,0x2C,0x72,0x3B,0x06,0x6A } },
{ 8 , { 0x07,0xC4,0xEA,0xEC,0x42,0x74,0xB6,0xC0 } },
{ 16 , { 0x3F,0xC5,0x98,0x63,0x3B,0xA0,0x24,0x30,0xA0,0x78,0x85,0x34,0xE4,0x9D,0xBB,0x63 } },
{ 16 , { 0x37,0x3A,0x99,0xC9,0x1B,0xD9,0xF7,0x8E,0xB7,0x03,0x25,0x03,0xB5,0xCF,0x7E,0x70 } },
{ 12 , { 0x33,0xD1,0x1D,0xED,0xE5,0x95,0xD8,0xC0,0x6F,0x25,0x1B,0x7E } },
{ 8 , { 0x0F,0x2B,0xAD,0xE0,0x6D,0x2F,0xE2,0x2B } },
{ 16 , { 0x37,0x6F,0x46,0xA0,0xDE,0x6F,0x6A,0x2D,0xDF,0xE3,0xD3,0x6A,0x2E,0x8C,0xC6,0xAB } },
{ 16 , { 0x37,0xC2,0xC8,0xA6,0x24,0x41,0xBE,0xC7,0x3E,0x49,0xBB,0xE8,0xEC,0x94,0x64,0x33 } },
{ 16 , { 0x3F,0x5B,0x5A,0xE1,0x1D,0xBC,0xDE,0x58,0x9C,0x8E,0xB9,0x85,0x35,0x5A,0x72,0xAF } },
{ 16 , { 0x3F,0x0F,0xE8,0x73,0xE3,0x5D,0xCC,0xEB,0x10,0x4B,0x7A,0x2E,0x93,0x1A,0x2D,0xF5 } },
{ 16 , { 0x3F,0x53,0x34,0xC7,0xBE,0x0B,0xBF,0x64,0x04,0x94,0x2B,0x57,0xD2,0x1E,0x2B,0x5B } },
{ 16 , { 0x3F,0xE0,0xF9,0xBA,0xD7,0xE0,0x5C,0x70,0x04,0x74,0x13,0x35,0xBE,0x2A,0xA8,0xDE } },
{ 16 , { 0x3F,0x71,0x24,0xA5,0xB0,0x40,0x76,0xD8,0x6A,0xFB,0xCC,0x8B,0x24,0x4C,0xD5,0x13 } },
{ 8 , { 0x07,0x6B,0x7D,0x89,0x95,0x8E,0x49,0xE9 } },
{ 12 , { 0x3B,0x72,0x88,0xC6,0x31,0xE1,0x7B,0xD9,0xAD,0x6F,0x97,0x36 } },
{ 8 , { 0x0F,0xCB,0x1B,0x8C,0x4F,0x9A,0x63,0xD5 } },
{ 10 , { 0x39,0x5F,0x0D,0xE4,0x30,0xCE,0x10,0x48,0xF4,0x3F } },
{ 8 , { 0x0F,0xC5,0x1D,0x63,0xAB,0x71,0x3B,0x31 } },
{ 8 , { 0x07,0x06,0x0B,0xCF,0x73,0xF0,0x89,0xAA } },
{ 8 , { 0x07,0x2B,0xE8,0xD3,0xCF,0xAA,0xB8,0x0E } },
{ 15 , { 0x3E,0xFF,0x04,0x0C,0xD9,0x4B,0xBE,0x6C,0x57,0x3E,0x2E,0x57,0xB6,0x9C,0x9B } },
{ 8 , { 0x07,0xE5,0x7B,0xE4,0x70,0x70,0x37,0x57 } },
{ 16 , { 0x37,0x61,0x30,0x1B,0xC8,0x00,0x0E,0x66,0x5B,0x7F,0x08,0xF5,0x60,0xA6,0xDA,0x1C } },
{ 16 , { 0x37,0xBE,0xAB,0xE0,0x12,0xEB,0xFC,0xB9,0x06,0x4A,0x22,0x5A,0x27,0x1E,0xCF,0x34 } },
{ 16 , { 0x3F,0x68,0x73,0x11,0x33,0x70,0x0A,0x0F,0x1C,0x5A,0x27,0xC3,0x18,0x64,0x06,0x68 } },
{ 16 , { 0x3F,0x48,0x70,0xF4,0xEB,0x77,0xFF,0x6E,0x8B,0x9E,0x87,0x90,0xE2,0x66,0x1C,0xB5 } },
{ 4 , { 0x43,0x06,0x75,0xB1 } },
{ 8 , { 0x07,0x46,0x42,0x09,0x57,0xB5,0xE9,0x7E } },
{ 16 , { 0x37,0x78,0xEA,0x44,0x02,0xE7,0x7E,0xA4,0x80,0xFC,0x05,0x46,0x24,0x69,0xA9,0xFD } },
{ 9 , { 0x38,0x4A,0xEF,0x33,0xD4,0x74,0x46,0xE4,0x32 } },
{ 8 , { 0x07,0x97,0x85,0x8B,0x78,0x0A,0x8E,0xC7 } },
{ 16 , { 0x3F,0x85,0x3B,0x6D,0xB7,0x29,0x9F,0xEC,0x78,0x8F,0xA5,0x8F,0xCE,0xB0,0xC6,0xA3 } },
{ 16 , { 0x37,0x05,0x85,0x81,0x0A,0x0B,0x35,0xB3,0x9D,0xAD,0x3B,0xC2,0x25,0xE3,0x62,0x75 } },
{ 16 , { 0x37,0x3C,0x17,0x0F,0xE5,0xE3,0xA5,0x7D,0xE1,0xED,0x29,0xCF,0xEF,0xAF,0x84,0xD7 } },
{ 16 , { 0x37,0xCD,0xE1,0xE6,0xC8,0xEE,0xB7,0xDA,0x5D,0x5D,0xC1,0xA2,0xDD,0x4C,0x60,0xAF } },
{ 16 , { 0x37,0xED,0x70,0xFC,0xC8,0x53,0xF2,0xD2,0xB5,0x37,0x69,0x8B,0x65,0xAB,0xD4,0xBF } },
{ 16 , { 0x3F,0x4C,0x43,0xFA,0x72,0x3D,0x4A,0xA6,0xAD,0x94,0xDA,0x4E,0x7B,0x56,0x1A,0x4A } },
{ 16 , { 0x37,0x27,0x6B,0x31,0x2A,0x29,0xF8,0xF3,0xE4,0x09,0xF9,0xAE,0xD9,0xE5,0x6B,0x57 } },
{ 16 , { 0x37,0x1A,0x45,0xF2,0x97,0xA9,0x19,0xA6,0x45,0xED,0xA9,0x97,0xE5,0xF3,0xFA,0x15 } },
{ 16 , { 0x37,0xD9,0xC7,0x41,0xB3,0x9B,0x49,0x6A,0x11,0xB2,0x7B,0xCD,0x3B,0x90,0xDE,0x37 } },
{ 16 , { 0x37,0x75,0xEB,0x2A,0xE5,0x45,0xE0,0xA5,0x17,0xC3,0x3E,0x35,0xA7,0x84,0x54,0x93 } },
{ 7 , { 0x4E,0x6D,0x23,0x60,0x22,0x6E,0x8D } },
{ 8 , { 0x07,0xEB,0x41,0xE1,0x73,0xFC,0x20,0xF9 } },
{ 16 , { 0x37,0x3D,0xCD,0x1A,0x2D,0x2F,0x84,0xE1,0x29,0xC1,0x0A,0x68,0x3C,0x56,0xE0,0x6D } },
{ 16 , { 0x3F,0x75,0xE8,0xE0,0xFA,0x86,0x23,0xEF,0x95,0xF2,0x85,0x0E,0x0A,0xE4,0xCA,0x13 } },
{ 16 , { 0x37,0x0D,0xD0,0x63,0xD4,0xED,0x03,0x8E,0x58,0x74,0x2D,0xD6,0xF9,0x40,0x9D,0xD1 } },
{ 16 , { 0x37,0x5D,0xE5,0x95,0x10,0xB7,0xFE,0xD8,0xF0,0x5D,0x32,0xAF,0xA9,0xF2,0xCA,0xE8 } },
{ 16 , { 0x3F,0xFF,0xC1,0x30,0xBD,0x2C,0xAA,0xB5,0x29,0xEC,0xB6,0x55,0xA6,0xE6,0xF2,0xEC } },
{ 9 , { 0x30,0x11,0xEE,0x40,0x18,0xC2,0x00,0x5D,0x0F } },
{ 8 , { 0x0F,0x1A,0x22,0x12,0x97,0xA2,0x58,0x0A } },
{ 8 , { 0x0F,0x02,0x9A,0xBE,0xBC,0x07,0x37,0x9F } },
{ 8 , { 0x07,0xD0,0xF4,0xB0,0x33,0x79,0x31,0x5D } },
{ 9 , { 0x38,0x7C,0x95,0x69,0x4E,0x63,0x9D,0xE5,0x33 } },
{ 8 , { 0x0F,0x89,0x55,0xF2,0x3F,0xED,0x8E,0xFE } },
{ 16 , { 0x37,0xA9,0x54,0x24,0xC5,0x74,0xDA,0xAA,0x3F,0x25,0x37,0x46,0x4B,0xFD,0x4B,0x31 } },
{ 4 , { 0x4B,0xF6,0xDA,0x88 } },
{ 8 , { 0x07,0x59,0x53,0x0D,0x0A,0x35,0xCD,0x12 } },
{ 16 , { 0x3F,0x0C,0x56,0xB2,0xFA,0x79,0x7B,0x3A,0x43,0x12,0x57,0x0B,0x01,0x7F,0x64,0xB4 } },
{ 16 , { 0x3F,0xEE,0x75,0xA7,0x67,0x2B,0x5E,0xF0,0x22,0x34,0x18,0x29,0x1E,0xA3,0xAD,0x21 } },
{ 16 , { 0x37,0x35,0x90,0xF0,0xB4,0xF9,0xA4,0x4C,0xCE,0x31,0xC6,0x62,0x44,0xEB,0x25,0xFB } },
{ 16 , { 0x37,0xE6,0xD0,0xE1,0xC3,0x0C,0x65,0x9C,0xF7,0x45,0x74,0xF6,0xDD,0xF9,0xA2,0xE1 } },
{ 9 , { 0x38,0xF9,0x1D,0xCA,0x81,0x2A,0x38,0x06,0x7D } },
{ 8 , { 0x0F,0x87,0x8F,0xFA,0x24,0x43,0x68,0x63 } },
{ 16 , { 0x3F,0x3F,0x59,0x75,0x0A,0xA9,0x9B,0x05,0xD3,0xCD,0xFC,0x52,0x8F,0xA1,0x9B,0x6E } },
{ 7 , { 0x46,0x30,0x39,0xC6,0x3D,0x44,0xFC } },
{ 8 , { 0x07,0xF5,0x96,0x44,0x4E,0xE1,0x27,0x01 } },
{ 8 , { 0x4F,0x5A,0xCE,0xF0,0x25,0xD6,0x6C,0x5A } },
{ 8 , { 0x0F,0x14,0x20,0x2B,0x9A,0xFF,0x1B,0x43 } },
{ 11 , { 0x3A,0x6D,0xAC,0x7E,0x36,0x41,0x55,0x64,0xCF,0x9E,0x49 } },
{ 8 , { 0x07,0xD0,0x90,0x31,0xCE,0x2A,0xD0,0x8F } },
{ 16 , { 0x37,0x3F,0x46,0x69,0x9A,0xCF,0xAE,0xF1,0xB2,0xD1,0x19,0x84,0x40,0x2C,0x5D,0xBE } },
{ 16 , { 0x37,0x5B,0xCE,0x95,0x62,0x01,0x58,0xB5,0xBA,0x1F,0xE1,0x83,0x91,0x69,0x49,0x04 } },
{ 16 , { 0x3F,0xFE,0x93,0xDF,0x62,0x90,0x2F,0xC8,0xD2,0x86,0x86,0x19,0xE0,0xD9,0x56,0x31 } },
{ 4 , { 0x4B,0x9A,0x11,0x1B } },
{ 8 , { 0x0F,0x2C,0x32,0x02,0x8C,0xE2,0x4A,0xB8 } },
{ 8 , { 0x07,0xB9,0x27,0x22,0x2C,0x04,0x6E,0xDC } },
{ 8 , { 0x07,0x49,0x3F,0xCA,0x7C,0x7A,0x69,0xC4 } },
{ 8 , { 0x0F,0xAD,0x85,0x5C,0xF3,0x56,0x88,0x95 } },
{ 8 , { 0x0F,0x1A,0xD7,0x20,0xEC,0xA6,0x7F,0x98 } },
{ 4 , { 0x4B,0x85,0xE7,0xC6 } },
{ 8 , { 0x07,0xA4,0x3F,0x3E,0x69,0x5B,0x7B,0x16 } },
{ 9 , { 0x30,0x9A,0xCB,0x5A,0x49,0x0F,0x89,0x6F,0x55 } },
{ 8 , { 0x0F,0xDB,0x2D,0x19,0x87,0xDE,0xB9,0xF3 } },
{ 16 , { 0x3F,0x47,0xD3,0x08,0x93,0x7D,0x91,0xA9,0x1A,0xC1,0xEE,0x43,0x7C,0x12,0xCB,0xA0 } },
{ 11 , { 0x3A,0x29,0xDA,0x46,0xAE,0x95,0xE2,0xBE,0x31,0xA5,0x43 } },
{ 8 , { 0x0F,0x8C,0x7E,0x84,0xD4,0xC6,0x26,0x38 } },
{ 16 , { 0x3F,0x49,0x00,0x59,0xDE,0x38,0x37,0x93,0xCC,0x3C,0x72,0x28,0x5D,0xAA,0xCE,0xCC } },
{ 16 , { 0x37,0xF6,0xBA,0x93,0x0E,0x44,0x8C,0x15,0x86,0x14,0xB4,0xAD,0x50,0xA6,0x11,0x5A } },
{ 16 , { 0x3F,0x47,0x8B,0x78,0xE5,0x84,0x87,0xEB,0xAF,0x07,0x07,0x25,0x32,0xDB,0x87,0xE0 } },
{ 16 , { 0x3F,0x7A,0xD0,0xCB,0x6A,0x94,0x14,0xE3,0x01,0x3D,0xBA,0x5C,0x4A,0xE8,0x28,0x37 } },
{ 8 , { 0x07,0x04,0xD3,0x36,0xE2,0x97,0xF9,0x13 } },
{ 16 , { 0x37,0x9E,0x54,0x0E,0xD2,0xBA,0xA3,0x6D,0xCC,0x24,0x25,0x57,0x8B,0x2A,0x22,0xA5 } },
{ 16 , { 0x3F,0xD1,0x86,0x3C,0x74,0x0A,0x83,0x8A,0x40,0xF9,0xCF,0x1D,0x63,0xB5,0x33,0x1C } },
{ 16 , { 0x37,0x42,0xA6,0x72,0x3E,0xBA,0xAC,0xBE,0xF7,0xF9,0x9F,0x13,0x49,0x7D,0xA6,0xC1 } },
{ 7 , { 0x4E,0x11,0x02,0xB9,0xE3,0x8D,0x85 } },
{ 8 , { 0x0F,0xDD,0xF5,0xC2,0xE3,0x81,0xF9,0x2E } },
{ 9 , { 0x30,0xA1,0xB3,0x72,0x01,0xA2,0x26,0xBB,0x57 } },
{ 8 , { 0x0F,0xA1,0x2B,0xAF,0x46,0x13,0xE7,0xEE } },
{ 8 , { 0x07,0xA1,0xB4,0xA4,0xA3,0x0C,0xAC,0x40 } },
{ 8 , { 0x0F,0x8D,0x69,0x25,0x5A,0x25,0x92,0x75 } },
{ 16 , { 0x37,0xC3,0x91,0xCE,0x3B,0xE1,0xB1,0x7A,0x47,0x6A,0xDE,0x68,0x18,0x33,0xC7,0x72 } },
{ 3 , { 0x42,0x5D,0xB5 } },
{ 8 , { 0x0F,0x26,0xAF,0xC3,0xD9,0x97,0xDF,0x0A } },
{ 16 , { 0x3F,0x0D,0x84,0x35,0xB4,0xA3,0x8B,0xB8,0x71,0xE4,0xCC,0x71,0x4F,0x9C,0x8A,0x7B } },
{ 4 , { 0x4B,0x68,0x5B,0xFA } },
{ 8 , { 0x0F,0xC4,0x1E,0xD5,0xFA,0xBC,0x0D,0x65 } },
{ 8 , { 0x47,0x39,0x80,0x8A,0xE1,0x1B,0xE6,0xAC } },
{ 8 , { 0x0F,0x8A,0xAF,0x65,0xD2,0x01,0xB6,0xB9 } },
{ 8 , { 0x05,0x38,0xAD,0x78,0x7F,0x01,0x52,0x95 } },
{ 16 , { 0x37,0xB2,0xD1,0x4E,0x10,0xEA,0x54,0x7F,0x66,0xBC,0x96,0xA4,0xBD,0x8C,0x37,0x30 } },
{ 16 , { 0x37,0xE0,0xBB,0x44,0xD4,0x38,0x78,0xCB,0xE2,0xC5,0x03,0x8B,0x30,0x1C,0xED,0xB1 } },
{ 16 , { 0x3F,0xCB,0xFB,0xF8,0x03,0x2B,0xD0,0x84,0x4D,0x48,0x90,0xC3,0x7C,0x83,0xBD,0x22 } },
{ 16 , { 0x3F,0xF1,0x2F,0xEA,0x51,0xF3,0x9B,0x98,0x54,0x25,0x4C,0x34,0x4C,0x1F,0xD2,0x7E } },
{ 16 , { 0x37,0xBC,0xC9,0x13,0x37,0xF8,0xBE,0xA9,0x79,0x66,0xEF,0x43,0x27,0xF2,0x05,0x00 } },
{ 16 , { 0x3F,0xBF,0xA2,0xA6,0x7C,0x95,0x33,0x43,0xB6,0xFC,0x35,0x09,0x47,0x7B,0xA2,0xC3 } },
{ 8 , { 0x07,0xF8,0xE6,0x17,0x18,0xA3,0x45,0x83 } },
{ 8 , { 0x4F,0xD3,0xF3,0xF1,0x2C,0x0B,0x33,0x56 } },
{ 8 , { 0x07,0x1C,0xE5,0x2D,0x3B,0xD1,0x19,0x39 } },
{ 8 , { 0x07,0xA7,0x1E,0x8C,0xCB,0xCD,0xBF,0x9A } },
{ 16 , { 0x3F,0x59,0xC7,0xEF,0x02,0x66,0xD5,0xD2,0xF0,0x87,0xEB,0xE8,0x07,0x8A,0xD4,0x13 } },
{ 3 , { 0x4A,0xA9,0x4F } },
{ 8 , { 0x07,0x5D,0x4F,0x96,0x10,0x4A,0xE5,0x79 } },
{ 8 , { 0x0F,0x56,0x0A,0x8F,0x85,0x2B,0x8C,0x0E } },
{ 8 , { 0x0F,0x83,0x67,0x55,0x72,0x67,0x08,0x46 } },
{ 8 , { 0x07,0x82,0xD4,0x87,0x88,0x2E,0x01,0x8E } },
{ 8 , { 0x0F,0x5D,0x6A,0xFD,0xDA,0xA6,0x8E,0x75 } },
{ 8 , { 0x0F,0xCF,0xF9,0xF0,0xD8,0xEC,0x6B,0x7D } },
{ 8 , { 0x05,0x00,0x55,0xC4,0xF6,0xA3,0xE1,0xAC } },
{ 3 , { 0x4A,0xE1,0xE4 } },
{ 8 , { 0x0F,0xA6,0xC5,0x5E,0xA1,0x23,0xF4,0xD6 } },
{ 8 , { 0x07,0x58,0xEA,0x19,0xBD,0x0E,0x71,0x5A } },
{ 8 , { 0x05,0xEA,0x4F,0x98,0xEA,0x40,0xEB,0xDA } },
{ 3 , { 0x4A,0x60,0x02 } },
{ 8 , { 0x05,0xAB,0x6A,0xD7,0x5B,0x81,0x94,0xD6 } },
{ 4 , { 0x43,0x74,0xAE,0x05 } },
{ 8 , { 0x07,0xC8,0x83,0x29,0x7E,0x20,0x89,0xA1 } },
{ 8 , { 0x05,0xF5,0x77,0x0A,0xC1,0xDA,0x77,0x4F } }
};

#define FIRMWARE_LINES_2_1b4 (sizeof(Si2158_FW_2_1b4)/(sizeof(firmware_struct)))

#endif /* _SI2158_FIRMWARE_2_1_BUILD_4_H_ */