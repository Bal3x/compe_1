// Write a program that will read scores into an array. The size of the
// array should be input by the user (dynamic array). The program will find
// and print out the average of the scores. It will also call a function that will
// sort (using a bubble sort) the scores in ascending order. The values are
// then printed in this sorted order.

#include <iostream>
using namespace std;
void sort(float* score, int num_scores);

int main(){
    float *score, average, total = 0;
    int num_scores;

    cout << "Please input the number of scores " << endl;
    cin >> num_scores;

    score = new float(num_scores);

    // ask user for the scores
    for(int count = 0; count < num_scores; count++){

      cout << "Please enter a score " << count + 1 << ": " << endl;
      cin >> *(score + count); 
    }
    // Calculate the total score
    for (int count = 0; count < num_scores; count++)
        total += score[count];
    // calculate the score average
    average = total / num_scores;
    // print the average score
    cout << "Your average score is: " << average << endl;
    // bubble sort in ascending order
    sort(score, num_scores);
    // print the scores in ascending order
    cout << "\n\nHere are the scores in ascending order: ";
    for(int count = 0; count < num_scores; count++)
        cout << score[count] << " ";
    // dealocate memory assigned to the array
    delete score;
    
    return 0;
}
void sort(float* score, int num_scores){
    int temp, pass;
    int lim = num_scores - 1;
    
    for (pass = 0; pass < lim; pass++){
        for (int i = 0; i < lim; i++){
            if(score[i] > score[i+1]){
                temp = score[i];
                score[i] = score[i+1];
                score[i+1] = temp;
            }
        }
    }
    lim--;
}
