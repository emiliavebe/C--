/*

EJERCICIO 1: Registro de edades.

Autor: Emilia Veloz 

Fecha: 08/09/2026

ENUCIADO: 

    Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
  
E/P/S

Entrada: 

    - 8 edades.

Proceso: 

    - Ingresar 8 edades enteras.
    - Leer las 8 edades y mostrar las posiciones en las que fueron guardadas.
    - Pedir una edad adicional

        Si la edad fue encontrada, mostrar "Edad encontrada." y mostrar la posicion
        de la primera coincidencia.

        Si no, mostrar "Edad no encontrada."

Salida: 
    - Mostrar las edades registradas y sus posiciones.
    - Mostrar si la edad adicional fue encontrada y la posicion en la que se guardo.
    - o Mostar que no se encontro esa edad.
*/

#include <iostream>
using namespace std;

int main(){

    int edades[8];
    int i, posicion, buscado, Numadicional;

    posicion= -1;

    bool encontrado = false; 

    for(i= 0; i < 8; i++){

        cout << "Ingrese edad " << i + 1 << ": ";
        cin >> edades[i]; 
    }

    cout << "EDADES REGISTRADAS:" << endl;
    cout << endl;

    for (i = 0; i < 8; i++){

        cout << "Posición " << i << " : " << edades[i] << endl;

    }
    cout << endl;

    cout << "Ingrese una edad adicional: ";
    cin >> Numadicional;

    for (int i = 0; i < 8; i++)
    {
        if (edades[i] == buscado && encontrado == false )
     {
        encontrado= true;
        posicion= i;
     
     }

    }

    cout << endl;

    if (encontrado == true)
    {
        cout << "Edad encontrada." << posicion << endl;
    }else {
        cout << "Edad no encontrada." << endl;
    }
    
    return 0;
}