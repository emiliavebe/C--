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

    - 3 numeros enteros.

Proceso: 

    - 

Salida: 
    - Mostrar las edades registradas y sus posiciones.
    - Mostrar si la edad adicional fue encontrada y la posicion en la que se guardo.
    - o Mostar que no se encontro esa edad.

*/

#include <iostream>
using namespace std;

// PROTOTIPADO O FIRMA DE FUNCIONES



int main(){

    int num1, num2, num3;

    int suma;
    double promedio;

    LeerTresNumeros(num1, num2, num3);

    suma = calcularSuma(num1, num2, num3);

    promedio = calcularPromedio(suma);

    MostrarResultados(suma, promedio);

}

void LeerTresNumeros(int &a, int &b, int &c){

    cout << "Ingrese 3 numeros enteros: ";
    cin >> a >> b >> c;
}

int calcularSuma(int a, int b, int c){
    return a + b + c;
}

double calcularPromedio(int suma){
    return suma / 3.0;
}

void MostrarResultados(int suma, double promedio){
    cout << "RESULTADOS:" << endl;
    cout << "Suma: " << suma;
    cout << "Promedio: " << promedio;

}