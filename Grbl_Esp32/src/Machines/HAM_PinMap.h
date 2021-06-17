#pragma once
// clang-format off

/*
    HAM pinMap, based on various others
    Part of Grbl_ESP32

    Pin assignments for the ESP32 Development Controller, v4.1 and later.
    https://github.com/bdring/Grbl_ESP32_Development_Controller
    https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

    2018    - Bart Dring
    2020    - Mitch Bradley

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/

#define MACHINE_NAME            "HAM Custom Pin Map"

#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_14
#define Y_STEP_PIN              GPIO_NUM_27
#define Y_DIRECTION_PIN         GPIO_NUM_26
#define Z_STEP_PIN              GPIO_NUM_25
#define Z_DIRECTION_PIN         GPIO_NUM_33

#define X_LIMIT_PIN             GPIO_NUM_17
#define Y_LIMIT_PIN             GPIO_NUM_4
#define Z_LIMIT_PIN             GPIO_NUM_16

#define USER_DIGITAL_PIN_0   GPIO_NUM_32 // Connected to Due pin 52, controls servo 0
#define USER_DIGITAL_PIN_1   GPIO_NUM_21 // Connected to Due pin 50, controls servo 1
#define USER_DIGITAL_PIN_2   GPIO_NUM_22 // Connected to Due pin 48, controls servo 2
#define USER_DIGITAL_PIN_3   GPIO_NUM_18 // Connected to Due pin 46


// OK to comment out to use pin for other features
#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

// Define as laser instead of spindle
#define SPINDLE_TYPE            	SpindleType::LASER
#define LASER_OUTPUT_PIN      		GPIO_NUM_2   	// labeled SpinPWM
				

//#define COOLANT_MIST_PIN        GPIO_NUM_21  // labeled Mist
//#define COOLANT_FLOOD_PIN       GPIO_NUM_25  // labeled Flood
//#define PROBE_PIN               GPIO_NUM_32  // labeled Probe


/*
#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // labeled Door,  needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // labeled Reset, needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // labeled Hold,  needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // labeled Start, needs external pullup
*/