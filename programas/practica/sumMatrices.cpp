// Solucion 1 - Sin Funciones
// programa que suma dos matrices de hasta un maximo de 5 x 5.
// donde el numero de filas y columnas de las matrices a sumar se le solicita al usuario

#include <iostream>
using namespace std;

int main(){
    const int nf = 5;
    const int nc = 5;
    double a[nf][nc], b[nf][nc], r[nf][nc];
    int nfu, ncu;

    // solicitar el numero de filas y de columnas al usuario
    cout << "Entre el numero de filas de las dos matrices a sumar. " << endl;
    cin >> nfu;
    while(nfu < 1 || nfu > nf){
        cout << "Valor invalido intente nuevamente con un valor entre 1 y " << nf << endl;
        cin >> nfu;
    }
    cout << "Entre el numero de las columnas de las dos matrices a sumar. " << endl;
    cin >> ncu;
    while(ncu < 1 || ncu > nc){
        cout << "Valor invalido, intente nuevamente con un valor entre 1 y " << nc << endl;
        cin >> ncu;
    }
    // Llenar la matriz 1. Solicitar al usuario los datos de la matriz 1
    cout << "Entre los datos de la matriz a.\n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << "Entre el valor [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    // Llenar la matriz 2. Solicitar al usuario los datos de la matriz 2
    cout << "Entre los datos de la matriz b.\n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << "Entre el valor [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }
    // Calcular la matriz resultante
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            r[i][j] = a[i][j] + b[i][j];
        }
    }
    // imprimir las matrices 
    cout << "\n\nMatriz a: \n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << "\n+\n";

    cout << "\n\nMatriz b: \n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << b[i][j] << '\t';
        }
        cout << '\n';
    }
    cout << "\n\nMatriz r: \n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << r[i][j] << '\t';
        }
        cout << '\n';
    }



    return 0;
}