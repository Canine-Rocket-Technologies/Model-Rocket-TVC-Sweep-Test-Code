/*This is a simple sketch to calibrate your TVC gimbal. It will cycle thorugh both X and Y axis servos, followed by a 10 second
countdown. After the countdwon is over the ystsme will do a series of quick sweeps followed by a mid speed sweep. It is not 
reccomened to leave the gimbal vectoring for long periods of time, or the sero may overheat

Wiring:
Arduino:
Buzzer             D13
Servo X            D10
Servo Y            D11
LED and resistor   D13
Battery            Vin, GND

Servo X:
Brown              GND
Red                5v
Orange             D10

Servo Y:
Brown              GND
Red                5v
Orange             D11

Code by: Yukon
Canine Rocket Technologies 2019
*/

#include <Servo.h>

int i = 0;

int j = 0;


Servo servo_10;
Servo servo_11;

int counter;

int counter2;

int counter3;

void setup()

//Change number below depending on what digital pin you want to use on the arduino for the servo

void loop()
{
  //This is the startup procedure
 
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
  
  
  //This is the countdown procedure
 { for (counter = 0; counter < 10; ++counter) { //Change the number 10 to however long you want the countdown to be
    digitalWrite(13, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(13, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  for (counter2 = 0; counter2 < 15; ++counter2) { //Change the number 15 to however long you want the countdown to be
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
