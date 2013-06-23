/******************************************************************************

	volume_icon.c

	Volume icons

******************************************************************************/


#define SPEEKER_X			0
#define SPEEKER_SHADOW_X	(32)
#define VOLUME_BAR_X		(32+32)
#define VOLUME_BAR_SHADOW_X	(32+32+12)
#define VOLUME_DOT_X		(32+32+12+12)
#define VOLUME_DOT_SHADOW_X	(32+32+12+12+12)

static const unsigned char icon_speeker[32][16] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0xb0,0xff,0x04,0x00,0x00,0x00,0x18,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0xef,0x04,0x00,0x00,0xa0,0x9f,0x01,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0xb0,0xff,0xff,0x04,0x00,0x00,0x90,0xff,0x05,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0xfb,0xff,0xff,0x04,0x00,0x00,0x20,0xfc,0x0b,0x00,0x00 },
	{ 0x00,0x00,0xb9,0xbb,0xdb,0xff,0xff,0xff,0x04,0x00,0xa9,0x00,0xe5,0x4f,0x00,0x00 },
	{ 0x00,0x00,0xfd,0xff,0xff,0xff,0xff,0xff,0x04,0x60,0xfe,0x05,0xb0,0x9f,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xff,0x04,0x00,0xfb,0x0a,0x70,0xde,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xff,0x04,0x00,0xe6,0x0e,0x50,0xee,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xff,0x04,0x00,0xd3,0x3e,0x40,0xed,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xef,0x04,0x00,0xe4,0x4e,0x40,0xed,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xef,0x04,0x00,0xe7,0x0e,0x60,0xee,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xef,0x04,0x40,0xed,0x0a,0x80,0xce,0x00,0x00 },
	{ 0x00,0x00,0xfb,0xff,0xff,0xff,0xff,0xef,0x04,0x50,0xdd,0x04,0xb0,0x9e,0x00,0x00 },
	{ 0x00,0x00,0x98,0x99,0xb9,0xfe,0xff,0xef,0x04,0x00,0x86,0x00,0xe7,0x5e,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0xd7,0xff,0xef,0x04,0x00,0x00,0x50,0xed,0x0c,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x70,0xfd,0xef,0x04,0x00,0x00,0xa0,0xde,0x04,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0xd7,0xef,0x04,0x00,0x00,0x70,0x8c,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x70,0xed,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }
};

static const unsigned char icon_speeker_shadow[32][16] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x11,0x22,0x23,0x12,0x01,0x00,0x00,0x11,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x10,0x21,0x43,0x44,0x23,0x11,0x10,0x11,0x11,0x11,0x00,0x00 },
	{ 0x00,0x00,0x00,0x10,0x21,0x43,0x65,0x56,0x34,0x12,0x11,0x22,0x22,0x12,0x01,0x00 },
	{ 0x00,0x00,0x11,0x21,0x32,0x64,0x77,0x77,0x45,0x22,0x21,0x32,0x33,0x23,0x01,0x00 },
	{ 0x00,0x10,0x22,0x33,0x54,0x86,0x99,0x89,0x46,0x23,0x32,0x43,0x44,0x34,0x12,0x00 },
	{ 0x00,0x21,0x43,0x65,0x76,0xa9,0xbb,0x8a,0x57,0x34,0x33,0x54,0x55,0x45,0x12,0x00 },
	{ 0x10,0x32,0x64,0x87,0xa9,0xcb,0xcc,0x9b,0x57,0x44,0x44,0x55,0x66,0x45,0x23,0x01 },
	{ 0x10,0x42,0x76,0xa9,0xcb,0xdc,0xcd,0x9b,0x67,0x45,0x54,0x65,0x66,0x56,0x23,0x01 },
	{ 0x10,0x43,0x97,0xca,0xdd,0xee,0xde,0x9b,0x67,0x55,0x55,0x66,0x66,0x56,0x24,0x01 },
	{ 0x10,0x53,0xa7,0xdb,0xee,0xff,0xde,0xac,0x67,0x55,0x65,0x66,0x66,0x56,0x24,0x01 },
	{ 0x10,0x53,0xa8,0xdc,0xfe,0xff,0xde,0xac,0x68,0x55,0x65,0x76,0x67,0x56,0x34,0x01 },
	{ 0x10,0x53,0xa8,0xdc,0xfe,0xff,0xde,0xac,0x67,0x55,0x65,0x76,0x67,0x56,0x34,0x01 },
	{ 0x10,0x53,0x97,0xdb,0xee,0xee,0xde,0x9c,0x67,0x55,0x65,0x66,0x66,0x56,0x24,0x01 },
	{ 0x10,0x42,0x86,0xba,0xdc,0xed,0xde,0x9b,0x67,0x55,0x55,0x66,0x66,0x56,0x24,0x01 },
	{ 0x10,0x42,0x75,0xa8,0xbb,0xdc,0xcd,0x9b,0x57,0x44,0x54,0x65,0x66,0x56,0x23,0x01 },
	{ 0x10,0x31,0x54,0x76,0x98,0xba,0xbb,0x9a,0x57,0x34,0x44,0x55,0x66,0x45,0x23,0x01 },
	{ 0x00,0x21,0x43,0x54,0x76,0x98,0xaa,0x89,0x56,0x33,0x33,0x54,0x55,0x44,0x12,0x00 },
	{ 0x00,0x10,0x21,0x33,0x54,0x76,0x98,0x78,0x46,0x23,0x22,0x43,0x44,0x34,0x12,0x00 },
	{ 0x00,0x00,0x10,0x21,0x32,0x54,0x76,0x67,0x35,0x12,0x21,0x32,0x33,0x23,0x01,0x00 },
	{ 0x00,0x00,0x00,0x00,0x11,0x32,0x54,0x55,0x34,0x12,0x11,0x21,0x22,0x12,0x01,0x00 },
	{ 0x00,0x00,0x00,0x00,0x10,0x21,0x33,0x34,0x23,0x01,0x00,0x11,0x11,0x01,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x10,0x21,0x22,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 }
};

