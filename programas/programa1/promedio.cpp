/*
Una funcion que recibia el promedio final de un estudiante y en un clase
y retorne la calificacion obtenida por el mismo en el curso.

creado por: Bryan Chavez
 */

#include <iostream>
using namespace std;

// prototipos de las funciones
char determCalif(double);   
double pedirProm ();
void imprimeCalif(char calif);

int main(){

    double promedio;
    char calif;
//solicitar el promedio final del estudiante al usuario
    promedio = pedirProm();         //llamado de la funcion

//determinar la calificacion del estudiante
    calif = determCalif(promedio);  //llamado de la funcion

// imprimir la calificacion del usuario
     imprimeCalif(calif);           //llamado de la funcion

    return 0;

}
 
// function determCalif 
char determCalif(double promedio){

    if (promedio >= 90.0)
        return 'A';
    else if (promedio >= 80.0)
        return 'B';
    else if (promedio >= 70.0)
        return 'C';
    else if (promedio >= 60)
        return 'D';
    else
        return 'F';

}

double pedirProm (){
// variables locales
    double promedio;

// pedir al usuario el promedio obtenido en la clase
    cout << "Entre el promedio obtenido en la clase: " << endl;
    cin >> promedio; 
// validar el valor recibido por el usuario
    while (!(promedio >= 0.0 && promedio <= 100.0)){
        cout << "Promedio invalido, por favor intente nuevamente con un valor entre 0 - 100." << endl;
        cin >> promedio;
    }
    return promedio;
}

void imprimeCalif(char calif){

    cout << "Su calificacion es " << calif << endl;
}