//This program uses two functions that accept addresses of variables as arguments

#include <iostream>
using namespace std;
void getNumber(int *);
void doubleValue(int *);

int main(){
    int number;
    // call getnumber function and pass the address of number
    getNumber(&number);
    // call doubleValue and pass the address of number
    doubleValue(&number);
    // display the value in number
    cout << "That value doubled is " << number << endl;

    return 0;
}
void getNumber(int *input){
    cout << "Enter an integer number: ";
    cin >> *input;
}
void doubleValue(int *val){
    *val *= 2;
}