// First Test: total points = 50  (+5 bonus points)

// 10 points
// a) Ask the user to enter two numbers greater than zero. Store the 
//    values into two variables named 'n' and 'm'.
//    Additionally, implement a while-loop to keep asking the user to enter 
//    the numbers again if any of the two numbers are equal or smaller than zero.

// 10 points
// b) If the two numbers (n, m) are equal, display the message "The 
//    numbers are the same". If the two numbers are different, display
//    the message "The numbers are not the same". 

// 10 points
// c) Calculate and display the number n elevated into the power of m:  n^m
//    Store the result into a variable named 'X'.
//    HINT: Use the pow() function.
//    EXAMPLE: If n = 3 and m = 2 then X = 3^2 = 3 * 3 = 9
//    EXAMPLE: If n = 2 and m = 3 then X = 2^3 = 2 * 2 * 2 = 8
//    EXAMPLE: If n = 5 and m = 1 then X = 5^1 = 5
//    EXAMPLE: If n = 1 and m = 3 then X = 1^3 = 1 * 1 * 1 = 1

// 20 points
// d) The result from (c) is already stored into the variable 'X'.
//	  Calculate and display the factorial for the value in 'X':  X!
//    Store the result into a variable named 'factorial'.
//    HINT: Use a for-loop similar to the for-loop used to calculate the 
//          mean of a sequence of numbers in the file 5.3-For.cpp. Instead
//          of adding numbers, now we want to multiply numbers.
//    EXAMPLE: If X = 9, then factorial = 9! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 = 362880
//    EXAMPLE: If X = 8, then factorial = 8! = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 = 40320
//    EXAMPLE: If X = 5, then factorial = 5! = 1 * 2 * 3 * 4 * 5 = 120
//    EXAMPLE: If X = 1, then factorial = 1! = 1
//    NOTE: The calculation of a factorial can result in a really a big number,
//          and the compiler may give an incorrect result. Use the numbers
//          provided in the examples to test your code. 

// OPTIONAL BONUS, 5 points
// e) Add code to ask the user if he wants to quit the program. If 
//    the user enter 'yes' the program exits, if the user enter 'no' or any
//    other string, the program will execute again.


// COMPLETE EXECUTION EXAMPLE (including bonus): 
/*
	Enter two numbers greater than zero.
	Enter the number n: 2
	Enter the number m: 0
	
	Hey, enter two numbers GREATER than ZERO!!!.
	Enter the number n: -4
	Enter the number m: 6
	
	Hey, enter two numbers GREATER than ZERO!!!.
	Enter the number n: 2
	Enter the number m: 3
	
	The numbers are not the same.
	The result of 2^3 is 8
	The result of 8! is: 40320
	
	Do you want to quit?
	Enter 'yes' or 'no': no
	
	Enter two numbers greater than zero.
	Enter the number n: 5
	Enter the number m: 1
	
	The numbers are not the same.
	The result of 5^1 is 5
	The result of 5! is: 120
	
	Do you want to quit?
	Enter 'yes' or 'no': yes
*/


// Bryan Chavez

// Add the code to include libraries here. You need to add 2 libraries.
// For the bonus you may need to add a third one.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main()
{		
    

	// Add the variables here
    int n, m, X;
    char response;
    do{
    
    int factorial = 1;

	//----------------------------(a)-----------------------------------
	// Add code to ask the user to enter the values and store them into 
	// the variables 'n' and 'm'.
    cout << "Enter two numbers greater than 0." << endl;
    cout << "Enter the number n: " << endl;
    cin >> n;
    cout << "Enter the number m: " << endl;
    cin >> m;

	// Add while-loop to ask the user to re-enter the values if they are
	// equal or smaller than zero.
    while (n <= 0 || m <= 0){
        cout << "Hey, enter two numbers GREATER than ZERO!!!." << endl;
        cout << "Enter the number n: " << endl;
        cin >> n;
        cout << "Enter the number m: " << endl;
        cin >> m;
    }

	//----------------------------(b)-----------------------------------
	// Add code to check if the two numbers are equal or different, and 
	// display the corresponding message.
    if (n == m){
        cout << "Numbers are the same." << endl;
    }
    else
        cout << "Numbers are not the same" << endl;

	//----------------------------(c)-----------------------------------
	// Add code to calculate n^m, store the result into the variable 'X'
	// and display the result.
    X = pow(n,m);

    cout << "The result of " << n << "^" << m << " is " << X << endl;


	//----------------------------(d)-----------------------------------
	// Add code to calculate the factorial of X (X!), store the result
	// into the variable 'factorial' and display the result.
    for ( int i = 1; i <= X; i++ ){
        
        factorial = i * factorial;
    }

    cout << "The result of " << X << "! is: " << factorial << endl;
    cout << "Do you want to continue?" << '\n' << "(Y/N)" << endl;
    cin >> response;

    } while (response != 'n' && response != 'N');


	return 0;
}
