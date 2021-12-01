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
    char ascII;     // definir la variable char

    for (int i = 0; i <= 127; i++)      // usar un for loop que se detenga en 127
    {
        ascII = i;
        cout << ascII;

        if (i % 16 == 0)        //usando modulo para imprimir 16 char por linea
            cout << endl;
    }
    

    return 0;
}
