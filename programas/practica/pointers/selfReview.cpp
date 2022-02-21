// Self Review Exercises 
// For each of the following, Wirte C++ statements
// that perform the specified task.
#include <iostream>
using namespace std;

// Assume that double-precision, floating-point numbers are stored
// in eight bytes and that the starting address of the array is at location
// 1002500 in memory. Each part of the exercise should use the results of 
// previous part where appropiate.

// a. Declare an array of type double called numbers with 10 elements, and initialize
// the elements to the values 0.0, 1.1, 2.2, ...9.9. Assume that the symbolic constant SIZE
// has been defined as 10.
int main(){
int SIZE = 10;
double numbers[SIZE]{0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

// b. Declare a pointer nPtr that points to a variable of type double.
double *nPtr;

// c. Use a for statement to print the elements of array numbers using array
// subscript notation. Print each number with one position of precision to the right 
// of the decimal point.


// d. Write two separate statement that each assign the starting address of array numbers to the pointer
// variable nPtr.

// e. Use a for statement to print the elements of array numbers using pointer/ offset
// notation with pointer nPtr.

// f. Use a for statement to print the elements of array numbers using pointer.offset notation with the 
// array name as the pointer.

// g. Use a for statement to print the elements of array numbers using pointer/subscript notation with 
// pointer nPtr.

// h. Refer to the fourth element of array numbers using array subscript notation, pointer/offset notation 
// with the array name as the pointer, pointer subscript notation with nPtr and pointer/offset notation with nPtr.


// i. Assuming that nPtr points to the beginning of array numbers, what address is referenced by nPtr + 8? 
// What value is stored at that location?

// j. Assuming that nPtr points to numbers[5], what address is referenced by nPtr after nPtr -= 4 is executed?
// What is value stored at that location?
    return 0;
}