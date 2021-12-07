// This program takes two numbers (pay rate & hours) and multiplies them
// to get grosspay. It then print the grosspay the the screen.

// Note1: The third parameter of the function computePaycheck(), which
// is the variable to store the grosspay, is passed by reference.

// Note2: The calculation of the grosspay should be implemented in the
// computePaycheck() function, while the output of the grosspay should
// be implemented in the main() function.

// EXAMPLE:
// Please input the pay per hour: 10
// Please input the number of hours worked: 8
// The grossPay is $80.00
// We hoped you enjoyed this program


//Bryan Chavez

#include <iostream>
#include <iomanip>
using namespace std;


//Function prototypes
void printDescription();
void computePaycheck(float, int, float&);

int main()
{
	float payRate;
	float grossPay;
	int hours;

	cout << setprecision(2) << fixed;

	cout << "Welcome to the Pay Roll Program" << endl;

	printDescription(); //Call to Description function

	cout << "Please input the pay per hour: ";
	cin >> payRate;

	cout << endl << "Please input the number of hours worked: ";
	cin >> hours;
	cout << endl << endl;

	computePaycheck(payRate,hours,grossPay);

	cout << "The gross pay is $ " << grossPay << endl;//  Fill in the code to output grosspay


	cout << "We hoped you enjoyed this program" << endl;

	return 0;
}


//   ********************************************************************
//                         printDescription
//
//   task:     This function prints a program description
//
//   ********************************************************************

void printDescription() //The function heading
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;
	cout << "************************************************"  << endl << endl;
}


//  *********************************************************************
//                        computePaycheck
//
//   task:     This function takes rate and time and multiples them to
//             get gross pay.
//   data in:  pay rate and time in hours worked
//   data out: the gross
//
//   ********************************************************************

void computePaycheck(float payRate, int hours, float& grossPay)
{

    grossPay = (hours * hours);

    
    //  Fill in the code to calculate grosspay
}
