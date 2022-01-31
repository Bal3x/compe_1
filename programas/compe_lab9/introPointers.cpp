// this program demonstrate the use of pointer variables
// it finds the area of a rectangle given length and width
// It prints the length and width in ascending order

// Bryan Chavez

#include <iostream>
using namespace std; 


int main(){

int length;
int width; 
int area;

int *lengthPtr;
int *widthPtr;

cout << "Please input the length of the triangle " << endl;
cin >> length;
cout << "Please input the width of the triangle" << endl;
cin >> width;
//fill the code to make the lengthPtr point to length (hold its address)
lengthPtr = &length;
// fill the code to make the widthPrt point width (hold its address)
widthPtr = &width;

area = *lengthPtr * *widthPtr;
cout << "The area is " << area << endl;

if (*lengthPtr > *widthPtr)
    cout << "The length is greater than the width" << endl;
else if (*widthPtr > *lengthPtr)
    cout << "The width os greater that the length" << endl;
else
    cout << "The width and the length are the same" << endl;
    
    return 0;
}