// This program reads records from a file. The file contains the
// following: student’s name, two test grades and final exam grade.
// It then prints this information to the screen.

// FILL IN DIRECTIVE FOR FILES
#include <fstream> 
#include <iostream>
#include <iomanip>
using namespace std;
 
 const int NAMESIZE = 15;
 const int MAXRECORDS = 50;
 struct Grades
 {
   char name[NAMESIZE + 1];
   int test1;
   int test2;
   int final;

 };
 
 typedef Grades gradeType[MAXRECORDS];
 // This makes gradeType a data type
 // that holds MAXRECORDS
 // Grade structures

// Fill in the code for the prototype of the function ReadIt
// where the first argument is an input file, the second is the array of records,
// and the third will hold the number of records currently in the array
void ReadIt(ifstream&, gradeType, int&);


int main(){

  ifstream indata;
  indata.open("graderoll.dat", ios::in);
  int numRecord = 0;        //number of records read in
  gradeType studentRecord;

  if(!indata){
    cout << "Error opening file.\n";
    cout << "It may not exist where indicated" << endl;
    return 1;
  }
  // fill in the code to call the function ReadIt
  ReadIt(indata, studentRecord, numRecord);

  // output the information
  for(int count = 0; count < numRecord; count++){
    cout << studentRecord[count].name << setw(10) << studentRecord[count].test1 
    << setw(10) << studentRecord[count].test2;
    cout << setw(10) << studentRecord[count].final << endl;
  }
  indata.close();

  return 0;
}
//**************************************************************************
// ReadIt
// Task :     This procedure reads records into an array of records from an
//            input file and keeps track of the total number of records
// data in:   data file containing information to be placed in the array
// data out:  an array of records and the number of records
//*************************************************************************

void ReadIt(ifstream& indata, gradeType gradeRec, int& numRead){

  int total = 0;
  indata.get(gradeRec[total].name, NAMESIZE);
  while(indata){
    indata >> gradeRec[total].test1;
    indata >> gradeRec[total].test2;
    indata >> gradeRec[total].final;

    total++;
    numRead = total;
    indata.ignore(MAXRECORDS, '\n');
    indata.get(gradeRec[total].name, NAMESIZE);
  }
}