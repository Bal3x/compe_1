// This program uses a selection sort to arrange an array of integers in
// ascending order
 
  //Bryan Chavez
 
#include <iostream>
using namespace std;
 
// function prototypes
 
void selectionSortArray(int [], int);
void displayArray(int[], int);
const int SIZE = 5;


int main(){

  int values[SIZE] = {19, -4, 91, 0, 17};
 
  cout << "The values before the selection sort is performed are:" << endl;
  displayArray(values,SIZE);
 
  selectionSortArray(values,SIZE);
  cout << "The values after the selection sort is performed are:" << endl;
  displayArray(values,SIZE);
  
  return 0;
}
  //******************************************************************
// displayArray
//
// task: to print the array
// data in: the array to be printed, the array size
// data out: none
//
//******************************************************************
 
void displayArray(int array[], int elems){  
    for (int count = 0; count < elems; count++){
        cout << array[count] << " ";
    }
    cout << endl;
}
 
//******************************************************************
// selectionSortArray
//
// task: to sort values of an array in ascending order
// data in: the array, the array size
// data out: the sorted array
//
//******************************************************************
 
void selectionSortArray(int array[], int elems){
    int seek; 
    int minCount;
    int minValue = array[seek]; 

    for (seek = 0; seek < (elems - 1); seek++){
      for (int index = seek + 1; index < elems; index ++){
        if(array[index] < minValue){
          minValue = array[index];
          minCount = index;
        }
      }
      array[minCount] = array[seek];
      array[seek] = minValue; 
    }

}
