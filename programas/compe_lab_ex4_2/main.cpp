//	This program ask the user for an average grade.
//  It prints "You Pass" if the student's average is 60 or higher and 
//	prints "You Fail" otherwise.

// 	Modify the program to allow the following categories: 
//	Invalid data (numbers above 100 and below 0), 'A' category (90–100), 
//	'B' categoryc(80–89), 'C' category (70–79), 'You Fail' category (0–69).

// EXAMPLE 1:
// Input your average: -5
// Invalid Data

// EXAMPLE 2:
// Input your average: 0
// You fail

// EXAMPLE 3:
// Input your average: 69
// You fail

// EXAMPLE 4:
// Input your average: 70
// You got a C

// EXAMPLE 5:
// Input your average: 79
// You got a C

// EXAMPLE 6:
// Input your average: 80
// You got a B

// EXAMPLE 7:
// Input your average: 89
// You got a B

// EXAMPLE 8:
// Input your average: 90
// You got a A

// EXAMPLE 9:
// Input your average: 100
// You got a A

// EXAMPLE 10:
// Input your average: 101
// Invalid Data


// Bryan Chavez

#include <iostream>
using namespace std;

int main()
{

	float average;    // variable to store the grade average
	
	// Ask user to enter the average
	cout << "Input your average:" << endl;
	cin >> average;


    if (average < 0)
        cout << "Invalid Data" << endl;
    else if (average == 0)
        cout << "You Fail" << endl;
    else if (average <= 69)
        cout << "You Fail" << endl;
    else if (average <= 79)
        cout << "Congratulations you got a C. " << "You Pass!" << endl;
    else if (average <= 89)
        cout << "Congratulations you got a B. " << "You Pass!" << endl;
    else if (average <= 99)
        cout << "Congratulations you got an A. " << "You Pass!" << endl; 
    else if (average == 100)
        cout << "Congratulations you got an A. " << "You Pass!" << endl;   
    else
        cout << "Invalid Data" << endl;    

    return 0;	
}
