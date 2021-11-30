/*
Characters for the ASCII codes
    Write a program that uses a loop to display the characters for the ASCII codes 
    0 through 127. Display 16 characters on each line.

Bryan Chavez

*/

#include <iostream>
using namespace std;

int main()
{
    char ascII;

    for (int i = 0; i <= 127; i++)
    {
        ascII = i;
        cout << ascII << " ";

        if (i % 16 == 0)
            cout << endl;
    }
    cout << endl
         << endl;

    return 0;
}
