#include <Servo.h>
Servo name_servo;
void setup() 
{
pinMode(13,OUTPUT);
pinMode(12,INPUT);
pinMode(8,INPUT);
name_servo.attach(10);
}

void loop() 
{
  int IR1=digitalRead(8);//to check whether someone is there 
  int IR2=digitalRead(12);//to check whether the dusbin is full
  if(IR1==1 && IR2==0)
  {
    name_servo.write(-90);
    delay(1000);
  }
  else if(IR1==1 && IR2==1)
  {
    digitalWrite(13,HIGH);//to indicate the dustbin is full
    delay(150);
    digitalWrite(13,LOW);
    delay(150);
  }
   else
   {name_servo.write(90);
    delay(500);}
}

