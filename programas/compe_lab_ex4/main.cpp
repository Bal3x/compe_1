// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.
// Does changing the data type of batavg from int to float solve the 
// problem?
// Continue to work with this program until you get the correct result.
// The correct result should be 0.292162. Do not change the data type of
// the two named constants. Instead, use a typecast to solve the problem.

// 	EXAMPLE: 
//	Batting average is: 0.292162

// Bryan Chavez 

#include <iostream>
using namespace std;


const int AT_BAT = 421;		// Do not modify
const int HITS = 123;		// Do not modify

int main()
{
	int batAvg;

	batAvg = HITS / AT_BAT;						    	//an assignment statement
	cout << "Batting average is: " << batAvg << endl;   //output the result
	
	return 0;
}
