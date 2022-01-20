#include <iostream>
using namespace std;

int main()
{
	int *ptr1;		// ptr1 is a pointer variable that points to an int
	int one = 10;	// Assign a value of 10 to variable one
	 
	// This assigns the address of variable one to ptr1.
	ptr1 = &one;
	// Note that &one indicates that the address, not the value, of the 
	// variable one is being assigned to ptr1. Remember that ptr1 can 
	// only hold an address. Since ptr1 holds the address where the 
	// variable one is stored, we say that ptr1 "points to" one.
	 
	// This prints the address of variable one
	cout << "The value of &one is " << &one << endl; 
	
	// This prints the value of variable one
	cout << "The value of one is " << one << endl; 
	 
	 // This prints the address of &one, because ptr1 points to variable one
	cout << "The value of ptr1 is " << ptr1 << endl; 
	 
	// This prints the value of variable one, because ptr1 points to variable one
	cout << "The value of *ptr1 is " << *ptr1 << endl; 

}
