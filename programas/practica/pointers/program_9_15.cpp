// this program demonstrate a function that returns a pointer

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int *getRandomNumbers(int);

int main(){
    int *numbers = nullptr;
    //get an array of 5 random numbers
    numbers = getRandomNumbers(5);

    //display the numbers
    for(int count = 0; count < 5; count++){
        cout << numbers[count] << endl;
    }
    //free the memory
    delete [] numbers;
    numbers = nullptr;

    return 0;
}

int *getRandomNumbers(int num){
    int *arr = nullptr;

    if(num <= 0)
        return nullptr;
    
    //dynamically allocate the array
    arr = new int[num];

    // random num generator is seeded by passing the return value of time (0) to srand.
    srand(time(0));

    //populate the array
    for (int count = 0; count < num; count++)
        arr[count] = rand();
    
    //return a pointer to the array
    return arr;
}