static const unsigned char icon_bar[32][6] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0xb1,0x8c,0x00,0x00 },
	{ 0x00,0x00,0xd0,0x9f,0x01,0x00 },
	{ 0x00,0x00,0xd0,0x9f,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xaf,0x00,0x00 },
	{ 0x00,0x00,0xd0,0xae,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 }
};

static const unsigned char icon_bar_shadow[32][6] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x11,0x11,0x01,0x00 },
	{ 0x00,0x10,0x21,0x22,0x11,0x00 },
	{ 0x00,0x11,0x32,0x33,0x12,0x00 },
	{ 0x00,0x21,0x43,0x44,0x23,0x01 },
	{ 0x00,0x21,0x44,0x45,0x23,0x01 },
	{ 0x00,0x31,0x54,0x55,0x24,0x01 },
	{ 0x00,0x31,0x54,0x56,0x24,0x01 },
	{ 0x00,0x31,0x54,0x56,0x34,0x01 },
	{ 0x00,0x31,0x54,0x56,0x34,0x01 },
	{ 0x00,0x31,0x54,0x56,0x34,0x01 },
	{ 0x00,0x31,0x54,0x55,0x24,0x01 },
	{ 0x00,0x21,0x54,0x45,0x23,0x01 },
	{ 0x00,0x21,0x43,0x44,0x23,0x01 },
	{ 0x00,0x11,0x32,0x33,0x12,0x01 },
	{ 0x00,0x10,0x22,0x22,0x11,0x00 },
	{ 0x00,0x00,0x11,0x11,0x01,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 }
};

static const unsigned char icon_dot[32][6] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x10,0xba,0x07,0x00,0x00 },
	{ 0x00,0x00,0xfd,0x19,0x00,0x00 },
	{ 0x00,0x00,0xaa,0x17,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 }
};

static const unsigned char icon_dot_shadow[32][6] =
{
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x11,0x01,0x00,0x00 },
	{ 0x00,0x11,0x11,0x11,0x00,0x00 },
	{ 0x00,0x11,0x22,0x12,0x01,0x00 },
	{ 0x00,0x11,0x22,0x12,0x01,0x00 },
	{ 0x00,0x11,0x22,0x12,0x01,0x00 },
	{ 0x00,0x11,0x11,0x11,0x00,0x00 },
	{ 0x00,0x00,0x11,0x01,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 },
	{ 0x00,0x00,0x00,0x00,0x00,0x00 }
};