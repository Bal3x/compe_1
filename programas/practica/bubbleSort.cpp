// Bubble Sort example 
// Programa que solicite al usuario una palabra y luego ordene alfabeticamente sus letras
// por ejemplo mar ordenada acendentemente es amr.

#include <iostream> 
using namespace std;
int strlen(const char []);

int main(){
    const int as = 25;
    char arr[as];
    char temp, lim;
    int n;

    // solicitar al usuario un palabra
    cout << "Entre una palabra para ordenarla alfabeticamente. " << endl;
    cin >> arr;
    n = strlen(arr);
    // ordenar alfabeticamente las letras de la palabra
    lim = n - 1;
    for (int pass = 0; pass < n; pass++){
        for (int i = 0; i < lim; i++){
            if (arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        lim--;
    }
    cout << "Letras en orden alfabetico: ";
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    return 0;
}
int strlen(const char arr[]){
    int i;
    for(i = 0; arr[i] != '\0'; i = i + 1);

    return i;
}