#include <iostream>
using namespace std;


int main()
{
	const int as = 10; 
	int array[as];	
    
    for(int i = 0; i < as; i++) {
		array[i] = i * 2;

	}
	
<<<<<<< HEAD
	for(int i = 0; i < 10; i++) {
	cout << "index: " << i << " has value: " << array[i] << endl;
	} 
	
	return 0; 
=======
	for(int i = 0; i < as; i++) {
		cout << "index: " << i << " has value: " << array[i] << endl; 
	}

	return 0;
>>>>>>> d2f1b0595856d41edc513e45a0c897f23d74fb51
}