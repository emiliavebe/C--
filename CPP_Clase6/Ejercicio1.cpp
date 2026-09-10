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

    - Leer edades
    - Verificar que N sea mayor a cero
    - Si no lo es, mostrar un mensaje de error
    - Si lo es, usar un contador que inicie en 1
    - Repetir mientras el contador sea menor o igual a N
    - Mostrar el valor del contador 

Salida: 
    - Mostrar "ERROR" si el usuario ingresa un valor <= 0.

    SiNo
    - Mostrar todos los números pares desde 1 hasta N.

*/

#include <iostream>
using namespace std;

int main(){

    int edades[8];
    int i, buscando, posicion;

    posicion= 0;

    bool encontrado = false;

    for(i= 0; i < 8; i++){

        cout << "Ingrese edad " << i + 1 << ": ";
        cin >> edades[i]; 
    }

    cout << endl;

    cout << "Edades registradas:" << endl;

    for (i = 0; i < 8; i++){

        cout << "Posicion " << i << " : " << edades[i] << endl;

    }

    


    if (encontrado == false)
    {
        cout << "No se encontro el numero." << endl;
    }else {

        cout << "Numero encontrado." << endl;
    }
    

    return 0;
}