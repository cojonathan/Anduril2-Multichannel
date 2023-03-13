#define MODEL_NUMBER "0323"
#include "hwdef-BLF_Q8.h"

// the button lights up
#define USE_INDICATOR_LED
// the button is visible while main LEDs are on
#define USE_INDICATOR_LED_WHILE_RAMPING
// off mode: high (2)
// lockout: blinking (3)
#define INDICATOR_LED_DEFAULT_MODE ((3 << 2) + 2)

#define PWM1_LEVELS 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20, 21, 22, 24, 25, 26, 28, 29, 31, 32, 33, 35, 36, 38, 39, 41, 42, 43, 45, 46, 47, 49, 50, 51, 52, 53, 53, 54, 55, 55, 55, 55, 55, 55, 54, 53, 52, 51, 49, 47, 45, 47, 49, 52, 55, 57, 60, 63, 66, 69, 72, 76, 80, 83, 87, 91, 95, 100, 104, 109, 114, 119, 124, 129, 135, 141, 147, 153, 160, 167, 174, 181, 188, 196, 204, 213, 221, 230, 240, 249, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0
#define PWM2_LEVELS 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 6, 9, 12, 15, 18, 21, 24, 28, 31, 35, 39, 43, 47, 51, 56, 60, 65, 69, 74, 79, 84, 90, 95, 101, 107, 113, 119, 125, 132, 138, 145, 152, 160, 167, 175, 183, 191, 200, 208, 217, 226, 236, 245, 255
#define PWM_TOPS 2047, 1504, 1946, 1367, 1807, 1388, 1660, 1797, 1512, 1617, 1673, 1700, 1494, 1516, 1522, 1516, 1502, 1481, 1455, 1426, 1394, 1445, 1404, 1362, 1320, 1278, 1294, 1250, 1206, 1210, 1166, 1162, 1119, 1077, 1068, 1027, 1016, 976, 963, 926, 890, 875, 841, 809, 794, 763, 734, 706, 679, 641, 617, 594, 562, 532, 503, 477, 451, 420, 391, 364, 338, 309, 281, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
#define MAX_1x7135 104

#define HALFSPEED_LEVEL 2
#define QUARTERSPEED_LEVEL 2

#define RAMP_SMOOTH_FLOOR 1
#define RAMP_SMOOTH_CEIL 120

#define RAMP_DISCRETE_FLOOR 10
#define RAMP_DISCRETE_CEIL RAMP_SMOOTH_CEIL
#define RAMP_DISCRETE_STEPS 7

#define SIMPLE_UI_FLOOR RAMP_DISCRETE_FLOOR
#define SIMPLE_UI_CEIL 140
#define SIMPLE_UI_STEPS 5

#define USE_SIMPLE_UI_RAMPING_TOGGLE

#define THERM_FASTER_LEVEL 120 // throttle back faster when high

#define DEFAULT_2C_STYLE 1

#ifdef SIMPLE_UI_ACTIVE
#undef SIMPLE_UI_ACTIVE
#define SIMPLE_UI_ACTIVE 0
#endif

//save space
#ifdef USE_BEACON_MODE
#undef USE_BEACON_MODE
#endif

#ifdef USE_BIKE_FLASHER_MODE
#undef USE_BIKE_FLASHER_MODE
#endif

// don't blink during the ramp or at the ceiling
#ifdef BLINK_AT_RAMP_MIDDLE
#undef BLINK_AT_RAMP_MIDDLE
#endif
#ifdef BLINK_AT_RAMP_CEIL
#undef BLINK_AT_RAMP_CEIL
#endif