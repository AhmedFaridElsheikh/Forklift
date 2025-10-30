#ifndef CONFIG_H
#define CONFIG_H

/**************** Drive Motors (PWM Only - Dual PWM Control) ****************/
#define MOTOR_right_RPWM 4  // Right motor forward
#define MOTOR_right_LPWM 5  // Right motor reverse
#define MOTOR_left_RPWM 13  // Left motor forward
#define MOTOR_left_LPWM 25  // Left motor reverse

/**************** Encoder Pins (PCNT-Compatible with Internal Pull-Ups) ****************/
#define ENCODER_right_A 14  // PCNT-capable + internal pull-up
#define ENCODER_right_B 15  // PCNT-capable + internal pull-up
#define ENCODER_left_A 16   // PCNT-capable + internal pull-up
#define ENCODER_left_B 17   // PCNT-capable + internal pull-up

/**************** RFID Module (SPI - Safe GPIOs) ****************/
#define RFID_SS_PIN 26   // Replaced GPIO 0 with safe GPIO
#define RFID_RST_PIN 12  // Safe output pin
#define RFID_MOSI 23     // SPI MOSI
#define RFID_MISO 19     // SPI MISO
#define RFID_SCK 18      // SPI SCK

/**************** IMU (I2C - Standard Pins) ****************/
#define IMU_SDA 21        // I2C SDA
#define IMU_SCL 22        // I2C SCL
#define INTERRUPT_PIN 34  // Input-only OK for interrupt

/**************** Built-in LED ****************/
#define LED_PIN 2  // Boot-safe if kept LOW at startup

/**************** Motion Parameters ****************/
#define WHEEL_DIAMETER_CM 12.5
#define COUNTS_PER_REV 50
#define GEAR_RATIO 87.0
#define PWM_FREQ 500
#define PWM_RESOLUTION 8  // 8-bit → 0 to 255
#define COUNTS 8860
#define L .3f
#define WHEEL_RADIUS .625f

/**************** PWM Channels ****************/
#define rrpwm_motor_channel 0
#define rlpwm_motor_channel 1
#define lrpwm_motor_channel 2
#define llpwm_motor_channel 3

#endif  // CONFIG_H
