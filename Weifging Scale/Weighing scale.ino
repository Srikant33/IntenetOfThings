#include "HX711.h"
HX711 scale(3,2);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
long avg;
long val;
float c;
void loop() {
  c=c+1;
  val=scale.read();
  avg=(avg*(c-1)+val)/c;
  // put your main code here, to run repeatedly:
Serial.println(scale.read()+98955);
}
