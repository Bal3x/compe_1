// This program reads floating point data from a data file and places those
// values into the private data member called values (a floating point array)
// of the FloatList class. Those values are then printed to the screen.
// The input is done by a member function called GetList. The output
// is done by a member function called PrintList. The amount of data read in
// is stored in the private data member called length. The member function
// GetList is called first so that length can be initialized to zero.

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
 
const int MAX_LENGTH = 50;
class FloatList{
    public: 
        void getList(ifstream&);
        void printList() const;

        FloatList();
        ~FloatList();
    private:
        int length;                 //holds the number of elements in the array
        float values[MAX_LENGTH];   // the array of values

};
int main(){
    ifstream tempData;
// Fill in the code to define an object called list of the class Floatlist

