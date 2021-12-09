/* Funcion cuadratica
    1. constraint a != 0; 
    2. pow(b,2)-4*a*c < 0 then, real + img i

 Bryan Chavez
*/

#include <iostream>
#include <cmath>

using namespace std;

void cuadratica (double, double, double);

int main(){
    int a, b, c;
// ask user to input a, b and c
    cout << "Please enter the value a of a." << endl;
    cin >> a;
    
// validate that a != 0
    while (a <= 0){
        cout << "Invalid value for a please enter a positive number." << endl;
        cin >> a;
        
    }
    cout << "Please enter the value a of b." << endl;
    cin >> b;
    cout << "Please enter the value a of c." << endl;
    cin >> c;
//calling cuadratica function
    cuadratica(a, b, c); 


    return 0;
}

void cuadratica (double a, double b, double c){
// variables
    double real, img, X1, X2;

// calculate the quadratic function
    if ((pow(b,2) - 4 * a * c) < 0.0){  
        
        real = -b / (2 * a);
        img = sqrt(abs(pow(b,2) - 4 * a * c)/(2 * a));
        
        cout << " X1 = " << real << " + " << img << "j" << endl;
        cout << " X2 = " << real << " - " << img << "j" << endl;
    }
    else {
        X1 = (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);
        X2 = (-b - sqrt(pow(b,2) - 4*a*c))/(2*a);

        cout << " X1 = " << X1 << endl;
        cout << " X2 = " << X2 << endl;

    }


}