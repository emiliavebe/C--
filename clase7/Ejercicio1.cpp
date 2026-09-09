/*

EJERCICIO 1:CALCULAR SUMA Y PROMEDIO DE 4 NUMEROS.

Autor: Emilia Veloz 

Fecha: 07/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que solicite al usuario un número entero positivo N y
    muestre en pantalla todos los números pares desde 2 hasta N.
    Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje
    de error.

*/

#include <iostream>
using namespace std;


int main(){

    int n1, n2, n3, n4;

    int suma;
    double promedio;

    leerCuatroNumeros(n1,n2,n3,n4);

    suma= calcularSuma(n1, n2, n3, n4);

}

void leerCuatroNumeros(&a,&b,&c,&d){
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

int calcularSuma()