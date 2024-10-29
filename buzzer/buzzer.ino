int pinoBuzzer = 33;
int pinoProx = 32;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoProx, INPUT);
}

void loop() {
  bool state = digitalRead(pinoProx);

  if(state == LOW){
    for(int i = 0; i < 2; i++){
      tone(pinoBuzzer, 1500, 200);
      delay(300);
      noTone(pinoBuzzer);
    }
  while(digitalRead(pinoProx) == LOW){
    delay(100);
    }
  }
}