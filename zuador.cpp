#include "zuador.h"
#include <Arduino.h>

void inicializarB(int pino) {
  pinMode(pino, OUTPUT);
  digitalWrite(pino, LOW); 
}

void zuada(int pino,int duracao) {
  tone(pino, 1000, duracao); 
}

void desligarBuzzer(int pino) {
  noTone(pino); 
}

// FUNÇÕES LED

void inicializarLedPrincipal(int pinoL) {
  pinMode(pinoL, OUTPUT);
  digitalWrite(pinoL, HIGH);
}

void inicializarL(int pinoL) {
  pinMode(pinoL, OUTPUT);
  digitalWrite(pinoL, LOW);
}

void off(int pinoL) {
  digitalWrite(pinoL, LOW);
}

void blik(int pinoL) {
  digitalWrite(pinoL, HIGH);
  delay(500);
  digitalWrite(pinoL, LOW);
}