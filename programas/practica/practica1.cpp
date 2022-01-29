
#include <iostream>
using namespace std;
void srtCopy(char [], char []);
int strlen(char []);
void reversePrint(char arrInv[]);

int main(){
    const int as = 25;
    char arr[as], arrInv[as];
    int i;

    // pedir al usuario que entre una palabra
    cout << "Entre una palabra que quiera que sea invertida. ";
    cin.getline(arr, as);
    cout << "El string original es:\n" << arr << endl;

    srtCopy(arrInv, arr);
    reversePrint(arrInv);

    return 0;
}
void srtCopy(char arrInv[], char arr[]){
    int i; 
    for(i = 0; arr[i] != '\0'; i = i + 1){
        arrInv[i] = arr[i];
    }
    arrInv[i] = '\0';
}
int strlen(char arr[]){
    int i;
    for (i = 0; arr[i] != '\0'; i = i + 1);
    return i;
}
void reversePrint(char arrInv[]){
    int i;
    cout << "El string invertido es: " << endl;
    for(i = strlen(arrInv) - 1; i >= 0; i--){
        cout << arrInv[i];
    }

}