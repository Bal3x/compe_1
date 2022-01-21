#include <iostream>
using namespace std;


int main()
{
	const int as = 10; 
	int array[as];	
    
    for(int i = 0; i < as; i++) {
		array[i] = i * 2;
	}
	
	for(int i = 0; i < as; i++) {
		cout << "index: " << i << " has value: " << array[i] << endl; 
	}

	return 0;
}