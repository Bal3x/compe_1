
#include <iostream>
using namespace std;

int main(){

    int a = 5;
    int* pi;

    pi = &a;

    cout << pi << endl;
    cout << *pi << endl;
    
    delete pi;

    return 0;
}