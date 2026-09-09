/*

EJERCICIO 2: Área y perímetro de un rectángulo.

Autor: Emilia Veloz

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que pida la base y altura de un rectángulo, deberá calcular
    y mostrar el área y perímetro del mismo.
  
E/P/S

Entrada: base, altura

Proceso: Calcular área y perímetro  del rectángulo con la base y altura que se recibe.

Salida: Mostrar área y perímetro del rectángulo.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    double base, altura, area, perimetro;

    area= 0;
    perimetro= 0;

    cout << "Ingrese base del rectángulo: ";
    cin >> base;
    cout << "Ingrese altura de rectángulo: ";
    cin >> altura;

    while (base == altura){

        cout << "Ingrese base y altura nuevamente (base != altura): ";
        cout << "Nueva base: ";
        cin >> base;
        cout << "Nueva altura: ";
        cin >> altura;

    }
    
    area= base * altura;
    perimetro= 2 * (base + altura);
    cout << "El área es: " << area << endl;
    cout << "El perímetro es: " << perimetro << endl;

    return 0;
}