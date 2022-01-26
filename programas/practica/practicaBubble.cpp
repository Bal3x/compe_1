#include <iostream>
using namespace std;

int main(){
    const int as = 10;
    int arr[as] = {7, 2, 4, 5, 1, 9, 12, 7, 15, 6};
    int temp, lim;

    cout << "Arreglo Original: " << endl;
    for (int i = 0; i < as; i++){
        cout << arr[i] << ' ';
    }

    lim = as -1;
    for (int pass = 0; pass < as - 1; pass++){
        for (int i = 0; i < lim; i++){
            if(arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        lim--;
    }
    cout << "\nArreglo Ordenado: " << endl;
    for (int i = 0; i < as; i++){
        cout << arr[i] << ' ';
        }
    
    }