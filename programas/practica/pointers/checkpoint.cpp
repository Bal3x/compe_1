// checkpoint
// Assuming arr is an array of ints, will each of the following program segments
// display "True" or "False"?

#include <iostream>
using namespace std;
void makeNegative(int *);
void processArray(const int *, int);
void processArray2(int * const, int);

int main(){

    int arr[5]{1, 2, 3, 4, 5};
    int *ip = nullptr;
    cout << "Exercise A: " << endl;
    if (arr < &arr[1])
        cout << "True";
    else
        cout << "False";
    cout << "\nExercise B: " << endl;
    if(&arr[4] < &arr[1])
        cout << "True";
    else
        cout << "False";
    cout << "\nExercise C: " << endl;
    if(arr != &arr[2])
        cout << "True";
    else
        cout << "False";
    cout << "\nExercise D: " << endl;
    if(arr != &arr[0])
        cout << "True";
    else
        cout << "False";
    
    cout << "The negative number is " << endl;
    makeNegative(&arr[2]);
    cout << arr[2];
// which of the following function headers is the correct one for the process array function
    processArray(arr, 5);
// dynamically allocate an array of 500 integers
    ip = new int[500];
// write a statement that will free the memory allocated
    delete[] ip;
    ip = nullptr;

    return 0;
}
void makeNegative(int *val){
    if (*val > 0)
        *val = -(*val);
}
void processArray(const int *arr, int size){
    cout << "\nThis works? " << endl;
}
