/*

EJERCICIO 5: Reparto de horas a semanas, dias y horas.

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que reciba un número entero de horas totales (un valor no
    negativo). El algoritmo debe convertir esa cantidad de horas a semanas, días y horas
    sobrantes, considerando que una semana tiene 168 horas y un día tiene 24 horas. Al
    final debe mostrar cuántas semanas, cuántos días y cuántas horas sobran.
  
E/P/S

Entrada: numero entero de horas totales (valor no negativo).

Proceso: Convertir total de horas a semanas, días y horas sobrantes. 

Salida: Mostrar cantidad de semanas, dias y horas sobrantes.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int Horastotales, semanas, dias, horas, resto;

    Horastotales= 0;

    cout << "Ingrese total de horas: ";
    cin >> Horastotales;

    if (Horastotales >= 0)
    {
        semanas= (Horastotales / 168);
        resto= Horastotales - (semanas * 168);
        dias= resto / 24;
        horas= resto - (dias * 24);

        cout << "Semanas: " << semanas << endl;
        cout << "Días: " << dias << endl;
        cout << "Horas: " << horas << endl;
    
    }else {

        cout << "DATO INVÁLIDO";

    }

    return 0;
    
}