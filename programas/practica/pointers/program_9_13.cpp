//this program demonstrate a pointer to const parameter

#include <iostream>
using namespace std;
void displayValues(const int *, int);

int main(){
    const int as = 6;
    const int array1[as]{1, 2, 3, 4, 5, 6};
    int array2[as]{2, 4, 6, 8, 10, 12};

    // display the contents of the const array
    displayValues(array1, as);
    cout << endl;
    displayValues(array2, as);

    return 0;
}
void displayValues(const int *arr, int size){
    for(int count = 0; count < size; count++){
        cout << *(arr + count) << " ";
    }
}