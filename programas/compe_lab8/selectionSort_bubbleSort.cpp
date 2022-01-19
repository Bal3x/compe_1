

#include<iostream>

using namespace std;

int bubble_counter=0,selection_counter=0; // variables global

void bubble_sort(int [], int); // prototipos 
void show_array(int [], int); // prototipos
void selectionsort(int [], int ); // prototipos


int main(){
   int a[7]={4,1,7,2,9,0,3};

   show_array(a,7);
   bubble_sort(a,7);
//    selectionsort(a,7);

   show_array(a,7);

   cout << "Bubble counter = " << bubble_counter << endl;
   cout << "Selection Counter = " << selection_counter << endl;

   return 0;

}

void show_array(int array[],int size){

   for( int i = 0 ; i < size; i++){
     cout << array[i] << " ";
   }
   cout<<endl;
}

void bubble_sort(int array[], int size){
    bool swap;
    int temp;

   do{

     swap = false;

     for(int count = 0; count < (size - 1);count ++)

     {  bubble_counter++;

        if(array[count]>array[count +1]){

          temp =array[count];
          array[count]=array[count +1];
          array[count +1]= temp;

          swap = true;
        }

     }

   }while(swap);

}   

 void selectionsort(int array [], int size){

   int startscan, minindex, minivalue;
   
   for (startscan = 0; startscan < (size - 1); startscan++){ 

     minindex = startscan;
     minivalue = array[startscan];

     for(int index = startscan + 1; index < size; index++){
        selection_counter++;

        if (array[index] < minivalue){
         minivalue = array[index];
         minindex = index;
        }

     }

     array[minindex] = array[startscan];
     array[startscan] = minivalue;

   }

}