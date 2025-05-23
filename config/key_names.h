
// Source desired key-position labels
#include "zmk-helpers/key-labels/34.h"

#ifdef INVERT_HD
    #define KEYS_V LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left-hand keys
    #define KEYS_C RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right-hand keys
    #define VT0 LT0
    #define VT1 LT1
    #define VT2 LT2
    #define VT3 LT3
    #define VT4 LT4
    #define VM0 LM0
    #define VM1 LM1
    #define VM2 LM2
    #define VM3 LM3
    #define VM4 LM4
    #define VB0 LB0
    #define VB1 LB1
    #define VB2 LB2
    #define VB3 LB3
    #define VB4 LB4
    #define CT0 RT0
    #define CT1 RT1
    #define CT2 RT2
    #define CT3 RT3
    #define CT4 RT4
    #define CM0 RM0
    #define CM1 RM1
    #define CM2 RM2
    #define CM3 RM3
    #define CM4 RM4
    #define CB0 RB0
    #define CB1 RB1
    #define CB2 RB2
    #define CB3 RB3
    #define CB4 RB4
    #define VH0 LH0
    #define VH1 LH1
    #define CH0 RH0
    #define CH1 RH1
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
		
