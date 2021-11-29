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

double myfabs();


int main(){         // caso creando mi propia funcion fabs (myfabs)
    
    double n, va;
    
    cout << "Entre un numero: ";
    cin >> n;
    
    va = myfabs(n);
    
    cout << '|' << n << "| = " << va << "\n\n"

    return 0;
    
}

    
    {
        double va; 
        
            if ( n < 0.0){
                va = -n;
            }
            
            else{
                va = n;
            }
        
        return va;
        
        
        }