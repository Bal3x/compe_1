// This program performs a linear search on a character array.
// It will ask the user to enter a character and will search for it in the
// array. If the character is in the array it will display its position
// in the array, if the character is not in the array it will display
// a message saying that is was not found.

#include<iostream>
using namespace std;

int searchArray(char[], int, char); // function prototype
const int SIZE = 8;

int main()
{
	char charArray[SIZE] = "harpoon";
	// The character (char) array containing the word 'harpoon' may be also defined like this:
	// char charArray[SIZE] = {'h', 'a', 'r', 'p', 'o', 'o', 'n', '\0'};
	int found;
	char ch;

	cout << "Enter a letter to search for: ";
	cin >> ch;

	found = searchArray(charArray, SIZE, ch);
	if (found == -1)
		cout << "The letter " << ch
             << " was not found in the array" << endl;
	else
		cout << "The letter " << ch <<" is in the " << found + 1
		     << " position of the array" << endl;

	return 0;
}

//*******************************************************************
//                      searchArray
//
// task:	      This searches an array for a particular value
// data in:       Array of values, the number of
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************

int searchArray(char array[], int numElems, char value)
{
	for (int i = 0; i < numElems; i++)
	{
		// Each array entry is checked to see if it contains the desired value.
		// If the desired value is found, the array subscript 'i' is
		// returned to indicate the location in the array
		if (array[i] == value)
		 return i;
	}

	return -1;	     // if the value is not found, -1 is returned
}
