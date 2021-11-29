/* Programa que calcule la raiz cuadrada de
 * un numero.
 * 
 * Por: Bryan Chavez
 * 
 * 1. Solicitar el numero al que se le quiere buscar
 * la raiz.
 * 2. Calcular la raiz cuadrada del numero.
 * 3. Imprimir respuesta
 * */

#include <iostream>
using namespace std;

#include <cmath>

int main(){
    
    double N, RC;   //N - numero al que le buscare la raiz cuadrada.
                    //RC - Raiz cuadrada del numero N.
                    
    cout << "Entre un numero: ";    //Solicitar el numero N
    cin >> N;
    
    if (N < 0.0){                   //Solucion
        
            RC = sqrt(-N);
            cout << "La raiz cuadrada de " << N << " es " << RC << 'i';
        } 
        
        else 
            {
            
            RC = sqrt(N);
            cout << "La raiz cuadrada de " << N << "es " << RC;
            
            }
    cout << '\n';
    
    
    return 0;
    
}

    

