// This program illustrates the use of logical operators.
// Rewrite gpa >= 2.0 in the first if statement using the NOT operator.
// Note (in words would be): If gpa is NOT less than 2

// EXAMPLE:
// What year student are you?
// Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
// 4
// Now enter your GPA
// 3
// It is time to graduate soon

// ANOTHER EXAMPLE:
// What year student are you ?
// Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
// 4
// Now enter your GPA
// 2
// It is time to graduate soon

// ANOTHER EXAMPLE:
// What year student are you ?
// Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)
// 4
// Now enter your GPA
// 1.99
// You need more schooling

// Bryan Chavez

#include <iostream>
using namespace std;


int main()
{
 	char year;
    float gpa;

  cout << "What year student are you ?" << endl;
  cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
		 << endl << endl;
	cin >> year;

  cout << "Now enter your GPA" << endl;
  cin >> gpa;

  // You only need to make a change in the next line
	if (!(gpa < 2.0) && year == '4')
		cout << "It is time to graduate soon" << endl;

    else if (year != '4'|| gpa < 2.0)
    cout << "You need more schooling" << endl;

  return 0;
}
