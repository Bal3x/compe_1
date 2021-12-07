/* This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be 'party' or 'country':
// "Now is the time for all good men to come to the aid of their _______"
// Entering a 1 will use the word 'party', entering a 2 will use the word 'country'.
// Entering any other number should print an error message. You can assume
// that the user will enter only numbers, no characters.

// OPTIONAL: Instead of printing the error message, a while-loop can be
// used to ask the user again until a correct choice (1 or 2) is entered.

// EXAMPLE:
// Given the phrase:
// Now is the time for all good men to come to the aid of their ___
// Input a 1 if you want the sentence to be finished with party.
// Input a 2 to finish with the word country.
// Please input your choice now: 1
// Now is the time for all good men to come to the aid of their party

// Bryan Chavez
*/
#include <iostream>
#include <string>
using namespace std;


void writeProverb (int number);  // Fill in the prototype of the function writeProverb.


int main ()
{
	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party." << endl;
	cout << "Input a 2 to finish with the word country." << endl;
	cout << "Please input your choice now: ";
	cin  >> wordCode;
   while (wordCode != 1 && wordCode != 2 ){
      cout << "Please try again, enter 1 or 2." << endl;
      cin >> wordCode;
   }
	cout << endl;
   
   writeProverb(wordCode);

	return 0;
}
//  ******************************************************************************
//                            writeProverb
//
//   task:      This function prints a proverb. The function takes a number
//              from the call. If that number is a 1 it prints "Now is the time
//              for all good men to come men to come to the aid of their party."
//              If the number is a 2, it prints "Now is the time for all good men
//              to come to the aid of their country". If any other number
//				is entered, it prints an error message.
//   data in:   integer to identify the ending word of proverb (integer)
//   data out:  none
//
//   *****************************************************************************

void writeProverb (int number){
   
   if (number == 1){
      cout << "Now is the time for all good men to come to the aid of their party." << endl;
   }
   else if (number == 2){
      cout << "Now is the time for all good men to come to the aid of their country" << endl;
   }

}