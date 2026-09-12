/*

EJERCICIO 1: Suma y promedio de 3 numeros.

Autor: Emilia Veloz 

Fecha: 11/09/2026

ENUCIADO: 

    Desarrolle un programa en C++ que permita ingresar 3 números enteros y que use funciones
    para:
    • leer los números,
    • calcular la suma,
    • calcular el promedio,
    • mostrar los resultados.
  
E/P/S

Entrada: 

    - 2 numeros enteros.

Proceso: 

    - Leer 2 numeros.
    - Comparar cual de los 2 numeros es el mayor o si son iguales.

Salida: 
    - Mostrar cual es el mayor de los 2 o si son iguales.

*/

#include <iostream>
using namespace std;

// PROTOTIPADO

void LeerdosNumeros(int &a, int &b);
void ComparardosNumeros(int num1, int num2);


int main(){

    int num1, num2;


    LeerdosNumeros(num1, num2);
    ComparardosNumeros(num1, num2);
}

void LeerdosNumeros(int &a, int &b){
    cout << "Ingrese 2 números enteros: ";
    cin >> a >> b;
}

void ComparardosNumeros(int num1, int num2){

    if (num1 == num2)
    {
        cout << "Los números son iguales." << endl;

    }else if (num1 > num2)
    {

        cout << num1 << "Es mayor que " << num2 << endl;

    }else{

        cout << num2 << "Es mayor que " << num1 << endl;
    }
       
}