// this program will convert inches to centimeter using pointers

#include <iostream>
#include <iomanip>
using namespace std;
double convert(double *);

int main(){

    double measurement;

    cout << "Enter a length in inches, and I will convert it\n";
    cout << "to centimeters: ";
    cin >> measurement;
    convert(&measurement);
    cout << fixed << setprecision(4);
    cout << "Value in centimeters: " << measurement << endl;

    return 0;
}

double convert(double *in){
    *in *= 2.54;
}