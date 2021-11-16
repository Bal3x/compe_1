// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// EXAMPLE:
// Please enter the number of items bought: 2
// Please enter the price of each item: 1.50
// The total bill is: $3.00

//  Bryan Chavez

#include <iostream>
#include <iomanip>
using namespace std;


int main()

{
	int   quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float totalBill;		// contains the total bill.


	cout << setprecision(2) << fixed << showpoint;  //formatted output

	cout << "Please input the number of items bought" << endl;

	// Fill in the input statement to save in the quantity.   
    cin >> quantity;
	// Fill in the prompt to ask for the price.
    cout << "Please input the price of each item: ";
	// Fill in the input statement to save in the price of each item.
    cin >> itemPrice;
	// Fill in the assignment statement to determine the total bill.
    cout << "The total is: ";
	// Fill in the output statement to print total bill,
	// with a label to the screen.
    totalBill = quantity * itemPrice;
    cout << totalBill << '\n';

	return 0;
}
    

