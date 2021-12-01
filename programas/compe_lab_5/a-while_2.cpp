// This programs ask the user to enter a letter, and repeat it until the
// user enters the letter 'x' (lowercase)to exit the program.

// Modify the program so that the user can exit the program with the 
// letter 'x' (lowercase) or the letter 'X'  (uppercase). It should also
// display the message "Bye Bye" when the user exit the program.

// Bryan Chavez

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

    do
    {
        cout << "Please enter a letter, to exit program enter 'x' " << endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
    } 
    while (letter != 'x' && letter != 'X');
	

    cout << "Bye Bye" << endl;

    return 0;	
}