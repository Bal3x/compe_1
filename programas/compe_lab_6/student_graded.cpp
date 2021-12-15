/*
Option 1: Write a program that will convert miles to kilometers and kilometers
to miles. The user will indicate both a number (representing a distance)
and a choice of whether that number is in miles to be converted to kilo-
meters or kilometers to be converted to miles. Each conversion is done
with a value returning function. You may use the following conversions.
 
1 kilometer = .621 miles
1 mile = 1.61 kilometers

*/
#include <iostream>
using namespace std;
void optionConvertion();

int main(){

    optionConvertion();

    return 0;
}

void optionConvertion(){
// variables
    int converType;
    float miles, km;
// codigo de la funcion
    cout << "Please input: " << '\n' << "1 Convert miles to kilometers" << '\n' << "2 Convert kilimeters to miles" << '\n' << "3 Quit" << endl;
    cin >> converType;
  
    if (converType == 1){
        cout << "Please input the miles to be converted: " << endl;
        cin >> miles;
        while(miles <=0.0){
            cout << "Please try again with a positive value. Input the miles to be converted: " << endl;
            cin >> miles;
        }
// conversion
        km = miles/0.621;
// imprime resultado
        cout << miles << " Miles equal to " << km << " Kilometers" << endl;
    }
    else if (converType == 2){
        cout << "Please input the kilometers to be converted: " << endl;
        cin >> km;
        while(km <=0.0){
            cout << "Please try again with a positive value. Input the kilometers to be converted: " << endl;
            cin >> km;
        }
// conversion
        miles = km/1.61;
// imprime resultado
        cout << km << " Kilometers equals " << miles << endl;

    }
    else 
        exit(0);
    
    
}
        
    
        
