/* 
Elabore un programa que:
1. Solicite cuantos estudiantes n hay en el curso. Max de 40 estudiantes. 
2. Solicite las 4 notas de examenes para los estudiantes
3. Que Calcule el promedio final del lab
4. Que imprima un reporte del las notas de la clase promedio final y calificacion
*/

#include <iostream>
using namespace std;

int main(){
// variables
    const int as = 40;
    int n, i;
//codigo que solicita al usuario cuantos estudiantes hay
    cout << "Cuantos estudiantes hay en su clase? " << endl;
    cin >> n;
    while(n < 1 || n > as){
        cout << "Valor invalido, por favor intente nuevamente con un valor entre " << 1 << " y " << as << endl;
        cin >> n;
    } 
//codigo que solicita al usuario las notas de los 4 examenes
    // for (i = 0; i < n)
    return 0;

}