// 1. Solicitar al usuario el numero de horas trabajadas en la semana por 6 empleados de una pequena compania. Almacenar estos valores en un arreglo 
// 2. Luego imprimir las horas entradas`

#include <iostream>
using namespace std;

int numEmpleados();
void solicitarHoras(int [], const int);
float promedioHoras(const int [], const int);
void horasEmpleados(const int [], const int);
void imprimePromedio(int, const int);

int main(){

    int n = 30;
    int horasTrabajadas[n] = {0};
    float promedio = 0.0;
    // Funcion que solicite al usuario el numero de empleados
    n = numEmpleados() ;
    // solicitar al usuario el numero de horas trabajadas 
    solicitarHoras(horasTrabajadas, n);
    // funcion que calcula el promedio de las horas trabajadas
    promedio = promedioHoras(horasTrabajadas, n);
    // funcion que imprima las horas trabajas por cada empleado
    horasEmpleados(horasTrabajadas, n);
    // imprimir el promedio de horas de los empleados
    imprimePromedio(promedio, n);

    return 0;
}
int numEmpleados(){
    int n;
    cout << "Entre el numero de empleados: " << endl;
    cin >> n;
    while (n <= 0 || n > 30){
        cout << "Numero invalido, intente nuevamente con un numero positivo entre 1 - 30.";
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
void horasEmpleados(const int a[], const int n){
    for(int i = 0; i < n; i++){
        cout << "Las horas trabajadas por empleado " << i + 1 << " son: " << a[i] << endl;
    }
}
void imprimePromedio(int promedio, const int n){
        cout << "El promedio de horas de los " << n << " empleados es " << promedio << endl;
}