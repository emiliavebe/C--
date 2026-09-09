/*
EJERCICIO 4

Autor: Emilia Veloz

Fecha: 02/09/2026

Enunciado:
   Elaborar un programa en Ct+ que solicite al usuario 5 numeros enteros y calcule la suma total de esos
   numeros usando un bucle for
   Al final el program debe mostrar el resutlado acumulado.

   E/P/S

   Entrada: 

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    int i, numero, suma;
    
    suma=0;

    for (i =1; i <= 5; i++){

        cout << "Ingrese el numero " << i << " : ";
        cin >> numero;

        suma= suma + numero;
    }

    cout << "La suma total es: " << suma << endl;
    return 0;
}