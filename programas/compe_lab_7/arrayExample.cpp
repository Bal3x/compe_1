#include <iostream>
using namespace std;


int main()
{
    int array[10];	
    
    for(int i = 0; i < 10; i++) {
		array[i] = i * 2;
	}
	
	for(int i = 0; i < 10; i++) {
		cout << "index: " << i << " has value: " << array[i] << endl;
	}

	return 0;
}