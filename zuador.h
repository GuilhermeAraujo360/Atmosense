#ifndef ZUADOR_H
#define ZUADOR_H

void inicializarB(int pino);
void zuada(int pino, int duracao);
void desligarBuzzer(int pino);

// funções LED 

void inicializarLedPrincipal(int pinoL);
void inicializarL(int pinoL);
void off(int pinoL);
void blink(int pinoL);

#endif 