/*

EJERCICIO 4: Nota final con ponderaciones

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que reciba tres calificaciones: Parcial 1, Parcial 2 y Proyecto.
    Con esos valores, debe calcular la nota final usando ponderaciones: el Parcial 1 vale
    el 30%, el Parcial 2 vale el 30% y el Proyecto vale el 40%. El algoritmo debe mostrar la
    nota final.
  
E/P/S

Entrada: parcial 1, parcial 2, proyecto

Proceso: Calcular nota final usando ponderaciones.

Salida: Mostrar nota final.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

   double parcial1, parcial2, proyecto, Notafinal;
   
   Notafinal= 0;

   cout << "Ingrese nota del parcial 1: ";
   cin >> parcial1;
   cout << "Ingrese nota del parcial 2: ";
   cin >> parcial2;
   cout << "Ingrese nota del proyecto: ";
   cin >> proyecto;

   Notafinal= (parcial1 * 0.30) + (parcial2 * 0.30) + (proyecto * 0.40);

   cout << "Su nota final es: " << Notafinal;

   return 0;

}