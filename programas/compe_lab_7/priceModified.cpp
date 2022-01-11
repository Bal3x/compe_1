// This program will read in prices and store them into a two-dimensional array
// It will print those prices in a table form and the lowest price.

// EXAMPLE
// Input: 
// Please input the number of rows from 1 to 10
// 2
// Please input the number of columns from 1 to 10
// 3
//
// Input price of item (0,0): 2
// Input price of item (0,1): 4
// Input price of item (0,2): 6
// Input price of item (1,0): 1
// Input price of item (1,1): 3
// Input price of item (1,2): 5
//
//Output: 
//			2.00  4.00  6.00  
//			1.00  3.00  5.00  
//			Lowest price: 1.00


// PLACE YOUR NAME HERE

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

int main()
{
	int numOfRows;                               // holds the number of rows used 
    int numOfCols;                               // holds the number of columns used
	float priceTable[MAXROWS][MAXCOLS];         // a 2D array holding the prices
	
	cout << "Please input the number of rows from 1 to "<< MAXROWS << endl;
	cin >> numOfRows;

	cout << "Please input the number of columns from 1 to "<< MAXCOLS << endl;
	cin >> numOfCols;
	
	// Read prices into the table
	for(int row = 0; row < numOfRows; row++)
    {
		for(int col = 0; col < numOfCols; col++)
		{
			cout << "Input price of item (" << row << "," << col << "): "; 
			// Fill in the code to store the value into the table
			cin >> priceTable[row][col];
		}
	}

	// Display table with prices
	cout << fixed << showpoint << setprecision(2);
	cout << endl;
	for(int row = 0; row < numOfRows; row++)
	{
		for(int col = 0; col < numOfCols; col++)
		{
			// Fill in the code to print each element in the table
			cout << priceTable[row][col];	
			cout << "  ";		
		}
		cout << endl;
	}
	
	// Find lowest price
	float lowestPrice;
	lowestPrice = priceTable[0][0];		// make first element the lowest price
	for(int row = 0; row < numOfRows; row++)
		for(int col = 0; col < numOfCols; col++)
			if (lowestPrice > priceTable[row][col])
				lowestPrice = priceTable[row][col];
	
	// Fill code to display lowest price
	cout << "The Lowest Price is " << lowestPrice << endl;
	
	return 0;
}

