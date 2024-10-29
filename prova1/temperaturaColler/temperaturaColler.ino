#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN 33              

#define PINO_RELE 25           
#define DHTTYPE DHT11          
#define TEMPERATURA_MAX 27.0   
#define TEMPERATURA_MIN 26.0   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(PINO_RELE, OUTPUT);
  digitalWrite(PINO_RELE, LOW); 
}

void loop() {
  delay(2000); 

  float temperatura = dht.readTemperature(); 
  Serial.print("Temperatura: ");
  Serial.println(temperatura);

  if (isnan(temperatura)) {
    Serial.println("Falha ao ler do sensor DHT!");
  } else {
  
    if (temperatura >= TEMPERATURA_MAX) {
      Serial.println("Ligando cooler...");
      digitalWrite(PINO_RELE, HIGH); 
    } else {
      Serial.println("Desligando cooler...");
      digitalWrite(PINO_RELE, LOW); 
    }
  }
}
