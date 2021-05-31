/**
 * Author: Shane Matsushima
 * V1.0
 * Description: controller for feeding fish. controller takes in digital signal then
 * activates fish feeder. 
 **/

#include <Servo.h>

/*
 * Sensor is from 0 to 1024
 * This program is to test ot make sure the fish feeder sensor so when the sensor flips to 0 then the fish feeder stops dispensing food 
*/

//Variable declaration
int halls = 3;
int val = 0;
int sent;
int ffr = 6;
int testHigh = 13;
int timeSafety = 0;; 

int lol = 0;
Servo FF; 

void setup() {

  FF.attach(9); //motor attached at pin 9
  pinMode(6, INPUT);

  Serial.begin(9600);
  FF.write(90); //initial turn to load fish

}

void loop() {
  // put your main code here, to run repeatedly:

  sent = digitalRead(ffr);


  if( sent == HIGH && lol == 0){

      val = analogRead(halls);
      Serial.println(digitalRead(ffr));

      while (val <= 100 && timeSafety <= 250 ){

        val = analogRead(halls);
        FF.write(63);
        Serial.println("Feeding...");
        timeSafety = timeSafety + 1;
        Serial.println(timeSafety);
        delay(1);

      }
    
     lol = 1;
     FF.write(90);
     timeSafety = 0;
     Serial.println(timeSafety);
  }
  
  
  sent = digitalRead(ffr);
  if ( sent == LOW && lol == 1){
    lol = 0;
    Serial.println(digitalRead(ffr));
  }
  Serial.println(sent);
}
  
