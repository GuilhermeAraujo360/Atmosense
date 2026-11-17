#include "dht11.h"
#include "zuador.h"
// botei um pino aleátorio para o buzzere para o LED, modifiquem conforme a necessidade de vcs
void setup() {
  Serial.begin(9200);
  inicializar();
  inicializarB(1);
  inicializarL(2);
  inicializarLedPrincipal(3);


}

void loop() {

    float t = Temperatura();
    float u = Umidade();
    erro(t, u);
    Sensasao(t, u, false);

    calor(t, 1, 200);
    secadura(u, 1, 300);


}
