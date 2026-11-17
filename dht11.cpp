#include "dht11.h"
#include "zuador.h"
#define DHTPIN 2
#define DHTTYPE DHT11


static DHT dht(DHTPIN, DHTTYPE);

void inicializar() {
  dht.begin();
}

float Temperatura() {
  return dht.readTemperature();
}

float Umidade() {
  return dht.readHumidity();
}
float sensasao(float temp, float umi, bool isFahrenheit = false) {
  return dht.computeHeatIndex(temp, umi, isFahrenheit);
}

void calor(float temp, int pino, int duracao) {
  if (temp > 100) {
    zuada(pino, duracao);
  }
}

void secadura(float umi, int pino, int duracao) {
  if (umi >= 70) {
    zuada(pino, duracao);
  }
}
