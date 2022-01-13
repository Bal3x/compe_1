// This program will ask the user to enter values for the first two columns
// of a table (3 x 3), add the two columns and store the sum in 
// the third column of the table. Finally, it will print the table to the
// screen.

// EXAMPLE
// Input the value for element (0,0): 1
// Input the value for element (0,1): 3
// Input the value for element (1,0): 2
// Input the value for element (1,1): 4
// Input the value for element (2,0): 5
// Input the value for element (2,1): 7
//
//			  1  3  4  
//			  2  4  6  
//			  5  7  12

// Note: 1 + 2 = 4
//		 2 + 4 = 6
//		 5 + 7 = 12

// Note: Part of the program is already implemented but you may start
// from scratch or modify it if you want, but you have two use a 
// two-dimensional array (table).

#include <iostream>
using namespace std;

// You have to use these variables in the code.


int main ()
{
	const int ROWS = 3;
	const int COLS = 3;
	int table[ROWS][COLS];
	int sum, i, j, value;

	// Code to ask the user to enter values for first two colums of the
	// table, add them, and store the sum into the third column. 
	// Fill in the empty lines.
	// Note: We need to use a nested-loop (for-loop inside another for-loop)
	
	for(i = 0; i < ROWS; i++)			// Iterate through the rows
	{
		sum = 0;		
		for(j = 0; j < COLS - 1; j++)		// Iterate through the columns.
		{
			cout << "Input the value for element (" << i << "," << j << "): ";
			cin >> value;
			table[i][j] = value;		// Store value entered into the table
			sum += value;				// Temporary sum of values entered					
		}
		table[i][COLS] = sum;			// Store sum into the third column
	}

    // Fill the code to print out the table.
    // Hint: Use a nested-loop similar to the previous part. Instead of 
    // storing values into the table, now you have to display the values
    // that are already stored in the table.

	for(i = 0; i < ROWS; i++){
		for(j = 0; j < COLS; j++){
			cout << table[i][j] << '\t';
		}
		cout << endl;
	
	}

   return 0;
}                                                

