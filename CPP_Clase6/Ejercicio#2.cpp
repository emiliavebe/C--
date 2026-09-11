/*

EJERCICIO 1: Registro de cantidades vendidas.

Autor: Emilia Veloz 

Fecha: 08/09/2026

ENUCIADO: 

    Desarrolle un programa en C++ que permita ingresar 6 cantidades enteras de
    productos vendidos durante el día en un arreglo.
  
E/P/S

Entrada: 

    - Ingresar 6 cantidades enteras.

Proceso: 

    - Ingresar 6 cantidades enteras.
    - Leer las 6 cantidades y mostrar las posiciones en las que fueron guardadas.
    - Pedir una cantidad especifica
d 
        Si cantidad especifica fue encontrada, mostrar "Cantidad encontrada." y mostrar la posicion
        de la primera coincidencia.

        Si no, mostrar "Cantidad no encontrada en el arreglo."

Salida: 
    - Mostrar las cantidades registradas y sus posiciones.
    - Mostrar si la cantidad especifica fue encontrada y la posicion en la que se guardo.
    - o Mostar que no se encontro esa cantidad.

*/

#include <iostream>
using namespace std;

int main(){

    int productos[6];
    int i;
    int buscado, posicion;
    bool encontrado;


    for (int i = 0; i < 6; i++)
    {
        cout << "Ingrese cantidad del producto " << i+1 << " : " << endl;
        cin >> productos[i];
    }
    cout <<endl;

    cout << "====CANTIDADES INGRESADAS====" << endl;
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << "Posición " << i << " : " << productos[i] << endl;
    }

    cout <<endl;

    cout << "Ingrese una cantidad específica: ";
    cin >> buscado;

    encontrado = false;
    posicion= -1;

    for (int i = 0; i < 6; i++)
    {
        if (productos[i] == buscado && encontrado == false)
        {
            encontrado = true;
            posicion = i;
            break;
        }
        
    }

    cout << endl;

    if (encontrado)
    {
        cout << "Cantidad encontrada en la posición: " << posicion << endl;
    }else {
        cout << "Cantidad no encontrada en el arreglo.";
    }

    return 0;
        
}