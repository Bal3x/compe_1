// This program uses a bubble sort to arrange an array of integers in 
// ascending order (smallest to largest). It then display the array
// before the sorting and after the sorting. Modify the program so it orders 
// integers in descending order (largest to smallest). Then add some code
// to display the array at each step of the algorithm. You don't have to 
// modify anything in the main() function. All modification are insided
// the bublleSortArray() function. 


// EXAMPLE:
// The values before the bubble sort is performed are: 9  2  0  11  5  

// The values are: 9  2  0  11  5  
// The values are: 9  2  0  11  5  
// The values are: 9  2  11  0  5  
// The values are: 9  2  11  5  0  
// The values are: 9  2  11  5  0  
// The values are: 9  11  2  5  0  
// The values are: 9  11  5  2  0  
// The values are: 11  9  5  2  0  
// The values are: 11  9  5  2  0  
// The values are: 11  9  5  2  0  

// The values after the bubble sort is performed are: 11  9  5  2  0  

// Bryan Chavez

#include<iostream>
using namespace std;

int bubbleCounter = 0;
// Function prototypes
void bubbleSortArray(int[], int);
const int SIZE = 5;

int main()
{
	int values[SIZE] = {19, -4, 91, 0, -17};

	// Displays the array before sorting
	cout << "\nThe values before the bubble sort is performed are: ";
	for (int count = 0; count < SIZE; count++)
		cout << values[count] << "  ";
	cout << endl;

	// Sort the array in ascending order using bubble sort algorithm
	bubbleSortArray(values,SIZE);

	// Display the array after sorting
	cout << "\n\nThe values after the bubble sort is performed are: ";
	for (int count = 0; count < SIZE; count++)
		cout << values[count] << "  ";

	return 0;
}

//******************************************************************
//                      bubbleSortArray
//
// task:		to sort values of an array in ascending order
// data in:       the array, the array size
// data out:      the sorted array
//
//******************************************************************
void bubbleSortArray(int array[], int elems)
{
	bool swap;
	int temp;
	int bottom = elems - 1;     // Bottom indicates the end part of the 
	                            // array where the largest values have
	                            // settled in order
do
	{
		swap = false;
		for (int count = 0; count < bottom; count++)
		{   bubbleCounter ++;
			if (array[count] < array[count+1])		// swap to "<"" to have the result in accending order
			{  // The next three lines swap the two elements
			   temp = array[count];  
			   array[count] = array[count+1];
			   array[count+1] = temp;
			   swap = true; 	// Indicates that a swap occurred
			}
			// Display array at each each step
            cout << "\nThe values are: ";
			// Add code here to diplay the complete array at each step
			// Hint: for-loop similar to the one in the main() function	
			for (int count = 0; count < SIZE; count++)
		    cout << array[count] << "  ";
		}
        bottom--;    // Bottom is decremented by 1 since each pass through
	                 // the array adds one more value that is set in order
	                    
	// Loop repeats until a pass through the array with no swaps occurs            
	} while(swap != false);
}
