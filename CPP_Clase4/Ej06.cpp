/*

EJERCICIO 6: Plan de internet

Autor: Emilia Veloz 

Fecha: 04/09/2026

ENUCIADO: 

    Elaborar un programa en C++ que reciba dos datos: el plan de internet y el consumo.
    El plan solo puede ser 1 o 2, y el consumo debe ser un número mayor o igual a cero.
    Si el plan es 1, la tarifa base es 12 dólares y el límite incluido es 80. Si el plan es 2, la
    tarifa base es 20 dólares y el límite incluido es 150.
    Si el consumo supera el límite del plan, se cobra un recargo por excedente: por cada
    unidad excedida se suma 0.25 al valor base. Si el consumo no supera el límite, se
    paga solo la tarifa base.
    Si el plan no es 1 ni 2, o si el consumo es negativo, el algoritmo debe mostrar “DATOS
    INVÁLIDOS”. En caso contrario, debe mostrar el total a pagar.
  
E/P/S

Entrada: 

    - plan
    - consumo

Proceso: 

    - Validar los datos.  
    - Asignar valores.
    - Calcular el precio a pagar.

Salida: 
    - Mostrar "DATOS INVÁLIDOS" si el (plan != 1 y plan != 2) O (consumo < 0)
    - Mostrar "El total a pagar es: ..."

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

    int plan, consumo, tb, lim;
    double exc, total;

    exc= 0;
    total= 0;

    cout << "Ingrese el plan (1 o 2): " << endl;
    cin >> plan;
    cout << "Ingrese su consumo: " << endl;
    cin >> consumo;

    if ((plan != 1 && plan != 2) || consumo < 0){
        cout << "DATOS INVÁLIDOS" << endl;
        
    } else {

        if (plan == 1)
        {
            tb= 12;
            lim= 80;

        } else {

            tb= 20;
            lim= 150;

        }
            
        if (consumo > lim){
            exc= consumo - lim;
            total= tb + (exc * 0.25);
        
        } else {

            total= tb;
            
        }

        cout << "El total a pagar es:  $" << total << endl;
    
}

return 0;
        
}
    

