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
    double ex1[as], ex2[as];
    int n, i;
//codigo que solicita al usuario cuantos estudiantes hay
    cout << "Cuantos estudiantes hay en su clase?" << endl;
    cin >> n;
    while (n < 1 || n > as){
        cout << "Valor invalido, por favor intente nuevamente con un valor entre 1 y " << as << endl;
        cin >> n;
    } 
//codigo que solicita al usuario las notas de los 4 examenes
    for (i = 0; i < n; i++){
// codigo que pida al usuario la nota del primer examen
        cout << "Entre la nota del primer examen para el estudiante " << i + 1 << " : " << endl;
        cin >> ex1[i];
        while(ex1[i] < 0.0 || ex1[i] > 100.0){
            cout << "Valor invalido, por favor entre un valor entre 0 - 100." << endl;
            cin >> ex1[i];
        }
//codigo que pida al usuario la nota del segundo examen
    
    }
    return 0;

}