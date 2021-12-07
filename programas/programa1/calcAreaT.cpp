/*
Programa para calcular el area de un triangulo
usando una funcion que no sea main

Creado por : Bryan Chavez
*/

#include <iostream>
using namespace std;

double calcAreaT(double , double ); //Prototipo

int main(){

    double b, h, A;     //variables que se van a utilizar

    // pedir la base y la altura del triangulo al usuario
    cout << "Entre la base del triangulo: " << endl;
    cin >> b;

    while(b <= 0.0){
        cout << "Base invalida. Re-entre un valor positivo." << endl;
        cin >> b;
    }
    
    cout << "Entre la altura del triangulo: " << endl;
    cin >> h; 

    while(h <= 0.0){
        cout << "Base invalida. Re-entre un valor positivo." << endl;
        cin >> h;
    }

    // Calcular el area del triangulo - se llama una funcion que es la que hace el trabajo
    A = calcAreaT(b,h);

    // Imprimir el area
    cout << "Area del triangulo = " << A << endl; 

    return 0;
}

double calcAreaT(double b, double h){
    
    return 1.0/2.0 * b * h; // retorna el calculo de la funcion. en vez de crear el 
                            
}