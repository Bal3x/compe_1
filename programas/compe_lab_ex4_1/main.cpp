// This program will ask the user to enter two numbers (integers) and tests 
// whether two values are equal or not.

// EXAMPLE:
// Please enter first integer: 2
// Please enter second integer: 2
// num1 = 2 and num2 = 2
// Hey, that's  a coincidence!

// ANOTHER EXAMPLE:
// Please enter first integer: 3
// Please enter second integer: 4
// num1 = 3 and num2 = 4
// The values are not the same


// Bryan Chavez

#include <iostream>
using namespace std;

int main( )
{
 	int num1, num2;				// Variables to store the numbers
 	

	// Add code to ask for the first number and stored it into variable 'num1'
    cout << "Please enter the first integer: " << endl;
    cin >> num1;

	// Add code to ask for the second number and stored it into variable 'num2
     cout << "Please enter the second integer: " << endl;
     cin >> num2;

	// Display both numbers
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	// Check if the numbers are equal or not.
	// These can be done with two 'if' statements or with one 'if-else' statement
	// NOTE: There is an error here. Something has to be changed.
    if (num1 == num2)
		cout << "Hey, that's  a coincidence!" << endl; 
			
    if (num1 != num2 )
		cout << "The values are not the same" << endl;
			
    return 0;	
}
