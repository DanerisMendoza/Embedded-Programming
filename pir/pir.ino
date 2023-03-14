const byte sensorPin = 3;
const byte led = 4;
int sensor =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(sensorPin);
  if(sensor==HIGH){
    Serial.println("Motion detected!");
    digitalWrite(led, HIGH);
    delay(2000);
    Serial.println("Motion Ended!");
    digitalWrite(led, LOW);
  }
}
