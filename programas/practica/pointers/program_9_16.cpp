// this program uses a function to duplicate and int array of any size
// 1. Accept an array and its size as arguments.
// 2. Dynamically allocate a new array that is the same size as the argument array.
// 3. Copy the elements of the argument array to the new array.
// 4. Returns a pointer to the new array.

#include <iostream>
using namespace std;
int getArraySize();
int *getNumbers(int);
int *copyArray(const int *, int);
void displayArray(const int[], int);

int main(){
    int *numbers = nullptr;
    int *newArr = nullptr;

// ask user for array size
    int size = getArraySize();
// ask user for the elements in the array
    numbers = getNumbers(size);
// copy elements of the argument array to the new array
    newArr = copyArray(numbers, size);
// print both arrays
    cout << "The original array is: " << endl;
    displayArray(numbers, size);
    cout << "The copied array is: " << endl;
    displayArray(newArr, size);
// deallocate memory and set pointers to 0
    delete [] numbers;
    delete [] newArr;
    numbers = nullptr;
    newArr = nullptr;

    return 0;
}

int getArraySize(){
    int as;
    cout << "Enter the size of the array: " << endl;
    cin >> as;
    while(as <= 0){
        cout << "Invalid entry please try again with a positive number." << endl;
        cin >> as;
    }
    return as;
}

int *getNumbers(int size){
    int *arr = nullptr;
// dynamically allocate the array
    arr = new int[size];
    for(int count = 0; count < size; count++){
        cout << "Enter the element number " << count + 1 << endl;
        cin >> arr[count];
    }
    // return a pointer to the array
    return arr;
}

int *copyArray(const int *arr, int size){
    int *newArr = nullptr;

// dynamically allocate the array
    newArr = new int[size];
// copy the array
    for(int count = 0; count < size; count++){
        newArr[count] = arr[count];
    }
// return a pointer
    return newArr;
}

void displayArray(const int arr[], int as){
    for(int count = 0; count < as; count++){
        cout << arr[count] << " ";
    }
    cout << endl;

}