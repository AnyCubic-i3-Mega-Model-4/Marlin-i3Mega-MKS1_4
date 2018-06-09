/*

Wiring that I made on my MKS Gen 1.4

*/

// Inherit everything
#include "pins_MKS_13.h"

// Sanity checks to be sure chosen pins aren't used for something else

// Free Pin 42
#undef Z_SERIAL_RX_PIN
#undef E_MUX1_PIN

// Free Pin 44
#undef Z_SERIAL_TX_PIN
#undef CASE_LIGHT_PIN
#undef SPINDLE_LASER_PWM_PIN
#undef E_MUX2_PIN

// Make sure the LCD section isn't using pins 42 and 44
// it shouldn't, but who knows what's happening in that section?

#if ENABLED(ULTRA_LCD)
  #if ENABLED(NEWPANEL) && ENABLED(PANEL_ONE)
    #define LCD_PINS_ENABLE -1
    #define LCD_PINS_D6 -1
  #endif
  #if ENABLED(NEWPANEL)
    #if ENABLED(REPRAPWORLD_GRAPHICAL_LCD)
      #define SD_DETECT_PIN -1
    #elif ENABLED(VIKI2) || ENABLED(miniVIKI)
      #define DOGLCD_A0 -1
    #elif ENABLED(MINIPANEL)
      #define BEEPER_PIN -1
      #define DOGLCD_A0 -1
    #else
      #if ENABLED(REPRAPWORLD_KEYPAD)
        #define SHIFT_CLK -1
        #define SHIFT_LD -1
      #endif
    #endif
  #endif
#endif
#if ENABLED(ZONESTAR_LCD)
  #define LCD_PINS_ENABLE -1
  #define LCD_PINS_D6 -1
#endif


// Define the CS Pins of the TMC's

#undef X_CS_PIN
#undef Y_CS_PIN
#undef Z_CS_PIN
#undef E0_CS_PIN 
#undef E1_CS_PIN

#define X_CS_PIN  42
#define Y_CS_PIN  44
#define Z_CS_PIN  -1 // dumb mode
#define E0_CS_PIN -1 // dumb mode
#define E1_CS_PIN -1 // dumb mode


// Make sure the rest is properly configured

// Power Outputs

#define MY_HOTEND_FAN            7
#define MY_HOTEND_HEATER        10
#define MY_PART_COOLING_FAN      9
#define MY_HEATBED               8
#define MY_CONTROLLER_FAN        5

#undef HEATER_BED_PIN
#undef HEATER_0_PIN
#undef FAN_PIN
#undef FAN1_PIN

#define HEATER_BED_PIN  MY_HEATBED
#define HEATER_0_PIN    MY_HOTEND_HEATER
#define FAN_PIN         MY_PART_COOLING_FAN
#define FAN1_PIN        MY_HOTEND_FAN
