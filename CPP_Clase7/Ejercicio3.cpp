/*

EJERCICIO 3: Área de un rectángulo.

Autor: Emilia Veloz 

Fecha: 11/09/2026

ENUCIADO: 

    Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
    Usa funciones para:
     • leer los datos,
     • calcular el área,
     • mostrar el resultado.
  
E/P/S

Entrada: 

    - Base y altura de un rectangulo.

Proceso: 

    - Leer base y altura.
    - Mostrar el area.
Salida: 
    - Area del rectangulo.
*/

#include <iostream>
using namespace std;

//PROTOTIPADO

void LeerDatos(double &base, double &altura);
double Calcular_Area(double base, double altura);
void MostrarArea(double area);

int main(){

double base, altura, area;
area = 0;

LeerDatos(base, altura);
area = Calcular_Area(base, altura);
MostrarArea(area);

}

void LeerDatos(double &base, double &altura){

    cout << "Ingrese base del rectángulo: ";
    cin >> base;
    cout << "Ingrese altura del rectángulo: ";
    cin >> altura;

}

double Calcular_Area(double base, double altura){

    return base * altura;
}

void MostrarArea(double area){

    cout << "El área del rectángulo es: " << area;

}