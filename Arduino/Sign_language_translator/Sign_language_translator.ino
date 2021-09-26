#include<SoftwareSerial.h>

const int val0=A0;
const int val1=A1;
const int val2=A2;
const int val3=A3;
const int val4=A4;
int count=0;
int power;

SoftwareSerial bt(2,3 ); /* (Rx,Tx) */

void setup() {
  bt.begin(9600); 
  Serial.begin(9600); 
}

void loop() {
  
  int thumb = analogRead(val0);
  int index = analogRead(val1);
  int middle = analogRead(val2);
  int ring = analogRead(val3);
  int little = analogRead(val4);
  
  Serial.println(thumb);
  Serial.println(index);
  Serial.println(middle);
  Serial.println(ring);
  Serial.println(little);
   Serial.println();
  delay(1000);
 
  if (bt.available()) 
  {
    Serial.write(bt.read());
  }

if((thumb>800)&&(index>900))
{
  count++;
}

if(count%2==0)
{
  int power=0;
}
else{
  int power=1;
}

  
  if(power=1)
 {
  //bt.println("device on");
  Serial.println("device on");
if(index>900)
{
  bt.println("how are you");
}
if(middle>800)
{
  bt.println("i am hungry");
}
if(ring>800)
{
bt.println("Help");
} 
if((thumb>800)&&(little>800))
{
bt.println("i am not feeling well");
} 
if((thumb<650)&&(index>900)&&(little>800))
{
bt.println("ok fine");
} 
if((thumb>800)&&(index>900)&&(middle>800)&&(ring>800)&&(little>800))
{
bt.println("        thank you");
} 
}
else{
 // bt.println("device off");
  Serial.println("device off"); 
}

delay(1500);  
}
