// this program totals and averages the sales figures for any number of days.
// the figures are stored in a dynamically allocated array

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double *sales = nullptr, total = 0.0, average;
    int numDays, count;
    //get number of days of sales
    cout << "How many days of sales figures do you wish to process? ";
    cin >> numDays;
    //dynamically allocating an array
    sales = new double[numDays];
    //get the sales figures for each day
    cout << "Enter the sales figures below:\n";
    for(count = 0; count < numDays; count++){
        cout << "Day " << count + 1 << ": ";
        cin >> sales[count];
    
    }
    //calculate total
    for(count = 0; count < numDays; count++){
        total += sales[count];
    }
    //calculate average
    average = total / numDays;

    //display results
    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal sales: $" << total << endl;
    cout << "Average sales: $" << average << endl;

    // free dynamically allocated memory
    delete [] sales;
    sales = nullptr;

    return 0;
}