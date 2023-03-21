byte const ldr = A0;
int ldrReading = 0;
const byte buzzer = 2;

void setup() {
  pinMode(ldr, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  ldrReading = analogRead(ldr);
  tone(buzzer, ldrReading, 1000);
  if(ldrReading < 200){
    noTone(buzzer);
  }
  Serial.println(ldrReading);
}
