// Una compania tiene 3 divisiones y quiere registrar las ventas de cada division para cada uno de los 4 trimestres del ano
// Al final, va a presentar las ventas totalSaleses de la compania completa, para ese ano.
// usa arreglos bidimensionales

#include <iostream>
using namespace std;

int main(){

    const int nf = 3;       //number of divisions
    const int nc = 4;       //number of quarters
    double sales[nf][nc];
    double totalSales = 0;
    double totalDiv;

    cout << "This program will calculate the totalSales of sales of all the company's divisions." << endl;
    //user enters sales data
    cout << "Enter the following sales data: " << endl;
    for(int i = 0; i < nf; i++){
        for(int j = 0; j < nc; j++){
            cout << "Division " << i + 1 << ", Quarter " << j + 1 << ": ";
            cin >> sales[i][j];
        }
        cout << endl;
    }
    // calculate the totalSales of sales of the company
    for (int i = 0; i < nf; i++){
        for(int j = 0; j < nc; j++){
            totalSales += sales[i][j];
        }
    }
    cout << "The totalSales sales for the company are: $" << totalSales << endl;

    cout << "\n\nDivision\tQrt 1\tQrt 2\tQrt 3\tQrt4" << endl;
    cout << "\t\tSales\tSales\tSales\tSales" << endl;

    for(int i = 0; i < nf; i++){
        cout << '\t' << i + 1;
        for(int j = 0; j < nc; j++){
            cout << "\t$" << sales[i][j];
        }
        cout << '\n';
    }

    // modify program to have it print quarters and divisions invert the above
    cout << "\nQuarter\t\tDivision 1\tDivision 2\tDivision 3" << endl;
    for(int j =0; j < nc; j++){
        cout << '\t' << j + 1;
        for(int i = 0; i < nf; i++){
            cout << "\t$" << sales[i][j] << '\t';
        }
        cout << '\n';
    }

    // calculate the total for quarter in all divisions
    
    cout << "Total\t\t";
    for(int i = 0; i < nf; i++){
        int totalDiv = 0;
        for(int j = 0; j < nc; j++){
        totalDiv += sales[i][j];
        }
        cout << totalDiv << "\t\t";
    }
    cout << "\nFor Div";

    // calculate qrt total
    // cout << "All Div\nQrt Total";


    cout << "\nQuarter\tDivision\tDivision\tDivision\tAll Div" << endl;
    cout << "\t\t1\t\t2\t\t3\tQrt Total\n" ;
    for(int i = 0; i < nc; i++){
        cout << '\t' << i + 1;
        int qrtTotal = 0;
            for(int j = 0; j < nf; j++){
                cout << " $" << sales[i][j] << "\t\t";
                qrtTotal += sales[i][j];
            }
            cout << qrtTotal <<  '\n';
        }

    return 0;
}