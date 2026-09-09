/*
EJERCICIO 2: Conversion de tiempo a minutos 

Autor: Emilia Veloz
Fecha: 02/09/2026

Enunciado:
Recibe hora y minutos, y muestra el total de minutos.
Reglas:
-horas >= 0
-minutos entre 0 y 59
si no cumple, mostrar "Datos invalidos"

E/P/S

-Entrada: Horas, minutos
-Proceso: Calcular total de minutos
-Salida: Mostrar minutos totales 

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //1) Variables
    int horas, minutos;

    //2) Lectura de datos
    cout << "Ingrese horas (>= 0)";
    cin >> horas;

    cout << "Ingrese minutos (0 a 59)";
    cin >> minutos;

    //3) Validacion
    if (horas < 0 || minutos < 0 || minutos > 59)
    {
        cout << "Datos invalidos" << endl;
        return 0;
    }

    //4) Proceso
    int totalminutos= (horas * 60) + minutos;

    //5) Salida
    cout << "Total de minutos: " << totalminutos << endl;

    return 0;
}