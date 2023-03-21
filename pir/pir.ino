const byte sensorPin = 3;
const byte led = 4;
int sensor = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  sensor = digitalRead(sensorPin);
  if(sensor==HIGH){
    Serial.println("Motion detected!");
    digitalWrite(led, HIGH);
    delay(2000);
    Serial.println("Motion Ended!");
    digitalWrite(led, LOW);
  }
}
