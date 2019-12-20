//This is a code to both Test and calibrate your TVC gimbal. It will go through a calibration process,
//Then execute a 10 second countdown. Once that is done, it will comence to do 15 rapid sweeps
//Afterwards it will then continue sweeping the TVC gimbal at a moderate pace.
// By: Yukon
// Canine Rocket Technologies 2019

#include <Servo.h>

int i = 0;

int j = 0;

Servo servo_10;

Servo servo_11;

int counter;

int counter2;

int counter3;

void setup()
{
  servo_10.attach(10);

  servo_11.attach(11);

  pinMode(13, OUTPUT);
}

void loop()
{
  servo_10.write(90);
  servo_11.write(90);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(13, LOW);
  delay(100); // Wait for 100 millisecond(s)
  servo_10.write(45);
  servo_11.write(135);
  delay(1500); // Wait for 1500 millisecond(s)
  servo_10.write(135);
  servo_11.write(45);
  delay(1500); // Wait for 1500 millisecond(s)
  servo_10.write(90);
  servo_11.write(90);
  delay(500); // Wait for 500 millisecond(s)
  servo_11.write(45);
  delay(250); // Wait for 250 millisecond(s)
  servo_11.write(130);
  delay(250); // Wait for 250 millisecond(s)
  servo_11.write(90);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(45);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(135);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(90);
  delay(500); // Wait for 500 millisecond(s)
  servo_11.write(45);
  delay(250); // Wait for 250 millisecond(s)
  servo_11.write(90);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(45);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(90);
  delay(250); // Wait for 250 millisecond(s)
  servo_11.write(135);
  delay(250); // Wait for 250 millisecond(s)
  servo_11.write(90);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(135);
  delay(250); // Wait for 250 millisecond(s)
  servo_10.write(90);
  for (counter = 0; counter < 10; ++counter) {
    digitalWrite(13, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(13, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) {
    servo_10.write(135);
    delay(100); // Wait for 100 millisecond(s)
    servo_11.write(45);
    delay(100); // Wait for 100 millisecond(s)
    servo_10.write(45);
    delay(100); // Wait for 100 millisecond(s)
    servo_11.write(135);
    delay(100); // Wait for 100 millisecond(s)
  }
  for (counter3 = 0; counter3 < 1000000; ++counter3) {
    servo_10.write(135);
    delay(150); // Wait for 150 millisecond(s)
    servo_11.write(45);
    delay(150); // Wait for 150 millisecond(s)
    servo_10.write(45);
    delay(150); // Wait for 150 millisecond(s)
    servo_11.write(135);
    delay(150); // Wait for 150 millisecond(s)
  }
}