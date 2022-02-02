// this program shows the donations made to the United Cuase by
// the employees of CK Graphics, Inc. It displays the donations in order
// from lowest to highest and in the original order they were received.

#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArrPtr(int *[], int);
void showArray(const int [], int);


int main(){
    const int numDonations = 15;
    int donations[numDonations]{5, 100, 5, 25, 10,
                                5, 25, 5, 5, 100,
                                10, 15, 10, 5, 10};
    int *arrPtr[numDonations]{nullptr, nullptr, nullptr, nullptr, nullptr,
                                nullptr, nullptr, nullptr, nullptr, nullptr,
                                nullptr, nullptr, nullptr, nullptr, nullptr};
// Point each element arrPtr to and element in the donations array
    for(int count = 0; count < numDonations; count++){
        arrPtr[count] = &donations[count];
    }
// Sort elements of the array of pointers
    arrSelectSort(arrPtr, numDonations);
// Display donations in sorted order
    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, numDonations);
// Display array in the original order
    cout << "\nThe donations in the original order are: \n";
    showArray(donations, numDonations);

    return 0; 
}
void arrSelectSort(int *arr[], int size){
    int scan, minCount;
    int *minValue;

    for(scan = 0; scan < (size - 1); scan++){
        minCount = scan;
        minValue = arr[scan];
        for(int index = scan + 1; index < size; index++){
            if(*(arr[index]) < *(minValue)){
                minValue = arr[index];
                minCount = index;
            }
        }
        arr[minCount] = arr[scan];
        arr[scan] = minValue;
    }

}
void showArrPtr(int *arr[], int size){
    for(int count = 0; count < size; count++){
        cout << *(arr[count]) << " ";
    }
}
void showArray(const int arr[], int size){
    for(int count = 0; count < size; count++){
        cout << arr[count] << " ";
    }
    cout << endl;
}