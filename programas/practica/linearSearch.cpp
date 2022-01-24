// linear search examples
#include <iostream>
using namespace std;
int linearSearch1(const int[], const int, int);
int linearSearch2(const int[], const int, int);
int linearSearch3(const int[], const int, int);
int linearSearch4(const int[], const int, int);

int main(){
   const int as = 10;
   int num[as] = {1, 2, 3, 4, 5, 6, 5, 8, 9};
   int key, pos, nv;

   // ask user for the integer value to search(key)
   cout << "Please enter the number you want to search in the array ";
   cin >> key;
   
   pos = linearSearch1(num, as, key);
   pos = linearSearch2(num, as, key);
   nv = linearSearch4(num, as, key);
   if(pos == -1){
       cout << "The value " << key << " was not found";
   }
   else{
       cout << "The value " << key << " is in the " << pos << endl;
   }
   cout << "The number of times the value " << key << " is in the array is: " << nv << endl;
   
   return 0;
}

int linearSearch1(const int num[], const int n, int key){
    for(int i = 0; i < n; i++){
        if (num[i] == key){
            return i;
        }
    }
    return -1;
}
int linearSearch2(const int num[], const int n, int key){
    for(int i = n-1; i >= 0; i--){
        if(num[i] == key){
            return i; 
        }
    } 
}
int linearSearch3(const int num[], const int n, int key){
    int pos = -1;
    for (int i = 0; i < n; i++){
        if (num[i] == key){
            pos = i;
        }
    }
}
int linearSearch4(const int num[], const int n, int key){
    int i, nv = 0;
    for (int i = 0; i < n; i++)
        if (num[i] == key)
            nv++;
    return nv;
}