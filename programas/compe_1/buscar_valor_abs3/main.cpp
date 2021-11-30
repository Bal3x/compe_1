/*
 * Buscar el valor absoluto de un # que se solicita al usuario
 * Por: Bryan Chavez
 * 
 * 3 soluciones
 *  1. compe0, sin usar funciones de la libreria
 *  2. usando la funcion fabs de la libreria matematica
 *  3. Crear mi propia funcion fabs (myfabs)
 * 
 * fecha: 11/22/2021
 * */

#include <iostream>
using namespace std;

double myfabs(double);        //Prototipo y lleva ; (hacer un adelanto a la funcion para no 
                                //tener problema con el orden fisico en compilacion
        
int main(){         // caso creando mi propia funcion fabs (myfabs)
    //variables
    double n, va;
    // llamado a usuario a entrar un numero, activa el teclado
    cout << "Entre un numero para obtener su valor absoluto: ";
    cin >> n;                       // usuario entra numero y es guarda el valor
    // llamado de la funcion
    va = myfabs(n);     
    
    // Imprimir el valor absoluto 
    cout << '|' << n << "| = " << va << "\n\n";

    return 0;
    
}

double myfabs(double n)     // encabezado de la funcion
{
        // variables
        double va; 
        // Codigo de la funcion
        if ( n < 0.0)
            va = -n;
        else
            va = n;
            
        return va;      // retorna valor a la variable anterior de main
    }
    
    