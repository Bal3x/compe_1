//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// Modify the code so that it computes the mean of the consecutive
// positive integers n, n+1, n+2, . . . , m, where the user chooses n and m.
// For example, if the user picks 3 and 9, then the program should find the
// mean of 3, 4, 5, 6, 7, 8, and 9, which is 6.

// EXAMPLE:
// Please enter a positive integer 'n': 3
// Please enter a positive integer 'm': 9
// The mean average from 3 to 9 is 6

// Bryan Chavez

#include <iostream>
using namespace std;

// Modify the code so that it computes the mean of the consecutive
// positive integers n, n+1, n+2, . . . , m, where the user chooses n and m.
int main()
{
	int value, n, m;       // value is some positive number n
 	int total = 0;   // total holds the sum of the first n positive numbers
  	float mean;      // the average of the first n positive numbers

	// n and m are values entered by the user
  	cout << "Please enter a positive integer: ";
   	cin >> n;
	cout << "Please enter a second positive integer greater than the previous one: ";
   	cin >> m;
	
	//then value is the difference between m and n.
	value = (m - n);

  	if (value > 0)
  	{
      	for (int i = n ; i <= m; i++){
 	  	    total = total + i;
		}  // curly braces are optional since there is only one statement

        mean = float(total) / (value + 1);         // note the use of the typecast

		cout << "The mean average from " << n << " to " << m << " is " << mean << endl;
    }
    else
        cout << "Invalid input - integers must be positive" << endl;

   return 0;
}


    

