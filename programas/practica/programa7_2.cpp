// 1. Solicitar al usuario el numero de horas trabajadas en la semana por 6 empleados de una pequena compania. Almacenar estos valores en un arreglo // 2. Luego imprimir las horas entradas


#include <iostream>
using namespace std;

int main(){
    const int as = 6;
    int horasTrabajadas[as] = {0};

    // solicitar al usuario el numero de horas trabajadas 
    for (int i = 0; i < as; i++){
        cout << "Entre el numero de horas trabajadas por empleado " << i + 1 << endl;
        cin >> horasTrabajadas[i];
        while(horasTrabajadas[i] < 0){
            cout << "Numero invalido, intente nuevamente con un numero positivo." << endl;
            cin >> horasTrabajadas[i];
        }
    }
    for (int i = 0; i < as; i++){
            cout << "Las horas entradas para empleado " << i + 1 << " son: " << horasTrabajadas[i] << endl;
        }
    for (int i = 0; i < as; i++){
        cout << "Las horas entradas son: " << horasTrabajadas[i] << endl;
        } 

    return 0;
}