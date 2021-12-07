//  This program has the user input a number n and then finds the
//  sum of the first n positive integers using a 'for' loop and a
//  'while' loop.

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;


int main()
{
	int value;      // value is some positive number
 	int sum = 0;    // sum holds the sum of the first n positive numbers
  int number;     // counter for the 'for loop'

  	cout << "Please enter a positive integer" << endl;
   	cin >> value;

  	if (value > 0)
  	{
//************************ Using For Loop *****************************/			
			for (number = 1; number <= value; number++)
      {
				//sum = sum + number;
				sum += number;
			} // curly braces are optional since there is only one statement
			
			cout << "\nFor Loop: The sum of the first " << value << " numbers "
					 << "is " << sum << endl;

//********************** Using While Loop *****************************/			
			number = 1;					// Reset number to 1
			sum = 0;						// Reset sum to 0
			while (number <= value)
			{
				sum += number;
				number++;
			}

			cout << "While Loop: The sum of the first " << value << " numbers "
           << "is " << sum << endl;
    }
    else
			cout << "Invalid input - integers must be positive" << endl;

   return 0;
}
