/*

EJERCICIO 4: Tabla de multiplicar repetitiva con while

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que solicite al usuario un número entero y muestre su
    tabla de multiplicar del 1 al 10.
  
E/P/S

Entrada: 

    - Un número entero.

Proceso: 

    - Leer numero entero
    - Mostrar la tabla de multiplicar de dicho número

Salida: 
    - Mostrar la tabla de multiplicar del número entero.

    - Mostrar mensaje indicando que la tabla fue generada
      correctamente.

*/

#include <iostream>
using namespace std;

int main(){

     int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

     int i = 1;

     while (i <= 10)
     {
        cout << numero << "x" << i << "=" << numero * i << endl;
        i= i + 1;
     }
       

    cout << "La tabla fue generada correctamente." << endl;

    return 0;
}