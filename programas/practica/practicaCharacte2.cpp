// elaborar una funcion para cada uno de los siguentes
// a. conseguir la longitud de un string
// b. copiar un string en otro 
// c. concatenar un string a otro

#include <iostream>
using namespace std;
int strlen(char []);
void copystr(char [], const char []);
void strcat(char [], const char []);
void invertStr(char []);

int main(){
    const int as = 20;
    char arr1[as] = "Hello", arr2[as] = "World", ares[as*2+2];
    // a. 
    cout << strlen(arr1) << endl;
    // b. 
    copystr(ares, arr1);
    cout << ares;
    cout << '\n';
    // c.
    strcat(ares, " ");
    strcat(ares, arr2);
    cout << ares;
    invertStr(ares);

    return 0; 
}
int strlen(char arr[]){
    int i; 
    for(i = 0; arr[i] != '\0'; i = i + 1);
    
    return i;
}
void copystr(char arr[], const char a[]){
    int i;
    for(i = 0; a[i] != '\0'; i = i + 1){
        arr[i] = a[i];
    }
    arr[i] = '\0';
}
void strcat(char arr[], const char a[]){
    int i; 
    i = strlen(arr);
    for(int j =  0; a[j] != '\0'; j++){
        arr[i++] = a[j];
    }
    arr[i] = '\0';
}
void invertStr(char arr[]){
    int i; 
    i = strlen(arr);

    for(int j = i; j < 0; j--){
        arr[i--] = arr[j];
        cout <<  arr[j];
    }
}