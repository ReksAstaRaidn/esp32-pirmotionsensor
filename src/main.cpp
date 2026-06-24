#include <Arduino.h>

// ganti value variable pin sesuai dengan pin yang digunakan pada ESP32 nantinya
int LEDR = 12;
int BUZZER = 25;
int SGERAK = 14;

void setup() {
  Serial.begin(115200);
  pinMode(LEDR, OUTPUT);
  pinMode(SGERAK, INPUT_PULLDOWN);
  pinMode(BUZZER, OUTPUT);  
  Serial.println("Program Dimulai");
  delay(1000);
}

void loop() {
  int sensor = digitalRead(SGERAK);
  
  if (sensor == HIGH) {
    Serial.println("Gerakan Terdeteksi");
    digitalWrite(LEDR, HIGH);
    digitalWrite(BUZZER, HIGH); 
    delay(3000);               
    digitalWrite(BUZZER, LOW);  
    digitalWrite(LEDR, LOW);
  } 
  else {
    Serial.println("Tidak Ada Gerakan");
    digitalWrite(LEDR, LOW);
    digitalWrite(BUZZER, LOW);
  }

  delay(2000);
}
