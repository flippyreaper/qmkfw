#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003,  \
	K100, K101, K102, K103,  \
	K200, K201, K202, K203,  \
	K300, K301, K302,  \
	 K401, K402, K403      \
) { \
	{ K000,   K001,  K002,  K003,   }, \
	{ K100,   K101,  K102,  K103,   }, \
	{ K200,   K201,  K202,  K203,  }, \
	{   K300,  K301,  K302, KC_NO,   }, \
	{ KC_NO,  K401,   K402,  K403     } \
}

#endif