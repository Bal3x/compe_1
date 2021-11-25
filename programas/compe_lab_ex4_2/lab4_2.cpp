// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{

	float average;    // variable to store the grade average
	
	// Ask user to enter the average
	cout << "Input your average:" << endl;
	cin >> average;

	if (average >= 60)
		cout << "You Pass" << endl;
	else
		cout << "You Fail" << endl;

    return 0;	
}