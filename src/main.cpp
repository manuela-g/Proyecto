//MEDIDOR DE TEMPERARTURA CON MAX6675
//MANUELA GOMEZ MESA
#include <Arduino.h>
#include <aggregator.h>
#include <selector.h>
#i/* nclude <salida.h>
#include <transformator.h>
#include <max6675.h>

#include <inicio.h>  */

//AnalogSensor sensor = AnalogSensor(0x7E, A0);
//DigitalSensor dsensor = DigitalSensor(0x7F, 4);

int raw_signal = 27;
void setup() {
  /* Serial.begin(9600);
  delay(500); */

}

void loop() {

 
  /* float raw_signal = ktc.readCelsius(); */
  //raw_signal = ktc.readFahrenheit();

  int processed_signal = Selector.switche(raw_signal);
  //int processed_signal = transformator(raw_signal);
  Serial.print(processed_signal);

 /*  salida(processed_signal);*/
  float processed_signal = aggregator(raw_signal);
  
 /* if (media > 35)
  {
    digitalWrite(led , HIGH);   
    delay(500);                   
    if (media <= 35)
    {
      digitalWrite(led , LOW);    
      delay(500);                  
    }
  } */

}