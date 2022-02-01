// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.
 
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
// Fill in the code to define payfile as an input file
ifstream payfile;
ofstream payout;
float gross;
float net;
float hours;
float payRate;
float stateTax;
float fedTax;

cout << fixed << setprecision(2) << showpoint;
// Fill in the code to open payfile and attach it to the physical file
// named data.txt
payfile.open("data.txt");
payout.open("payroll.dat");
// Fill in code to write a conditional statement to check if payfile
// does not exist.
    if(!payfile){
        cout << "Error opening file. \n";
        cout << "It may not exist where indicated" << endl;
        return 1;
    }
cout << "Payrate Hours Gross Pay Net Pay" << endl << endl;
// Fill in code to prime the read for the payfile file.
payfile >> hours;
// Fill in code to write a loop condition to run while payfile has more
// data to process.
while(payfile)
{
    payfile >> payRate >> stateTax >> fedTax;
    gross = payRate * hours;
    net = gross - (gross * stateTax) - (gross * fedTax);
    cout << payRate << setw(10) << hours << setw(10) << gross << setw(10) << net << endl;
    payout << setw(10) << hours << setw(10) << gross << setw(10) << net << endl;
    payfile >> hours;
// Fill in the code to finish this with the appropriate
// variable to be input
}
payfile.close();
payout.close();
return 0;
 
}