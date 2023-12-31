/*
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/esp32-stepper-motor-28byj-48-uln2003/
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files.
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  Based on Stepper Motor Control - one revolution by Tom Igoe
*/
// #include <Arduino.h>
// #include <Stepper.h>

// // const int stepsPerRevolution = 2048;  // change this to fit the number of steps per revolution
// const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution

// // ULN2003 Motor Driver Pins
// #define IN1 0
// #define IN2 1
// #define IN3 3
// #define IN4 4

// // initialize the stepper library
// Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);

// int stepCount = 0;         // number of steps the motor has taken

// void setup() {
//   // initialize the serial port:
//   Serial.begin(115200);
// }

// void loop() {
//   // step one step:
//   myStepper.step(1);
//   Serial.print("steps:");
//   Serial.println(stepCount);
//   stepCount++;
//   delay(1);
// }