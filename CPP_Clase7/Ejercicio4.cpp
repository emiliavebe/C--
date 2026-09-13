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

void LeerNumeros(int &num1, int &num2);
void MostrarDatos(int num1, int num2);
void Intercambiar(int &x, int &y);
void MostrarIntercambio(int num1, int num2);


int main(){

    int num1, num2;

    LeerNumeros(num1, num2);
    MostrarDatos(num1, num2);
    Intercambiar(num1, num2);
    MostrarIntercambio(num1, num2);

}

void LeerNumeros(int &num1, int &num2){

    cout << "Ingrese número entero 1: "<< endl;
    cin >> num1;
    cout << "Ingrese número entero 2: "<< endl;
    cin >> num2;
}

void MostrarDatos(int num1, int num2){

    cout << "***Valores antes del intercambio***" << endl;
    cout << endl;
    cout << "Número 1: " << num1 << endl;
    cout << "Número 2: " << num2 << endl;
}

void Intercambiar(int &x, int &y){

    int r = x;
    x = y;
    y = r;

}

void MostrarIntercambio(int num1, int num2){

    cout << "***Valores despues del intercambio***" << endl;
    cout << endl;
    cout << "Número 1: " << num1 << endl;
    cout << "Número 2: " << num2 << endl;
   
}