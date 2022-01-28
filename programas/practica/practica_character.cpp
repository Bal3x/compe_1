// un programa que solicite al usuario el primer nombre y segundo apellido para completar un tercer 
// arreglo que tenga apellido, nombre

#include <iostream>
using namespace std;
void mystrcopy(char [], const char []);
int strlen(char []);
void mystrcat(char [], const char []);
int main(){
    const int as = 25;
    char n[as], a[as], ayn[as*2+2];
    int i, j;

    // solicitar al usuario el primer nombre
    cout << "Cual es su nombre? " << endl;
    cin >> n;
    // solicitar al usuario el apellido
    cout << "Cual es su apellido? " << endl;
    cin >> a;
    // copiar el a[] and ayn[]
    mystrcopy(ayn, a);
    mystrcat(ayn, ",");
    mystrcat(ayn, " ");
    mystrcat(ayn, n);

    cout << "Su Apellido, Nombre = " << ayn << "\n\n";

    return 0;

}
void mystrcopy(char res[], const char a[]){
    int i;
    for(i = 0; a[i] != '\0'; i = i = i + 1){
        res[i] = a[i];
    }
    res[i] = '\0';
}
void mystrcat(char res[], const char arr[]){
   int i;
   i = strlen(res);
   for(int j = 0; arr[j] != '\0'; j++){
       res[i++] = arr[j];
   }
   res[i] = '\0';
}
int strlen(char arr[]){
    int i;
    for (i = 0; arr[i] != '\0'; i = i + 1);
    return i;
}