// /*
//   Rui Santos
//   Complete project details at https://RandomNerdTutorials.com/esp32-stepper-motor-28byj-48-uln2003/
  
//   Permission is hereby granted, free of charge, to any person obtaining a copy
//   of this software and associated documentation files.
  
//   The above copyright notice and this permission notice shall be included in all
//   copies or substantial portions of the Software.
  
//   Based on Stepper Motor Control - one revolution by Tom Igoe
// */
// #include <Arduino.h>
// #include <Stepper.h>

// #define LEDR_PIN 5
// #define LEDG_PIN 6
// #define LEDB_PIN 7
// #define BUZZ_PIN 3

// int stepCount = 0;         // number of steps the motor has taken

// void setup() {
//   // initialize the serial port:
//   Serial.begin(115200);
//   pinMode(BUZZ_PIN,OUTPUT);
//   pinMode(LEDR_PIN,OUTPUT);
//   pinMode(LEDG_PIN,OUTPUT);
//   pinMode(LEDB_PIN,OUTPUT);
// }

// void loop() {
//   int i;
//   while(1) 
//   { 
//     for(i=0;i<50;i++)
//     { 
//       digitalWrite(BUZZ_PIN,HIGH);
//       delay(1);
//       digitalWrite(BUZZ_PIN,LOW);
//       delay(1);
//     } 
//     delay(1000);
//     for(i=0;i<100;i++)
//     { 
//       digitalWrite(BUZZ_PIN,HIGH);
//       delay(3);
//       digitalWrite(BUZZ_PIN,LOW);
//       delay(3);
//     } 
//     delay(1000);
//   } 
//   // step one step:
//   // digitalWrite(LEDR_PIN,HIGH);
//   // digitalWrite(BUZZ_PIN,HIGH);
//   // delay(1000);
//   // digitalWrite(LEDR_PIN,LOW);
//   // digitalWrite(BUZZ_PIN,LOW);
//   // delay(1000);
// }