int mode = 0, old = 0, current;
const byte buzzer = 2;
const byte button = 3;
const byte potentiometer = A0;
int potentiometerReading = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  potentiometerReading = analogRead(potentiometer); 
  potentiometerReading = map(potentiometerReading,0,1023,0,1000);
  Serial.println(potentiometerReading);

  int current = digitalRead(button);
  if(current == 0 && old == 1){
    tone(buzzer, potentiometerReading, 2000);
  }
  old = current;
}

