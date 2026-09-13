/*

EJERCICIO 5: Intercambio de dos números.

Autor: Emilia Veloz 

Fecha: 11/09/2026

ENUCIADO: 

    Desarrolla un programa que pida al usuario un número entero positivo n y luego
    incremente un contador desde 0 hasta n, usando una función que actualice el valor
    del contador. 

E/P/S

Entrada: 

    - 1 numero entero positivo.

Proceso: 

    - Leer los 2 numeros enteros.
    - Mostrar los 2 valores.
    - Hacer un intercambio de valores.
    - Mostrar los valores despues del intercambio.

Salida: 

    - Valores ingresados.
    - Valores intercambiados.

*/

#include <iostream>
using namespace std;

int main(){

    int n, contador;
    contador = 0;

    Leer_n(n);
    MostrarContador(n, contador);


}

void Leer_n(int &n){

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
}

void MostrarContador(int &n, int contador){

    for (int i = 0; i < n; i++)
    {
        contador++;
        cout << contador;

    }

}