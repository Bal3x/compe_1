// This program declares the Square class and uses member functions to find
// the perimeter and area of the square
 
#include <iostream>
using namespace std;

// square.h
class Square{
    public: 
        void setSide(float length);
        float findArea();
        float findPerimeter();
    private:
        float side;

}; 
 
  int main(){
    Square box; // box is defined as an object of the Square class
    float size; // size contains the length of a side of the square
    
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
    
    // FILL IN THE CODE THAT WILL RETURN THE PERIMETER FROM A CALL TO A
    // FUNCTION AND PRINT OUT THAT VALUE TO THE SCREEN.
    cout << "The Perimeter of the box is " << box.findPerimeter() << endl;

  return 0;
}

//Implementation section Member function implementation
 
//**************************************************
// setSide
//
// task: This procedure takes the length of a side and
// places it in the appropriate member data
// data in: length of a side
//***************************************************
 
void Square::setSide(float length){
    side = length;
}
//**************************************************
// findArea
//
// task: This finds the area of a square
// data in: none (uses value of data member side)
// data returned: area of square
//***************************************************
 
float Square::findArea(){
    return side * side;
}
//**************************************************
// findPerimeter
//
// task: This finds the perimeter of a square
// data in: none (uses value of data member side)
// data returned: perimeter of square
//***************************************************
float Square::findPerimeter(){
    return 4 * side;
 
}

