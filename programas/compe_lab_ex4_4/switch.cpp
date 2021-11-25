// This program illustrates the use of the switch statement. 
// Bryan Chavez
#include <iostream> 
using namespace std; 
 
int main(){ 
char grade; 

cout << "What grade did you earn in Programming I ?" << endl; 
cin >> grade; 

grade = toupper(grade);

    switch( grade ){ 
                                      
        case 'A': cout << "an A - excellent work !" << endl; 
        break;
    
        case 'B': cout << "you got a B - good job" << endl; 
        break;
        
        case 'C': cout << "earning a C is satisfactory" << endl; 
        break; 

        case 'D': cout << "You pass - although you can do better than that" << endl;
        break;  

        case 'F': cout << "you failed - better luck next time" << endl; 
        break;

        default:  cout << "You did not enter an A, B, C, D, or F" << endl; 
    } 
 
return 0; 
} 