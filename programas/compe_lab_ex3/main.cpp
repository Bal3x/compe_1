// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse. The value of the hypotenuse should
// contain exactly two decimal values.

// EXAMPLE:
//	Please input the value of the two sides
//	2 3
//	The sides of the right triangle are 2 and 3
//	The hypotenuse is 3.61

// Bryan Chavez

#include <iostream>
#include <cmath>         // needed for math functions like sqrt()
#include <iomanip>

using namespace std;

int main()

{
	cout << setprecision(2) << fixed << showpoint;

	float a,b;		   // the smaller two sides of the triangle
	float hyp;		   // the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	// Fill in the assignment statement that determines the hypotenuse.

	cout << "The sides of the right triangle are " << a << " and " << b << endl;
    
    hyp = sqrt(pow(a,2) + pow(b,2));
	
    cout << "The hypotenuse is " << hyp << endl;

	return 0;
}