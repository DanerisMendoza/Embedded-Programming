int button = 2, led = 3;
bool pressed = false;
void setup() {
pinMode(led, OUTPUT);
pinMode(button, INPUT_PULLUP);


Serial.begin(9600);
Serial.println("success");
}

void loop() {
  bool currentState = digitalRead(button);
  if(currentState == pressed){
    digitalWrite(led,HIGH);
    Serial.println("Button is pressed");
    delay(500);
  }
  else{
    digitalWrite(led,LOW);
    delay(500);
  }
}
