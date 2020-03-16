// Pin assignments for the ESP32 Development Controller, v4.1 and later.
//   https://github.com/bdring/Grbl_ESP32_Development_Controller
//   https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

#define MACHINE_NAME            "MACHINE_ESP32_V4"

#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_14
#define Y_STEP_PIN              GPIO_NUM_26
#define Y_DIRECTION_PIN         GPIO_NUM_15
#define Z_STEP_PIN              GPIO_NUM_27
#define Z_DIRECTION_PIN         GPIO_NUM_33

#define LIMIT_MASK              B111
#define X_LIMIT_PIN             GPIO_NUM_17
#define Y_LIMIT_PIN             GPIO_NUM_4
#define Z_LIMIT_PIN             GPIO_NUM_16

// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#define SPINDLE_PWM_PIN         GPIO_NUM_2   // labeled SpinPWM
#define SPINDLE_ENABLE_PIN      GPIO_NUM_22  // labeled SpinEnbl
#define MIST_PIN                GPIO_NUM_21  // labeled Mist
#define FLOOD_PIN               GPIO_NUM_25  // labeled Flood
#define PROBE_PIN               GPIO_NUM_32  // labeled Probe

#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // labeled Start, needs external pullup