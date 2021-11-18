// You have been given a job as a programmer on a Cyborg supercomputer. 
// In order to accomplish some calculations, you need to know how many bytes the
// following data types use: char, int, float, and double.
// You do not have any manuals, so you can't look up this information. 
// Write a C++ program that will determine the amount of memory used by these types
// and display the information on the screen.


// Bryan Chavez 

#include <iostream>
using namespace std;

int main(){

    cout << "char:" << sizeof(char) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float : " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
  
    return 0;
}