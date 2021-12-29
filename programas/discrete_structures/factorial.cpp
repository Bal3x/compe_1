/*
Recursive Factorial n!

*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int factorial (int n);
int computingA(float a, float n);


int main(){


    cout << factorial(5) << endl;
    cout << computingA(5, 3) << endl;
    
    return 0;

}
int factorial (int n){
    if (n == 0){
        return 1;
    }
    else 
        return n * factorial (n - 1);
        

}
int computingA(float a, float n){
    if (n == 0){
        return 1;
    }
    else
        return a * computingA(a,n-1);

}