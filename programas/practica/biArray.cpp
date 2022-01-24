// arreglo bidimensional ejercicio de practica

#include <iostream> 
using namespace std;

int main(){
    const int nf = 4;
    const int nc = 3;
    double M[nf][nc] = {{1, 2, 3},
                        {4, 5, 5}, 
                        {3, 4, 5}, 
                        {5, 7, 8}};
// Recorrer el arreglo bidimensional fila por fila
// i representa el indice de las filas y j representa el indice de las columnas
    // P1: lo que se coloca aqui se hace UNA SOLA VEZ POR MATRIZ antes de que empiece a recorrer la matriz.
    cout << "Matriz: \n" << "\t\tCol.0\tCol.1\tCol.2\n";
    for (int i = 0; i < nf; i++){
        //P2: lo que se coloca aqui se hace UNA VEZ POR FILA al inicio del recorrido de la fila i
        cout << "Fila " << i << ":\t\t";
        for (int j = 0; j < nc; j++){
        // P3: lo que se coloque aqui se hace PARA CADA CELDA DE LA MATRIZ, es decir para cada valor M[i][j]    
            cout << M[i][j] << '\t';
        }
        // P4: lo que se coloca aqui se hace UNA VEZ POR FILA, al final del recorrido de la fila i
        cout << "\tFin de Fila " << i << '\n';
    }
    // P5: lo que se coloca aqui se hace UNA SOLA VEZ POR MATRIZ, despues de que se termina de recorrer la matriz.
    cout << "\nFin de Matriz\n\n";

// Recorrer el arreglo bidimensional columna a columna
    for (int j = 0; j < nc; j++){
        for (int i = 0; j < nf; i++){

        }
    }
    return 0;
}