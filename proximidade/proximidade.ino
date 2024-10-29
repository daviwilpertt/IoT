int pinoLed = 33;
int pinoSensor = 32;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoLed, OUTPUT);
  pinMode(pinoSensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  bool sensor = digitalRead(pinoSensor);

  if(sensor == HIGH){
    digitalWrite(pinoLed, LOW);
  }
  else {
    digitalWrite(pinoLed, HIGH);
  }
}
