// This program demonstrates a Binary Search, which search for a value
// in an array, assuming that the array is sorted in descending order.
// You have to modify the function binarySearch() to search for a value
// in an array that is sorted in ascending order.
// NOTES:
// Uncomment line 34 and comment line 32. You don't have to edit anything 
// else in the main(), just in the binarySearch() function.

// EXAMPLES (using the array sorted in ascending order)

// Input:  Enter an integer to search for: 12
// Output: The value 12 is in position number 8 of the array

// Input:  Enter an integer to search for: 2
// Output: The value 2 is in position number 2 of the array

// Input:  Enter an integer to search for: 19
// Output: The value 19 is in position number 14 of the array

//PLACE YOUR NAME HERE

#include<iostream>
using namespace std;

int binarySearch(int [], int, int);  // function prototype
const int SIZE = 17;
int counter = 0;

int main()
{
	int found, value;
	// Array to be search, in descending order
	// int array[] = {34,19,19,18,17,13,12,12,12,11,9,5,3,2,2,0}; // Comment this line
	// Array to be search, ascending order
	int array[] = {0,2,2,3,5,9,11,12,12,12,13,17,18,19,19,34,35}; // Uncomment this line
	// int array[] = {34,19,19,1,2,4,57,8,6,4,3,2,1,32,21,34}; 
	
	cout << "Enter an integer to search for: ";
	cin >> value;

	found = binarySearch(array, SIZE, value); //function call to perform the binary search
	                                          //on array looking for an occurrence of value
	if (found == -1)
		cout << "The value " << value << " is not in the array" << endl;
	else
	{
		cout << "The value " << value << " is in position number "
		     << found + 1 << " of the array" << endl; 
	}
	cout << "Numero de loops = " << counter << endl;
	return 0;
}


//*******************************************************************
//                     binarySearch
//
// task:		  This searches an array for a particular value
// data in:       List of values in an orderd array, the number of 
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************
int binarySearch(int array[],int numElems,int number)
{
	int first = 0;				    // Index of first element of array
	int last = numElems - 1;	    // Index of last element of the array
	int middle;					    // Index of current middle value of 
	                                // the array
	
	while (first <= last)
	{	counter++;
		middle = first + (last - first) / 2; 
		   
		if (array[middle] == number)
			return middle;			// If value is in the middle, we are done
	                                 
		else if (array[middle] > number)
			last = middle - 1;		// Ignore second half of array and search the first 
		
		else // (array[middle] > number)
			first = middle + 1;		// Ignore first half of array and search the second
	}
	
	return -1;					// Indicates that value is not in the array
}
