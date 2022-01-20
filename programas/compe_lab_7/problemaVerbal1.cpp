// Use a two dimensional array to solve the following problem A company has four salespeople (1 to 4) who sell five different products (1 to 5).
// Once a day, each salesperson passes in a slip for each different type of product sold. Each slip contains the following:
// a. The sales person number
// b. The product number
// c. The total dollar value of that product sold that day

// Thus, each sales person passes in between 0 and 5 sales slips per day. Assume that the information from all of the slips for last month is available. 
// Write a program that will read all this information for last month's sales and summarize the total sales by salesperson by product. 
// All total should be stored in the two dimensional array sales. 
// After processing all the information for last month, print the results in tabular format with each of the columns representing a particular salesperson
// and each of the rows representing a particular product. 
// Cross total each row to get the total sales of each product last month;
// Cross total each column to get the total sales by salesperson for last month;

// Your tabular printout should include these cross totals to the right of the totales rows and to the bottom of the totaled columns.


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // variables
    
    const int rows = 6; //product
    const int columns = 5;  // salesperson
    int sales[rows][columns] = {{1, 2, 3, 4}, 
                                {1, 2, 3, 4}, 
                                {1, 2, 3, 4}, 
                                {1, 2, 3, 4}, 
                                {1, 2, 3, 4}};
    // double productSales;
    int i, j, tabs;
// Codigo que evalua y suma los rows
    cout << "Sales" << endl; 
    for(i = 0; i < rows; i++){
        double sum = 0.0;
        for(j = 0; j < columns -1; j++){
    // Si se le pide al usuario los valores:
        // cout << "Input the value for element (" << i << "," << j << "): ";
        // cin >> productSales;
			// sales[i][j] = productSales;
			// sum += productSales;	
            sum += sales[i][j];
        }
        sales[i][columns - 1] = sum;
    }
// Codigo que evalue las ventas por personas
    for(i = 0; i < columns; i++){
        double sum2 = 0.0;
        for(j = 0; j < rows - 1; j++){
            sum2 += sales[j][i];	
        }
        sales[rows - 1][i] = sum2;
    }
// imprimir tabla
    for(i = 0; i < rows - 2; i++){
        cout << setw(5) << "Sales Rep." << i + 1 << '\t';
    }
    cout << setw(25) << "Total Sales of product";
    cout << endl;
    
    for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			cout << '\t' << sales[i][j] << '\t';
		}
		cout << endl;
	}
    return 0;

}

