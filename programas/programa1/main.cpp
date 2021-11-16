/*
Programa que calcula el area de un rectangulo.
Preparado por: Bryan Chavez
Fecha: 11/15/2021 
*/

#include <iostream>
using namespace std;

int main(){
    
    // definicion de variable
    double l, an, A;
    
    int i;
    
    for(i = 1; i<= 5; i = i + 1 )
    {
        //Solicitar el largo (l) del rectangulo y validar
        cout << "Entre el largo del rectangulo " << i << ":";
        cin >> l; 


        while (l <= 0.0){
                cout << "Largo del rectangulo " << i << " invalido, re-entre un valor positivo: ";
                cin >> l;
            }


        //Solicitar el ancho (an) del rectangulo y validar
        cout << "Entre el ancho del rectangulo " << i << ": ";
        cin >> an; 

        while (an <= 0.0){
                cout << "Ancho del rectangulo " << i << " invalido, re-entre un valor positivo: ";
                cin >> an;
            }
        //Calcular el area del rectangulo

        A = l * an;

        //Imprimir el area del rectangulo

        cout << "Area del rectangulo " << i << ": " << A << "\n\n";
    }
    return 0;
    
}

    

