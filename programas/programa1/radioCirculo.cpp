/*
Una funcion que solicite al usuario el radio de un circulo.

Creado por : Bryan Chavez
*/

#include <iostream>
using namespace std;
double radioCirculo();      // prototipo


int main(){

    cout << "El radio del circulo es : " << radioCirculo() << endl;     //llamado

    return 0;
}

// funcion
double radioCirculo(){

    // definir variables locales
    double r;       
    
    //pedir el radio del circulo
    cout << "Entre el radio del circulo: " << endl;
    cin >> r;           
    //validar el radio del circulo
    while(r <= 0.0){
        cout << "Radio invalido. Intente de nuevo con un numero positivo." << endl;
        cin >> r;
    }

    return r;
}