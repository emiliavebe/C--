/*

EJERCICIO 4: Intercambio de dos números.

Autor: Emilia Veloz 

Fecha: 11/09/2026

ENUCIADO: 

    Desarrolla un programa que permita ingresar dos números enteros y luego
    intercambiar sus valores usando una función.
    El programa debe:
      • mostrar los valores antes del intercambio,
      • realizar el intercambio usando una función,
      • mostrar los valores después del intercambio.
  
E/P/S

Entrada: 

    - 2 numeros enteros.

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

//PROTOTIPADO

void LeerDatos(int num1, int num2);
void MostrarDatos(int num1, int num2);
int HacerIntercambio(int x, int y);
void MostrarIntercambio(int num1, int num2);



int main(){

    int num1, num2;

    LeerDatos(num1, num2);
    MostrarDatos(num1, num2);
    (num2 = num1 + num2, num1 = num2 - num1, num2 = num2 - num1) = HacerIntercambio(num1, num2);
    MostrarIntercambio(num1, num2);

}

void LeerDatos(int num1, int num2){

    cout << "Ingrese 2 numeros enteros: "<< endl;
    cin >> num1 >> num2;
}

void MostrarDatos(int num1, int num2){

    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
}

int HacerIntercambio(int x, int y){

    return y = x + y;
           x = y - x;
           y = y - x;
}

void MostrarIntercambio(int num1, int num2){

    cout << "El valor del numero 1 es: " << num1 << endl;
    cout << "El vaor del numero 2 es: " << num2;
}