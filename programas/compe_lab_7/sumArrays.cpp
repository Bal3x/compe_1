// This program will ask the user to enter values for two arrays of size 3:
// ('array1' and 'array2'). Then, it will add the two arrays and store 
// the sum in a third array of size 3 ('array3'). (First element of 'array1'
// plus the first element of 'array2' will be stored in the first element
// of 'array3'). Finally, it will print the three arrays to the screen.

// EXAMPLE:
// Please input element 0 for array1: 1
// Please input element 1 for array1: 2
// Please input element 2 for array1: 3
// Please input element 0 for array2: 2
// Please input element 1 for array2: 4
// Please input element 2 for array2: 6

// 1  2  3
// 2  4  6
// 3  6  9

// Note: The arrays are displayed vertically.
// Array1  = 1   Array2 = 2		Array3 = 3
//			 2			  4				 6
//	 		 3			  6				 9

// OPTIONAL: Part of the code may be implemented in external functions.

#include <iostream>
using namespace std;



int main ()
{	
    const int MAX_ARRAY = 3;		// Size of arrays

	int  array1[MAX_ARRAY] = {1, 2, 3};      	// Array 1
	int  array2[MAX_ARRAY] = {4, 5, 6};      	// Array 2
	int  array3[MAX_ARRAY];      	// Array 3 to store the sum
    int i;

	// Code to ask the user to enter values for array1 
	for(i = 0; i < MAX_ARRAY; i++){
		cout << "Please input element " << i << " for array1: ";
		cin >> array1[i];
	}
       
	// Fill the code to ask the user to enters values for array2 
    // hint: 'for loop' similar to array1
    for(i = 0; i < MAX_ARRAY; i++){
        cout << "PLease input element " << i << " for array2: ";
        cin >> array1[i];
    }    
    // Fill the code to store the sum of array1 and array2 into array3 
    // hint: 'for loop' 
    for(i = 0; i < MAX_ARRAY; i++){
        array3[i] = array1[i] + array2[i];
    }
    
    // Code to print out each of the arrays vertically (as columns)
    // hint: 'for loop'
    for(i = 0; i < MAX_ARRAY; i++){
        cout << array1[i] << "  " << array2[i] << "  " << array3[i] << "\n";

    }
   return 0;
}                                                
