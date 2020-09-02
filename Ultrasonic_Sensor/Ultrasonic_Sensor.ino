#include <SmartInventor.h>

//Pins on PORTD ones labeled 2,3
int trigPin = 27;//2

int echoPin = 28;//3

void setup(){
  //initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  //for the trig pin and echo pin
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void lool(){
  long duration, distance;//create these two numbers

  digitalWrite(trigPin, LOW;
  //Turn off the trigger ultrasonic speaker.
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  //Turn on the sensor circuit
  //the sensor circuit emits 40khz sound pulse
  //for 10 microseconds
  delayMicroseconds(10);
  //this creates 8 pulses in 10 microseconds
  digitalWrite(trigPin, LOW);
  //then turn off the pulse

  //Now listen from the echo ultrasonic speaker
  //pulseIn() measure the amount of time (in milliseconds)
  //until the pin changes state to HIGH
  duration = pulseIn(echoPin, HIGH);

  distance = (duration/2) / 29.1;
  //so the speed of sound at sea level is 340.29 m / s

  //Serial.println(duration)
  Serial.println(distance);
}
