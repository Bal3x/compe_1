// 1. Solicitar al usuario el numero de horas trabajadas en la semana por 6 empleados de una pequena compania. Almacenar estos valores en un arreglo 
// 2. Luego imprimir las horas entradas`

#include <iostream>
using namespace std;

int main(){

    int as = 0;
    int horasTrabajadas[as];
    int sum = 0; 
    float promedio;
    // solicitar al usuario el numero de empleados
    cout << "Entre el numero de empleados: " << endl;
    cin >> as;
    while (as <= 0){
        cout << "Numero invalido, intente nuevamente con un numero positivo.";
        cin >> as;
    }
    // solicitar al usuario el numero de horas trabajadas 
    for (int i = 0; i < as; i++){
        
        cout << "Entre el numero de horas trabajadas por empleado " << i + 1 << endl;
        cin >> horasTrabajadas[i];
        while(horasTrabajadas[i] < 0){
            cout << "Numero invalido, intente nuevamente con un numero positivo." << endl;
            cin >> horasTrabajadas[i];
        }
    //suma de las horas trabajadas
        sum += horasTrabajadas[i];
    // calcular el promedio de horas
        promedio = sum / as;
    }
    // imprimir las horas entradas
    for (int i = 0; i < as; i++){
            cout << "Las horas entradas para empleado " << i + 1 << " son: " << horasTrabajadas[i] << endl;
        }
    // imprimir el promedio de horas de los empleafdos
    cout << "El promedio de horas de los " << as << " empleados es " << promedio << endl;

    return 0;
}