// Sensor de umidade de solo 

#include <Arduino.h>

const int sensorPin = A0; // Pino analógico conectado ao AO;
const int ledPin = 13;    // Pino digital conectado a um LED;
const int limiteUmidade = 500; // Limite para solo seco;
int sensorValue = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  sensorValue = analogRead(sensorPin); // Leitura do valor analógico;
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > limiteUmidade) 
  { 
    digitalWrite(ledPin, HIGH); // Liga o LED;
  }
  else
  {
    digitalWrite(ledPin, LOW); // Desliga o LED;
  }
  delay(1000);
}


