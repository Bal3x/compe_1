// This program performs a linear search on a character array

#include <iostream> 
using namespace std;

const int size = 8;
int searchList(char list[], int numElements, char value);

int main(){
    char word[size] = "Harpoon";
    int found;
    char ch; 

    cout << "Enter a letter to search for: " << endl;
    cin >> ch;

    found = searchList(word, size, ch);
    if(found == -1){
        cout << "The letter " << ch << " was not found in the list" << endl;
    }
    else
        cout << "The letter " << ch << " is in the " << found + 1 << " position of the list" << endl;

    return 0;
}

int searchList(char list[], int numElements, char value){
    for(int count = 0; count < numElements; count++){
        if (list[count] == value){
            return count;
        }

    }
    return -1;
}