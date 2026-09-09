/*

EJERCICIO 3: Descuento por edad

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que reciba la edad de una persona y determine el precio a pagar
    según estas reglas: si la edad es 18 o más, el precio es 5 dólares; si la edad es menor
    a 18, el precio es 2.50 dólares, al final se debe mostrar el precio final.
  
E/P/S

Entrada: edad de una persona

Proceso: Calcular el precio a pagar segun el rango de edad.

Salida: Mostrar el precio final segun la edad de la persona.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){

        cout << "Precio final: 5.00$";

    } else {

        cout << "Precio final: 2.50$";
        
    }

    return 0;

}