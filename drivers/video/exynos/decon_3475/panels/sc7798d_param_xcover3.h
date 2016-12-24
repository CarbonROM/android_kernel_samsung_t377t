#ifndef __SC7798D_PARAM_H__
#define __SC7798D_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>


struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

#define POWER_IS_ON(pwr)			(pwr <= FB_BLANK_NORMAL)

#define NORMAL_TEMPERATURE			25	/* 25 degrees Celsius */
#define UI_MAX_BRIGHTNESS 255
#define UI_MIN_BRIGHTNESS 0
#define UI_DEFAULT_BRIGHTNESS 134

#define SC7798D_ID_REG				0x04
#define SC7798D_ID_LEN				3

static const unsigned char SEQ_INIT1_1[] = {
	0xB9,
	0xF1, 0x08, 0x00
};

static const unsigned char SEQ_INIT1_2[] = {
	0xB1,
	0x31, 0x0C, 0x0C, 0xA7, 0x33, 0x01, 0xB7,
};

static const unsigned char SEQ_INIT1_3[] = {
	0xC6,
	0x00, 0x00, 0xFD,
};

static const unsigned char SEQ_INIT1_4[] = {
	0xE3,
	0x03, 0x03, 0x03, 0x03,
};

static const unsigned char SEQ_INIT1_5[] = {
	0xB8,
	0x03, 0x22,
};

static const unsigned char SEQ_INIT2_1[] = {
	0xBA,
	0x31, 0x00, 0x44, 0x25, 0x91, 0x0A, 0x00, 0x00, 0xC2, 0x34,
	0x00, 0x00, 0x04, 0x02, 0x1D, 0xB9, 0xEE, 0x40,
};

static const unsigned char SEQ_INIT2_2[] = {
	0xB3,
	0x00, 0x00, 0x00, 0x00, 0x0C, 0x0A, 0x25, 0x20,
};

static const unsigned char SEQ_INIT2_3[] = {
	0xB4,
	0x00,
};

static const unsigned char SEQ_INIT2_4[] = {
	0xCC,
	0x0E,
};

static const unsigned char SEQ_INIT2_5[] = {
	0xBC,
	0x67,
};

static const unsigned char SEQ_INIT2_6[] = {
	0xB2,
	0x03,
};

static const unsigned char SEQ_INIT2_7[] = {
	0xC0,
	0x73, 0x50, 0x00, 0x08, 0x70,
};

static const unsigned char SEQ_INIT2_8[] = {
	0xE9,
	0x00, 0x00, 0x06, 0x00, 0x00, 0x6E, 0x29, 0x12,
	0x30, 0x00, 0x48, 0x08, 0x6E, 0x29, 0x47, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00,
	0x89, 0x98, 0x33, 0x11, 0x77, 0x55, 0x13, 0x00,
	0x00, 0x89, 0x98, 0x22, 0x00, 0x66, 0x44, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_INIT2_9[] = {
	0xEA,
	0x00, 0x00, 0x98, 0x98, 0x44, 0x66, 0x00, 0x22,
	0x20, 0x00, 0x00, 0x98, 0x98, 0x55, 0x77, 0x11,
	0x33, 0x31, 0x30, 0x00, 0x00, 0xFF, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};


static const unsigned char SEQ_INIT3_1[] = {
	0xE0,
	0x01, 0x08, 0x0B, 0x2E, 0x36, 0x3F, 0x0D, 0x2F,
	0x04, 0x0A, 0x0E, 0x14, 0x12, 0x15, 0x16, 0x32,
	0x38, 0x01, 0x05, 0x05, 0x30, 0x35, 0x3F, 0x09,
	0x2C, 0x04, 0x0A, 0x0D, 0x0C, 0x11, 0x0D, 0x10,
	0x2C, 0x35,
};

static const unsigned char SEQ_INIT4_1[] = {
	0xC7,
	0x80, 0x00,
};

static const unsigned char SEQ_INIT4_2[] = {
	0xC8,
	0x11, 0x00,
};

static const unsigned char SEQ_INIT4_3[] = {
	0x53,
	0x24, 0x00,
};

static const unsigned char SEQ_INIT4_4[] = {
	0x51,
	0x00, 0x00,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};


static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_CABC_ON[] = {
	0x55,
	0x01, 0x00
};

static const unsigned char SEQ_CABC_OFF[] = {
	0x55,
	0x00, 0x00
};

static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xF1,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_F1[] = {
	0xF1,
	0xA5, 0xA5,
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A,
};

static const unsigned char SEQ_TEST_KEY_OFF_FC[] = {
	0xFC,
	0xA5,
};

#endif /* __SC7798D_PARAM_H__ */
