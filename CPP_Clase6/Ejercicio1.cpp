/*

EJERCICIO 1: Registro de edades.

Autor: Emilia Veloz 

Fecha: 08/09/2026

ENUCIADO: 

    Desarrolle un programa en C++ que permita ingresar 8 edades enteras en un arreglo.
  
E/P/S

Entrada: 

    - Ingresar 8 edades.

Proceso: 

    - Ingresar 8 edades enteras.
    - Leer las 8 edades y mostrar las posiciones en las que fueron guardadas.
    - Pedir una edad adicional

        Si la edad fue encontrada, mostrar "Edad encontrada." y mostrar la posicion
        de la primera coincidencia.

        Si no, mostrar "Edad no encontrada en el arreglo."

Salida: 
    - Mostrar las edades registradas y sus posiciones.
    - Mostrar si la edad adicional fue encontrada y la posicion en la que se guardo.
    - o Mostar que no se encontro esa edad.
*/

#include <iostream>
using namespace std;

int main(){

    int edades[8];
    int i;
    int  Edadicional;
    bool encontrado;
    int PosicionEncontrada;



    for(i= 0; i < 8; i++){

        cout << "Ingrese edad " << i + 1 << ": ";
        cin >> edades[i]; 

    }
    cout << endl;

    cout << "EDADES REGISTRADAS:" << endl;
    cout << endl;

    for (i = 0; i < 8; i++){

        cout << "Posición " << i << " : " << edades[i] << endl;

    }
    cout << endl;

    cout << "Ingrese una edad adicional: ";
    cin >> Edadicional;

    encontrado = false;
    PosicionEncontrada = -1;

    for (int i = 0; i < 8; i++)
    {
      if (edades[i] == Edadicional)
    {
       encontrado = true;
       PosicionEncontrada = i;
       break;
    }

    }

    cout << endl;

    if (encontrado)
    {
        cout << "Edad encontrada en la posición: " << PosicionEncontrada << endl;
    }else {
        cout << "Edad no encontrada en el arreglo." << endl;
    }
    
    return 0;
}