#include <SoftwareSerial.h>
int rxdPin = 4;
int txdPin = 2;

String BT_data;
String Arduino_data;

SoftwareSerial Btserial(rxdPin,txdPin);


void setup() {
  Serial.begin(9600);
  Btserial.begin(9600);
}

void loop() {
  // mobile to arduino
  if(Btserial.available()){
    Serial.println(Btserial.readString());
  }
  // // arduino to mobile
  if(Serial.available()){
    Btserial.println(Serial.readString());
  }  

 
}
