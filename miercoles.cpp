/*
EJERCICIO 2: AREA DE UN TRIANGULO

Autor: Emilia Veloz
Fecha: 02/09/2026

Enunciado: Pide una base y una altura (enteros) y calcula el area
*/

#include <iostream>
#include <string> //(opcional y depende del ejercicio)
using namespace std;

int main(){
    int base, altura, area;

    area=0;

    cout << "Ingrese base: "<< endl;
    cin >> base;
    cout << "Ingrese altura: ";
    cin >> altura;

    area= base * altura;
    cout << "Area = " << area << endl;

    return 0;
}