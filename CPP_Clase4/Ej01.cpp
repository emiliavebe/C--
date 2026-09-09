/*

EJERCICIO 1: Conversion de temperatura

Autor: Emilia Veloz

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que reciba una temperatura en grados Celsius y la convierta a
    grados Fahrenheit. El algoritmo debe mostrar el valor final en Fahrenheit. Usa la
    conversión estándar entre Celsius y Fahrenheit. Usa la conversión F = (C × 9/5) + 32.
  
E/P/S

Entrada: Grados celcius.

Proceso: Convertir grados celcius a grados fahrenheit.

Salida: Mostrar temperatura en grados fahrenheit.
          
*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    double celcius, fahrenheit;

    fahrenheit= 0;

    cout << "Ingrese grados celcius: ";
    cin >> celcius;

    fahrenheit= (celcius * 9/5) + 32;
    cout << "Grados fahrenheit: " << fahrenheit;

    return 0;

}