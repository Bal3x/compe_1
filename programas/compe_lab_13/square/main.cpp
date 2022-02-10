// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
 
#include <iostream>
#include "Square.h"
using namespace std;

 
  int main(){

    float size; // size contains the length of a side of the square
    Square box; // box is defined as an object of the Square class
    // Square box1(9);
    
    // FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE
    // SIDE OF THE SQUARE. (This is stored in size)
    cout << "Enter the Length of the side of the square " << endl;
    cin >> size;
    while(size <= 0){
        cout << "Invalid value please enter a positive number." << endl;
        cin >> size;
    }
    // FILL IN THE CODE THAT CALLS SetSide.
    box.setSide(size);

    // FILL IN THE CODE THAT WILL RETURN THE AREA FROM A CALL TO A FUNCTION
    // AND PRINT OUT THE AREA TO THE SCREEN.
    cout << "The Area of the box is " << box.findArea() << endl;
    // cout  << "The Area of box1 is " << box1.findArea() << endl;
    
    // FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
    // FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
    cout << "The Perimeter of the box is " << box.findPerimeter() << endl;
    // cout << "The Perimeter of the box is " << box1.findPerimeter() << endl;

  return 0;
}



