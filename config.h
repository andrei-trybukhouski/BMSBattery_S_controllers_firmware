/*
 * config.h
 *
 *  Automatically created by OSEC Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define NUMBER_OF_PAS_MAGS 8
#define limit 25
#define timeout 3125
#define wheel_circumference 1650L
#define limit_without_pas 6
#define ADC_THROTTLE_MIN_VALUE 80
#define ADC_THROTTLE_MAX_VALUE 185
#define BATTERY_VOLTAGE_MIN_VALUE 126
#define BATTERY_CURRENT_MAX_VALUE 130L
#define PHASE_CURRENT_MAX_VALUE 200L
#define REGEN_CURRENT_MAX_VALUE -100L
#define MOTOR_ROTOR_DELTA_PHASE_ANGLE_RIGHT 0
#define current_cal_a 100
#define LEVEL_1 10
#define LEVEL_2 20
#define LEVEL_3 40
#define LEVEL_4 60
#define LEVEL_5 80
#define MORSE_TIME_1 50
#define MORSE_TIME_2 50
#define MORSE_TIME_3 50
#define RAMP_END 1500
#define P_FACTOR 0.5
#define I_FACTOR 0.1
#define GEAR_RATIO 1L
#define PAS_THRESHOLD 1.7
#define RAMP_START 64000
#define limit_with_throttle_override 40
#define CORRECTION_AT_ANGLE 127
#define DISPLAY_TYPE_KT_LCD3
#define ANGLE_4_0 1
#define ANGLE_6_60 43
#define ANGLE_2_120 86
#define ANGLE_3_180 128
#define ANGLE_1_240 171
#define ANGLE_5_300 213
#define TQS_CALIB 0.0
#define ACA 1432
#define EEPROM_NOINIT // eeprom will not be cleared
#define EEPROM_INIT_MAGIC_BYTE 191 // makes sure (chance of fail 1/255) eeprom is invalidated after flashing new config
#define ADC_BATTERY_VOLTAGE_K 69
#define ACA_EXPERIMENTAL 128
#define BATTERY_VOLTAGE_MAX_VALUE 156

#endif /* CONFIG_H_ */
