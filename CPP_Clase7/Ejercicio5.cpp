/*

EJERCICIO 5: Contador actualizado con referencia.

Autor: Emilia Veloz 

Fecha: 11/09/2026

ENUCIADO: 

    Desarrolla un programa que pida al usuario un número entero positivo n y luego
    incremente un contador desde 0 hasta n, usando una función que actualice el valor
    del contador. 

E/P/S

Entrada: 

    - 1 numero entero positivo n.

Proceso: 

    - Leer el numero entero n.
    - Incrementar un contador desde 0 a n.
    - Usar una funcion que actualice el valor del contador.

Salida: 

    - Mostrar el valor del contador en cada incremento.
*/

#include <iostream>
using namespace std;

//PROTOTIPADO

void Leer_n(int &n);
void ContarYmostrar(int n, int &contador);


int main(){

    int n, contador;
    contador = 0;

    Leer_n(n);
    ContarYmostrar(n, contador);

}

void Leer_n(int &n){

    cout << "Ingrese un número entero positivo: ";
    cin >> n;
}

void ContarYmostrar(int n, int &contador){

    for (int i = 0; i <= n; i++)
    {
        contador = i;
        cout << "CONTADOR:";
        cout << endl;
        cout << contador<< endl;

    }
        
}
