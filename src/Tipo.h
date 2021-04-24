#ifndef TIPO_H
#define TIPO_H
#include <string>
#include <iostream> 
#include <Arduino.h>

using namespace std;
class Tipo {
	public:
 		string unidades; 
 		int respuesta;
 		
  };
 int main () {
 	int n = 27;
 	int k = 273.15;
 	Tipo calculo_kelvin;
 	calculo_kelvin.unidades = "Kelvin";
 	calculo_kelvin.respuesta = k + n;
 
 	Tipo calculo_farenheit;
 	calculo_farenheit.unidades = "farenheit";
 	calculo_farenheit.respuesta = (n * 9/5) + 32;
  
 	Tipo calculo_centigrados;
 	calculo_centigrados.unidades = "centigrados";
 	calculo_centigrados.respuesta = n;
 
 	cout << calculo_farenheit.unidades << " " <<  						calculo_farenheit.respuesta;
 	return 0;
}
#endif