#ifndef DHT11_H
#define DHT11_H

#include <Arduino.h>
#include <DHT.h>

void inicializar();
float Temperatura();
float Umidade();
float Sensasao(float temp, float umi, bool isFahrenheit = false);
void calor(float temp, int pino, int duracao);
void secadura(float umi, int pino, int duracao);
#endif