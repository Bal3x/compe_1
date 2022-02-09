// 8.3 array starts at location 1002500 in memory
#include <iostream>
#include <iomanip>
using namespace std;

// a. ******************************************
int main(){
    const int SIZE = 10;
    double numbers[SIZE]{0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
// b. ******************************************
    double *nPtr;
    cout << fixed << showpoint << setprecision(1);
// c. ******************************************
    for(int count = 0; count < SIZE; count++){
        cout << numbers[count] << " ";
    }
// d. ******************************************
    nPtr = &numbers[0];
    nPtr = numbers;
    cout << endl;
    cout << "Mod 2: Puntero - desplazamiento moviendo el puntero" << endl;
// e. ******************************************
    for (int i = 0; i < SIZE; i++){
        cout << *nPtr++ << " ";
    }

    cout << endl;
    cout << "Mod 3:  Puntero + desplazamiento sin mover puntero" << endl;
// f. ******************************************
    for (int i = 0; i < SIZE; i++){
        cout << *(numbers + i)  << " ";
    }
    cout << endl;
    nPtr = numbers;
    cout << "Mod 4: Nombre del puntero + subindice" << endl;
// g. ******************************************
    for (int i = 0; i < SIZE; i++){
        cout << nPtr[i] << " ";
    }
// h. ******************************************
    cout << endl;
    nPtr = &numbers[3];
    cout << nPtr << endl;

    *nPtr = *(numbers + 3);
    cout << nPtr << endl;   

    nPtr = &nPtr[3];
    cout << nPtr << endl;

    nPtr = numbers;

    

    return 0;
}
