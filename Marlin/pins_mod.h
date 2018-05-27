/*

Wiring that I made on my MKS Gen 1.3

*/


// Define the CS Pins

#define X_CS_PIN           42
#define Y_CS_PIN           44

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
    #define LCD_PINS_ENABLE     -1
    #define LCD_PINS_D6         -1
  #endif
  #if ENABLED(NEWPANEL)
    #if ENABLED(REPRAPWORLD_GRAPHICAL_LCD)
      #define SD_DETECT_PIN     -1
    #elif ENABLED(VIKI2) || ENABLED(miniVIKI)
      #define DOGLCD_A0         -1
    #elif ENABLED(MINIPANEL)
      #define BEEPER_PIN        -1
      #define DOGLCD_A0         -1
    #else
      #if ENABLED(REPRAPWORLD_KEYPAD)
        #define SHIFT_CLK       -1
        #define SHIFT_LD        -1
      #endif
    #endif
  #endif
#endif
#if ENABLED(ZONESTAR_LCD)
  #define LCD_PINS_ENABLE    -1
  #define LCD_PINS_D6        -1
#endif


// Make the rest is working...

// Heatbed
#define HEATER_BED_PIN 8 // PWM
// Extruder Cooling Fan
#define FAN1_PIN 7 // PWM
#define FAN2_PIN 10 // PWM
// Part Cooling Fan
#define FAN_PIN 9 // PWM
