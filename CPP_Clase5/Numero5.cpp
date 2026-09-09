/*

EJERCICIO 5: Menú repetitivo con do while.

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que muestre el siguiente menú:
       1. Mostrar el doble de un número
       2. Mostrar el triple de un número
       3. Salir
  
E/P/S

Entrada: 

    - opcion, numero

Proceso: 

    - Si la opcion es valida:
         Calcular el doble o triple
         del numero que el usuario ingreso.
    
     - Si no lo es mostrar un mesaje que diga error.

Salida: 

    - Mostrar un mensaje de error si la opcion es invalida.

    - Mostrar el resultado de las operaciones.

*/

#include <iostream>
using namespace std;

int main(){

    int numero, opcion;

    do{

        cout << "==== MENU ====" << endl;
        cout << "1. Mostrar el doble de un número" << endl;
        cout << "2. Mostrar el triple de un número" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";

        cin >> opcion;

        if (opcion == 1)
        {
            cout << "Ingresa un número: ";
            cin >> numero;

            cout << "El doble de " << numero << " es: " << numero * 2 << endl;

        }else if (opcion == 2)
        {
            cout << "Ingresa un número: ";
            cin >> numero;

            cout << "El triple de " << numero << " es: " << numero * 3 << endl;

        }else if (opcion ==3)
        {
            cout << "Saliendo del programa...";
        }
        else {
            cout << "ERROR. Intenta nuevamente." << endl;
        }
             
    }while (opcion != 3);

    return 0;

}