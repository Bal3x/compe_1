// This program illustrates the use of the Switch statement.
// Rewrite the program using 'if' and 'else if' statements rather than a switch
// statement.
// Note: Did you use a trailing 'else' in your new version. If so, what did
// it correspond to in the original program with the switch statement.

// Bryan Chavez 

#include <iostream>
using namespace std;


int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

    grade = toupper(grade);

    if (grade == 'A')
        cout << "an A - excellent work!" << endl;
    else if ( grade == 'B')
        cout << "you got a B - good job" << endl;
    else if (grade == 'C')
        cout << "earning a C is satisfactory" << endl;
    else if (grade == 'D')
        cout << "while  D is passing, there is a problem" << endl;
    else if (grade == 'F')
        cout << "you failed - better luck next time" << endl;
    else 
        cout << "You did not enter an A, B, C, D, or F" << endl;
    
    return 0;
}
