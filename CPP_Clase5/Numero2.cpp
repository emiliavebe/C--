/*

EJERCICIO 2: Suma de 5 números.

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que solicite al usuario 5 números enteros y calcule la
    suma total de esos valores.
  
E/P/S

Entrada: 

    - cinco números enteros.

Proceso: 

    - Inicializar una variable suma en 0
    - Repetir 5 veces:
         pedir numero
         leer numero
         sumar ese al acumulador
    - Mostrar la suma total

Salida: 
    - Mostrar la suma total de los cinco numeros.

    - Mostrar cuántos números fueron ingresados.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int i, numero, suma;

    suma= 0;

    for (i =1; i <= 5; i++){

        cout << "Ingrese el numero " << i << " : ";
        cin >> numero;

        suma= suma + numero;
    }

    cout << "La suma total es: " << suma << endl;
    return 0;

}