// this program demonstrates that a pointer may be used as a parameter to accept the address of an array

#include <iostream>
#include <iomanip>

using namespace std;
void getSales(double *arr, int size);
double totalSales(double *arr, int size);

int main(){
    const int QRTS = 4;
    double sales[QRTS];
    
    //get the sales data for all the quarters
    getSales(sales, QRTS);
    // set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);
    // display total sales for the year
    cout << "The total sales for the year are $";
    cout << totalSales(sales, QRTS) << endl;

    return 0;
}
void getSales(double *arr, int size){
    for(int count = 0; count < size; count++){
        cout << "Enter the sales figure for quarter " << count + 1 << ": ";
        cin >> arr[count];
    }
}
double totalSales(double *arr, int size){
    double total = 0.0;
    for (int count = 0; count < size; count++){
        total += *arr++;
    }
    return total;
}