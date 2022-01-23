// 1. Solicitar al usuario el numero de horas trabajadas en la semana por 6 empleados de una pequena compania. Almacenar estos valores en un arreglo 
// 2. Luego imprimir las horas entradas`

#include <iostream>
using namespace std;
int numEmpleados();

int main(){

    int n = 0;
    int horasTrabajadas[n];
    int sum = 0; 
    float promedio;
    // Funcion que solicite al usuario el numero de empleados
    n = numEmpleados() ;
    // solicitar al usuario el numero de horas trabajadas 
    for (int i = 0; i < n; i++){
        
        cout << "Entre el numero de horas trabajadas por empleado " << i + 1 << endl;
        cin >> horasTrabajadas[i];
        while(horasTrabajadas[i] < 0){
            cout << "Numero invalido, intente nuevamente con un numero positivo." << endl;
            cin >> horasTrabajadas[i];
        }
    //suma de las horas trabajadas
        sum += horasTrabajadas[i];
    // calcular el promedio de horas
        promedio = sum / n;
    }
    // imprimir las horas entradas
    for (int i = 0; i < n; i++){
            cout << "Las horas entradas para empleado " << i + 1 << " son: " << horasTrabajadas[i] << endl;
        }
    // imprimir el promedio de horas de los empleados
    cout << "El promedio de horas de los " << n << " empleados es " << promedio << endl;

    return 0;
}
int numEmpleados(){
    int n;
    cout << "Entre el numero de empleados: " << endl;
    cin >> n;
    while (n <= 0){
        cout << "Numero invalido, intente nuevamente con un numero positivo.";
        cin >> n;
    }
    return n;
}