#include <Arduino.h>
#include <Transormator.h>
#ifndef SELECTOR_H
#define SELECTOR_H

class Selector {
private:
  Selector(raw_signal);
  pinMode(pinon, INPUT);
  pinMode(pinmid, INPUT);
  pinMode(pinoff, INPUT);
  selector(raw_signal);
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