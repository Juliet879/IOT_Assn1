#include <Servo.h>
int red = 2;
int green = 3;
int blue = 4;
int pinPot = 1;
int val;
Servo myservo;


void setup(){
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(pinPot,INPUT);
  myservo.attach(10);
  
}

void loop(){
  val = analogRead(pinPot);
  val = map(val,0,1023,0,180);
  myservo.write(val);
  

  for(val=0; val<60; val++){
    myservo.write(val);
    delay(5);
    
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  }
   for(val=0; val<120; val++){
    myservo.write(val);
    delay(5);
     
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  }
   for(val=0; val<180; val++){
    myservo.write(val);
    delay(5);
     
  digitalWrite(blue,HIGH);
  delay(500);
  digitalWrite(blue,LOW);
  }
}