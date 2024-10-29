int ledPin = 33;      // Pino onde o LED está conectado
int buttonPin = 32;    // Pino onde o botão está conectado
int buttonState = 0;  // Variável para armazenar o estado do botão

void setup() {
  pinMode(ledPin, OUTPUT);   // Define o pino do LED como saída
  pinMode(buttonPin, INPUT); // Define o pino do botão como entrada
}

void loop() {
  buttonState = digitalRead(buttonPin); // Lê o estado do botão

  if (buttonState == HIGH) {  // Se o botão estiver pressionado
    digitalWrite(ledPin, HIGH);  // Liga o LED
  } else {
    digitalWrite(ledPin, LOW);   // Desliga o LED
  }
}
