#include <iostream>
using namespace std;
void swap(int& n1, int& n2);

int main(){
    int num1, num2;
// pedir a usuario dos numeros
    cout << "Entre 2 numeros enteros para intercambiar." << endl;
    cin >> num1 >> num2;

    cout << "Antes de la funcion swap los valores de num1 y num2 son: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    swap(num1, num2);   //llamado de la funcion

    cout << "Despues de la funcion swap los valores de num1 y num2 son: " << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;


    return 0; 

}

// intercambiar los valores por referencia
void swap(int &n1, int &n2){
    int interm;

    interm = n1;
    n1 = n2;
    n2 = interm;

}