// This program demonstrates partially initialized structure variables
//Bryan Chavez

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct taxPayer
{
    string name;
    long socialSecNum;
    float taxRate;
    float income;
    float taxes;
};

int main(){
    // Fill in code to initialize a structure variable named citizen1 so that 
    // the first three members are initialized. Assume the name is Tim McGuiness
    // the social security number is 255871234, and the tax rate is .35
    taxPayer citizen1 = {"Tim McGuiness", 255871234, 0.35};
    // Fill in code to initialize a structure variable named citizen2 so that
    // the first three members are initialized. Assume the name is John Kane,
    // the social security number is 278990582 and the tax rate is 0.29
    taxPayer citizen2 = {"John Kane", 278990582, 0.29};

    cout << fixed << showpoint << setprecision(2);
    
    // calculate the taxes due for citizen1
    // Fill in code to prompt the user to enter this year's income for citizen1
    cout << "Enter income for " << citizen1.name << ": " << endl;
    // Fill in code to read in this income to the appropiate structure member
    cin >> citizen1.income;
    // Fill in code to determine this year's taxes for citizen1
    citizen1.taxes = citizen1.income * citizen1.taxRate;
    
    cout << "Name: " << citizen1.name << endl;
    cout << "Social Security number: " << citizen1.socialSecNum << endl;
    cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

    // calculate taxes due to citizen2
    // Fill in code to prompt the user to enter this year's income for citizen2
    cout << "Enter income for " << citizen2.name << ": " << endl;
    // Fill in code to read in this income to the appropiate structure member
    cin >> citizen2.income;
    // Fill in code to determine this year's taxes for citizen2
    citizen2.taxes = citizen2.income * citizen2.taxRate;

    cout << "Name: " << citizen2.name << endl;
    cout << "Social Security number: " << citizen2.socialSecNum << endl;
    cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;
    


    return 0;
}