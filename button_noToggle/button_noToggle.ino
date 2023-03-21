int current;
const byte led = 2;
const byte button = 3;


void setup()
{
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  int current = digitalRead(button);
  if(current == 1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}
