#include "Square.h"

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