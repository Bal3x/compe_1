// This program will input American money and convert it to foreign currency
// DO NOT MODIFY THE CODE THAT IS ALREADY IMPLEMENTED, or ask me first

// Use the following conversion rate
// One Dollar = 1.06 euros
//	   		    = 9.73 pesos
//			      = 124.35 yen

// EXAMPLE:

// Please input the amount of American Dollars you want converted
// to euros and pesos
// 9.35

// $9.35 is converted to 9.91 euros and 90.98 pesos

// Please input the amount of American Dollars you want converted
// to euros and pesos and yen
// 10.67

// $10.67 is converted to 11.31 euros, 103.82 pesos, and 1326.81 yen

// Please input the amount of American Dollars you want converted
// to euros
// 2.45

// $2.45 is converted to 2.60 euros

// Bryan Chavez


#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes of the functions
void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToEuros(float dollars);

int main ()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		   << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;

	//    Fill in the code to call convertMulti with parameters dollars, euros and pesos
    convertMulti(dollars, euros, pesos);

	//    Fill in the code to output the value of those dollars converted to both euros and pesos
    cout << "The dollars converted to euros: " << euros << endl;
    cout << "The dollars converted to pesos: " << pesos << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	//    Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
    convertMulti(dollars, euros, pesos, yen);


	//    Fill in the code to output the value of those dollars converted to  euros, pesos and yen
    cout << "The dollars converted to euros: " << euros << endl;
    cout << "The dollars converted to pesos: " << pesos << endl;
    cout << "The dollars converted to yen: " << yen << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros" << endl;
	cin  >> dollars;

	//    Fill in the code to call convertToEuros
    euros = convertToEuros(dollars); 

	//    Fill in the code to output the value of those dollars converted to euros
    cout << "The conversion of dollars to euros: " << euros << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//  ************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             and pesos
//   data in:  dollars
//   data out: euros and pesos
//
//   ***********************************************************************
void  convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos "
		   << endl <<" was called with " << dollars <<" dollars" << endl << endl;

	// Fill code to convert dollars to euros and pesos
    euros = 1.06 * dollars; 
    pesos = 9.73 * dollars;

}

//  ************************************************************************
//                           convertMult
//
//   task:     This function takes a dollar value and converts it to euros
//             pesos and yen
//   data in:  dollars
//   data out: euros pesos yen
//
//   ***********************************************************************
void  convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		   << endl << " was called with " << dollars << " dollars" << endl << endl;

	// Fill code to convert dollars to euros, pesos and yen
    euros = 1.06 * dollars; 
    pesos = 9.73 * dollars;
    yen = 124.35 * dollars;

}

//  ****************************************************************************
//                           convertToEuros
//
//   task:          This function takes a dollar value and converts it to euros
//   data in:       dollars
//   data returned: euros
//
//   ***************************************************************************
float convertToEuros(float dollars)
{
    float euros;
	cout << "The function convertToEuros was called with " << dollars
		   << " dollars" << endl << endl;

    // Fill code to convert dollars to euros
    euros = 1.06 * dollars; 

	return euros;
}
