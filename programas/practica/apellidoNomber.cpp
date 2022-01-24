// un programa que solicite al usuario el primer nombre y segundo apellido para completar un tercer 
// arreglo que tenga apellido, nombre

#include <iostream> 
using namespace std;
void mystrcopy(char [], const char []);
void mystrcat(char [], const char []);

int main(){
   const int as = 25;
   char n[as], a[as], ayn[as * 2 + 2];
   int i, j;

    // solicitar al usuario que entre el primer nombre
    cout << "Entre su Primer nombre: " << endl;
    cin >> n;
    // solicitar al usuario que entre el segundo nombre
    cout << "Entre su Apellido: " << endl;
    cin >> a;
    // operacion copia de string
    mystrcopy(ayn, a);
    mystrcat(ayn,", ");
    mystrcat(ayn, n);
    
    cout << "Su apellido, nombre = " << ayn << endl;
    
    return 0;
}
void mystrcopy(char res[], const char orig[]){
    int i;
        for(int i = 0; orig[i] != '\0'; i++){
        res[i] = orig[i];
    }
    res[i] = '\0';
}
void mystrcat(char res[], const char orig[]){
    int i;
    for(int i = 0; res[i] != '\0'; i++); // esto puede ser una funcion mystrlen() que retorna un entero.
    
    for (int j = 0; orig[j] != '\0'; j++){
        res[i++] = orig[j];
    }
    res[i] = '\0';
}