/*

EXAMEN 1

Autor: Emilia Veloz 

Fecha: 09/09/2026

TEMA: Sistema de registro y analisis de notas 

ENUCIADO: 

    Desarrolle un programa en C++ para registrar las notas finales
    de un grupo de estudiantes y consultar información básica del curso. 
    El sistema trabajará con un máximo de 20 estudiantes.

  
E/P/S

Entrada: 

    - cantidad, nombres, notas, opción del menú y nombre a buscar.

Proceso: 

    - validar, almacenar, recorrer arreglos, calcular, clasificar y buscar.

Salida: 
    - menú, reporte general, mensajes de validación y resultado de búsqueda.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){

   int cantidad;
   cantidad= 0;

   const int limite= 20;
   const double NotaAprobacion = 14.0;
   string nombres[limite];
   float notas[limite];
   int opcion;
   do
   {
    cout << "====MENU====";
    cout << "1. Registrar estudiantes y notas";
    cout << "2. Mostrar reporte general";
    cout << "3. Buscar estudiante por nombre";
    cout << "4. Salir";
    cout << "Seleccione una opcion: ";

    switch (opcion)
    {
    case 1:
    
    do
    {
        cout << "Cantidad de estudiantes (1 - "<<limite <<"): ";
        cin >> cantidad;

        if (cantidad < 1 || cantidad > limite)
        {
            cout << "NOTA INVALIDA" << endl;
        }

    } while (cantidad < 1 || cantidad > limite);

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Estudiante " << i+1 << " : ";

        cout << "Nombre: ";
        cin >> nombres[i];

        do
        {
            cout << "Nota (0 - 20): ";
            cin >> notas[i];

            if (notas[i] < 0 || notas[i] > 20)
            {
                cout << "NOTA INVALIDA" << endl;
            }
            
        } while (notas[i] < 0 || notas[i] > 20);
        
    }
    
        break;

    case 2:
    if (cantidad == 0)
    {
        cout << "No existen datos registrados aun.";
        break;
    }
    cout << "REPORTE GENERAL";
    cout << "Numero: " << endl;
    cout << "Nombre: " << endl;
    cout << "Nota: " << endl;
    cout << "Estado: " << endl;
    
    double suma= 0;
    int aprobados= 0, reprobados= 0;
    double Mayornota= -1, Menornota= 21;
    int posMayor = 0, posMenor= 0;

    for (int i = 0; i < cantidad; i++)
    {
        string estado= (notas[i] >= NotaAprobacion) ? "APROBADO" : "REPROBADO";
        cout << i+1;
        cout << nombres[i];
        cout << notas[i];
        cout << estado << endl;

        suma= suma + notas[i];
        if (notas[i] >= NotaAprobacion)
        {
            cout << "APROBADO";
        }else{
            cout << "REPROBADO";
        }

        if (notas[i] > Mayornota)
        {
            Mayornota= notas[i]; posMayor= i;    
        }
         if (notas[i] > Menornota)
        {
            Menornota= notas[i]; posMayor= i;    
        }
            
    }
    double promedio = suma / cantidad;
    cout << "Promedio General: " << promedio << endl;
    cout << "Estidiante con mayor nota: " << nombres[posMayor] << "("<<Mayornota<<")" << endl;
    cout << "Estidiante con menor nota: " << nombres[posMenor] << "("<<Menornota<<")" << endl;
    cout << "Cantidad de aprobados: " << aprobados << endl;
    cout << "Cantidad de reprobados: " << reprobados << endl;
    break;

    case 3:
    if (cantidad == 0)
    {
        cout << "No existen datos registrados aun.";
        break;
    }
    string nombreBuscar;
    cout << "BUSCAR ESTUDIANTE";
    cout << "Ingresa el nombre que deseas buscar: ";
    cin >> nombreBuscar;

    bool encontrado = false;
    int indice = -1;

    for (int i = 0; i < cantidad; i++)
    {
        if (nombres[i] == nombreBuscar)
        {
            encontrado= true;
            indice= i;
            break;
        }
        
    }
    if (encontrado)
    {
        string estado= (notas[indice] >= NotaAprobacion) ? "APROBADO" : "REPROBADO";
        cout << "Estudiante encontrado." << endl;
        cout << "Nombre: " << nombres[indice] << endl;
        cout << "Nota: " << notas[indice] << endl;
        cout << "Estado: " << estado << endl;
    }else {
        cout << "Estudiante no encontrado." << endl;
    }
    break;

    case 4:
    cout << "Saliendo del sistema...";
    break;
    

 
    default:
    cout << "Opcion invalida. Intenta nuevamente.";
    }


   } while (opcion != 4);
   
   return 0;


}

