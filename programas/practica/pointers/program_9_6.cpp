// this program processes an array using pointer notation.
#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers[SIZE];
    int count;
    //get value to store in the array
    cout << "Enter " << SIZE << " numbers: ";
    for (count = 0; count < SIZE; count++)
        cin >> *(numbers + count);
    
    //display the values in the array
    cout << "Here are the numbers that you entered: \n";
    for (count = 0; count < SIZE; count++){
        cout << *(numbers + count) << " ";
    }
    cout << endl;

    return 0;
}