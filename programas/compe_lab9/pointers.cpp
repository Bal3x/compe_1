// This program demonstrates the use of pointer variables.
// It finds the area of a rectangle given length and width.
// It prints the length and width, and determines which one is greater.

// EXAMPLE:
// Please input the length of the rectangle: 2
// Please input the width of the rectangle:  5
// The area is 10
// The width is greater than the length

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main(){
   int length;		// holds length
   int width;		// holds width
   int area;		// holds area

   int *lengthPtr;	// int pointer which will be set to point to length
   int *widthPtr;   // int pointer which will be set to point to width

   cout << "Please input the length of the rectangle: ";
   cin >> length;
   cout << "Please input the width of the rectangle: ";
   cin >> width;

   // Fill in code to make lengthPtr point to length (hold its address).
   // Assign address of variable length to lengthPtr
   // Hint: You have to use the symbol &
   ________________________________

   // Fill in code to make widthPtr point to width (hold its address)
   // Assign address of variable width to widthPtr
   // Hint: You have to use the symbol &
   ________________________________

	// Fill in code to find the area, by using only the pointer variables
	// and save it to the variable area.
	// Hint: You have to use the symbol *
   area =  __________________________
   cout << "The area is " << area << endl;

   if (_______________________) // Fill the condition of (length > width) by using only the pointer variables
    	cout << "The length is greater than the width" << endl;
   else if (__________________)	// Condition of (length < width) by using only the pointer variables
    	cout << "The width is greater than the length" << endl;
   else
    	cout << "The width and length are the same" << endl;

   return 0;
}
