/*

TEMA: BUCLES Y MENÚS.

EJERCICIO 1: Numeros pares hasta N.

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
    muestre en pantalla todos los números pares desde 2 hasta N.
    Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
    de error.
  
E/P/S

Entrada: 

    - número entero positivo N.

Proceso: 

    - Leer número N
    - Verificar que N sea mayor a cero
    - Si no lo es, mostrar un mensaje de error
    - Si lo es, usar un contador que inicie en 1
    - Repetir mientras el contador sea menor o igual a N
    - Mostrar el valor del contador 

Salida: 
    - Mostrar "ERROR" si el usuario ingresa un valor <= 0.

    SiNo
    - Mostrar todos los números pares desde 1 hasta N.

*/

#include <iostream>
#include <string>
using namespace std;

    int main(){

        int N, contador;

        cout << "Ingrese un número entero positivo: ";
        cin >> N;

        if (N <= 0)
        {
            cout << "ERROR. Ingrese un número mayor a 0" << endl;

        } else {

            contador= 2;

            while (contador <= N)
            {
                cout << contador << endl;

                contador = contador + 2;
            }
            
        }

        return 0;

    }