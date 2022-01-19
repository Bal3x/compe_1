// This program ask the user to enter a character. It then performs a
// linear search on a character array and display the number of times
// that the character appears on the array. If the character is not in the
// array, then it will display a message saying that is was not found.
// Add the necessary code for the program to work.
// NOTE:
// You don't have to edit anything in the main(), just in the searchArray() function.

// EXAMPLES:

// Input:  Enter a letter to search for: h
// Output: The are 2 number of 'h' letters in the list

// Input:  Enter a letter to search for: n
// Output: The are 2 number of 'n' letters in the list

// Input:  Enter a letter to search for: z
// Output: The letter z was not found in the list


// Place Your Name Here

#include<iostream>
using namespace std;

int searchArray(char[], int, char); // function prototype
const int SIZE = 10;

int main()
{
	//char charArray[SIZE] = {'h', 'h', 'a', 'r', 'p', 'o', 'o', 'n', 'n', '\0'};
	char charArray[SIZE] = "hharpoonn";
	int found;
	char ch;

	cout << "Enter a letter to search for: ";
	cin >> ch;

	found = searchArray(charArray, SIZE, ch);
	if (found == 0)
		cout << "The letter " << ch
             << " was not found in the array" << endl;
	else
		cout << "The are " << found << " number of '" << ch
			 <<"' letters in the array" << endl;

	return 0;
}

//*******************************************************************
//                      searchArray
//
// task:	      This searches an array for a particular value
// data in:       Array of values, the number of
//                elements in the array, and the value searched for
//                in the array
// data returned: Number of times the value appears in the list or 0
//				  if the value is not found
//
//*******************************************************************

int searchArray(char array[], int numElems, char value)
{
	// Counter, contains the number of times the character appears on the array.
	int count = 0;

	// Add code to search the array and count the number of times the
	// character appears in it.
	// HINT: for-loop similar to the one in linearSearch.cpp
    for( int i = 0; i < numElems; i++){
        if (array[i] == value){
            count++;
        }
    }

	// Complete the return statement. If the value is found, returns the
	// number of characters founded. If the value is not found, 0 is returned.
	return count;
}
