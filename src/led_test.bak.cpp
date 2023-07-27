// #include <Arduino.h>

// // #define LED_PIN 2
// #define LEDR_PIN 5
// #define LEDG_PIN 6
// #define LEDB_PIN 7

// void setup()
// {
//     Serial.begin(115200);
//     // pinMode(LED_PIN,OUTPUT);
//     pinMode(LEDR_PIN,OUTPUT);
//     pinMode(LEDG_PIN,OUTPUT);
//     pinMode(LEDB_PIN,OUTPUT);
// }

// void loop()
// {
//     Serial.println("Hello world!");
//     delay(1000);
//     for(int i=0;i<150;i+=5)
//     {
//         analogWrite(LEDR_PIN, i);
//         for(int j=0;j<150;j+=5)
//         {
//             analogWrite(LEDG_PIN, j);
//             for(int k=0;k<150;k+=5)
//             {
//                 analogWrite(LEDB_PIN, k);
//                 delay(10);
//             }
//         }
//     }
// }   