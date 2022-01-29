// Programa que solicite al usuario que entre un string 
// y le indique
// a. El numero de palabras en el string
// b. El numero de letras en el string
// c. El numero de veces que aparece una vocal en el string

#include <iostream>
using namespace std;
int numberWords(char [], char);
int strlen(const char []);
int numVocales(char []);

int main(){
    const int as = 40;
    char str[as];
    char key;
    int pos, nv, n, nl, nVocal;

    // solicitar al usuario que entre un string
    cout << "Entre un frase. " << endl;
    cin.getline(str, as);


    // El numero de palabras en el string
    nv = numberWords(str, ' ' );
    cout << "El numero de palabras en la frase es: " << nv << endl;
    // El numero de letras en el string
    nl = strlen(str) - numberWords(str, ' ') + 1;
    cout << "El numero de letras de la frase son: " << nl << endl;
    // El numero de veces que aparece una vocal
    nVocal = numVocales(str);
    cout << "El numero de vocales en la frase son: " << nVocal << endl;

    return 0;

}
int numberWords(char arr[], char key){
    int i, nv = 1;
    int n = strlen(arr);

    for (i = 0; i < n; i++)
        if(arr[i] == key)
        nv++;
    return nv;
}
int strlen(const char arr[]){
    int i;
    for (i = 0; arr[i] != '\0'; i = i + 1);
    return i;
}
int numVocales(char arr[]){
    int n, nVocal = 0;
    n = strlen(arr);
    char vocals[5] = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++)
            if(arr[i] == vocals[j])
            nVocal++;
    }
    return nVocal;
}