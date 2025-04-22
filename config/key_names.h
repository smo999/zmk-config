
// Source desired key-position labels
#include "zmk-helpers/key-labels/34.h"

#ifdef INVERT_HD
    #define KEYS_V LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
    #define KEYS_C RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#else
    #define KEYS_C LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
    #define KEYS_V RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
#endif


#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys

#define THUMBS LH0 LH1 RH1 RH0                                      // thumb keys

// my layers

#define	l_alpha		0
#define	l_shifted	1
#define	l_aug		2
#define	l_sym		3
#define	l_num		4
#define	l_mouse		5
#define	l_nav		6
#define	l_conf		7
		
