// 1. Solicitar al usuario el numero de horas trabajadas en la semana por 6 empleados de una pequena compania. Almacenar estos valores en un arreglo 
// 2. Luego imprimir las horas entradas`

#include <iostream>
using namespace std;
int numEmpleados();
void solicitarHoras(int [], const int);
float promedioHoras(const int [], const int);

int main(){

    int n = 0;
    int horasTrabajadas[n] = {0};
    float promedio = 0.0;
    // Funcion que solicite al usuario el numero de empleados
    n = numEmpleados() ;
    // solicitar al usuario el numero de horas trabajadas 
    solicitarHoras(horasTrabajadas, n);
    // funcion que calcula el promedio de las horas trabajadas
    promedio = promedioHoras(horasTrabajadas, n);
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
void solicitarHoras(int a[], const int n){
    for (int i = 0; i < n; i++){
        cout << "Entre el numero de horas trabajadas por empleado " << i + 1 << endl;
        cin >> a[i];
        while(a[i] < 0){
            cout << "Numero invalido, intente nuevamente con un numero positivo." << endl;
            cin >> a[i];
        }
    }
}
float promedioHoras(const int a[], const int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum / n;
}