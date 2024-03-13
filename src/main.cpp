#include <Arduino.h>
// Define pins
const int buzzerPin = 6; // Buzzer connected to digital pin 8
const int ledPin = 9;    // LED connected to digital pin 13
const int touchPin = 7;  // Wire touch sensor connected to digital pin 2

void setup()
{
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(touchPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Check if wire is touched
  if (digitalRead(touchPin) == LOW)
  {
    // Wire is touched, activate buzzer and LED
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(100); // Buzz for 1 second
    // Wait for 1 second
  }
  else
  {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
}
