// this program uses a pointer to display the contents of an integer array

#include <iostream>
using namespace std;
int main(){
    int set[8]{5, 10, 15, 20, 25, 30, 35, 40};
    int *nums = set;
    // display the numbers in the array
    cout << "The numbers in the set are:\n";
    cout << *nums << " ";
    while(nums < &set[7]){
        nums++;
        cout << *nums << " ";
    }

    return 0;
}