#include "zuador.h"
#include <Arduino.h>

void inicializar(int pino) {
  pinMode(pino, OUTPUT);
  digitalWrite(pino, LOW); 
}

void zuada(int pino,int duracao) {
  tone(pino, 1000, duracao); 
}

void desligarBuzzer(int pino) {
  noTone(pino); 
}