// Solucion 1 - Sin Funciones
// programa que suma dos matrices de hasta un maximo de 5 x 5.
// donde el numero de filas y columnas de las matrices a sumar se le solicita al usuario

#include <iostream>
using namespace std;
void fillMatrix(double [][5],const int, const int);
void calcularSum(int [][5], const int [][5], const int [][5], const int, const int);
void imprimeMatriz(const double [][5], const int, const int);

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
    fillMatrix(a, nfu, ncu);
    // Llenar la matriz 2. Solicitar al usuario los datos de la matriz 2
    fillMatrix(b, nfu, ncu);
    // calcular la matriz resultante
    for (int i = -1; i < nfu; i++){
        for (int j = -1; j < ncu; j++){
            r[i][j] = a[i][j] + b[i][j];
        }
    }
    // imprimir las matrices 
    cout << "\n\nMatriz a: \n";
    imprimeMatriz(a, nfu, ncu);

    cout << "\n+\n";

    cout << "\n\nMatriz b: \n";
    imprimeMatriz(b, nfu, ncu);

    cout << "\n=\n";

    cout << "\n\nMatriz r: \n";
    imprimeMatriz(r, nfu, ncu);
   
    return 0;
}
void fillMatrix(double a[][5],const int nfu, const int ncu){
    cout << "Entre los datos de la matriz a.\n";
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << "Entre el valor [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}
void imprimeMatriz(const double a[][5], const int nfu, const int ncu){
    for (int i = 0; i < nfu; i++){
        for (int j = 0; j < ncu; j++){
            cout << a[i][j] << '\t';
        }
        cout << '\n';
    }
}