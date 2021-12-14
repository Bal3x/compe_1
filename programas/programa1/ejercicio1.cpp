/* 
Elaborar un programa que calcule el area de un triangulo
1. Usando solo main
2. Usando la funcion para calcular el area 
3. En la implementacion del programa use las sugientes:
    a. Funcion que solicita al usuario la base del triangulo
    b. Funcion que solicita al usuario la altura del triangulo
    c. Funcion que calcula el area del triangulo 
    d. Funcion que imprima el area del triangulo
*/

//Solucion #1
/*
#include <iostream>
using namespace std;

int main(){
    // variables 
    double base, altura, area;

    // solicitar al usuario base y altura
    cout << "Entre la base del triangulo: " << endl;
    cin >> base;
    // validar valor ingresado
    while(base <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
        cin >> base;
    }
    cout << "Entre la altura del triangulo: " << endl;
    cin >> altura;
    while(altura <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
    }
    // calcular el area del triangulo
    area = 1.0 / 2.0 * base * altura;
    //imprimir resultado
    cout << "El area del triangulo es: " << area << endl;
    
    return 0;
}
*/
//Solucion #2
/*
#include <iostream>
using namespace std;
double calAreaT(double b, double h);        // prototipo

int main(){
    // variables 
    double base, altura, area;

    // solicitar al usuario base y altura
    cout << "Entre la base del triangulo: " << endl;
    cin >> base;
    // validar valor ingresado
    while(base <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
        cin >> base;
    }
    cout << "Entre la altura del triangulo: " << endl;
    cin >> altura;
    while(altura <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
    }
    // llamar a la funcion
    area = calAreaT(base, altura);

    //imprimir resultado
    cout << "El area del triangulo es: " << area << endl;

    return 0;
}
// funcion que calcula el area del triangulo
double calAreaT(double b, double h){
    return 1.0 / 2.0 * b * h;

}
*/
// solucion # 3
#include <iostream>
using namespace std;

double alturaT();
double baseT();
void imprime(double A);
double calAreaT(double b, double h);        // prototipos

int main(){
    // variables 
    double b, h, A;

// llamado de funcion que solicita al usuario base 
    b = baseT();
// llamado de funcion que solicita a usuario altura
    h = alturaT();
// llamado a la funcion que calcula el area
    A = calAreaT(b, h);
// llamado a la funcion que imprime el resultado
    imprime(A);
    
    return 0;
}
// funcion que solicita al usuario la base 
double baseT(){
// variable
    double b;
// codigo de la funcion
    cout << "Entre la base del triangulo: " << endl;
    cin >> b;
// validar valor ingresado
    while(b <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
        cin >> b;
    }
    return b;
}
// funcion que solicita al usuario la altura
double alturaT(){
// variables
    double h;
// codigo de la funcion
    cout << "Entre la altura del triangulo: " << endl;
    cin >> h;
    while(h <= 0.0){
        cout << "Valor invalido. Intente nuevamente con un numero positivo." << endl;
    }
    return h;
}
// funcion que calcula el area del triangulo
double calAreaT(double b, double h){
// codigo de la funcion
    return 1.0/2.0 * b * h;
}
// funcion que imprime el resultado 
void imprime(double A){
    cout << "El area del triangulo es: " << A << endl;

}