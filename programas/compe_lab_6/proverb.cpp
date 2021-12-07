// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb() that is called by the main function

// EXAMPLE:
// When executed, it should display the sentence:
// "Now is the time for all good men to come to the aid of their party"


//Bryan Chavez

#include <iostream>
using namespace std;


void writeProverb();            //This is the prototype for the writeProverb function

int main()
{
	writeProverb();             // Fill in the code to  call the  writeProverb() function

	return 0;
}

//  *********************************************************************
//                           writeProverb

void writeProverb(){
    cout << "Now is the time for all good men to come to the aid of their party" << endl;
    
}