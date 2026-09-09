/*


*/
#include<iostream>
using namespace std;

int main(){
    //Declaracion de variables
    int num1, num2, suma;

    //Toda variable calculada, es recomendable inicializarla

    suma = 0;

    //ingreso de datos
    cout << "Ingrese num1: ";
    cin >> num1;
    cout << "Ingrese num2: ";
    cin >> num2;

    //proceso de calculo
    suma = num1 + num2;

    //<< sirve para cancotenar texto con variables
    cout << "Suma =  " << suma << endl;
return 0;
}