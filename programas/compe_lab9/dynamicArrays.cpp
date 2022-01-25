
// This program demonstrates the use of dynamic arrays


// Bryan Chavez

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

float *monthSales; // a pointer used to point to an array 
// holding monthly sales
float total = 0; // total of all sales
float average; // average of monthly sales
int numOfSales; // number of sales to be processed
int count; // loop counter

cout << fixed << showpoint << setprecision(2);

cout << "How many monthly sales will be processed? ";
cin >> numOfSales;

// Fill in the code to allocate memory for the array pointed to by
// monthSales.
monthSales = new float;
//ask user to enter the sales 
cout << "Enter the sales below\n";
 for (count = 0; count < numOfSales; count++){
    cout << "Sales for Month number " << count + 1 << ": ";
    cin >> *(monthSales+count);// Fill in code to bring sales into an element of the array
}
// calculate the total sales
 for (count = 0; count < numOfSales; count++){
    total = total + monthSales[count];
}
// calculate and print the average of sales
 average = total / numOfSales;// Fill in code to find the average
 cout << "Average Monthly sale is $" << average << endl;

// Fill in the code to deallocate memory assigned to the array.
delete monthSales;

 return 0;

}