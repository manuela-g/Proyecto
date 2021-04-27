#ifndef SELECTOR_H
#define SELECTOR_H
#include <Arduino.h>
#include <Tipo.h>
void setup(){
  int pinon = 2;
  int pinoff = 3;
  int pinmid = 4;
  pinMode(pinon, INPUT);
  pinMode(pinmid, INPUT);
  pinMode(pinoff, INPUT);
}
class Selector {
private:
  Selector(int raw_signal);
  public:
  raw_signal;
  float switche;
  int estaon = digitalRead(pinon);
  int estaoff = digitalRead(pinoff);
  int estamid = digitalRead(pinmid);
};

Selector::switche(raw_signal)
{if (estaon == HIGH) {
    tipo.calculo_kelvin(raw_signal)
    unidades = "Kelvin";
    }
 if (estaoff == HIGH) {
    tipo.calculo_farenheit(raw_signal);
    unidades = "farenheit" 
    }
 if (estamid == HIGH) {
    tipo.calculo_celcius(raw_signal);
    unidades = "Celcius" 
    } 
}
#endif


/* void setup() {
  pinMode(pinon, INPUT);
  pinMode(pinmid, INPUT);
  pinMode(pinoff, INPUT);
}

void loop() {
  estaon = digitalRead(pinon);
  estaoff = digitalRead(pinoff);
  estamid = digitalRead(pinmid);

  if (estaon == HIGH) {
    tipo.calculo_kelvin(raw_signal)
    unidades = "Kelvin";
    }
  if (estaoff == HIGH) {
    tipo.calculo_farenheit(raw_signal);
    unidades = "farenheit" 
    }
  if (estamid == HIGH) {
    tipo.calculo_celcius(raw_signal);
    unidades = "Celcius" 
    } */
} 