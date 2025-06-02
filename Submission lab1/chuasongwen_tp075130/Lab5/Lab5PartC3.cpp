#include <iostream>
using namespace std;

void Input(int total, string subjects[], int scores[]);
double calcAverage(int scores[], int size);
int findLowest(int scores[],int size);

int main(){
    int total;
    cout << "Enter the total number of subjects: ";
    cin >> total;
    
    string* subjects = new string[total];
    int* scores = new int[total];
  
    Input(total, subjects, scores);
    double average = calcAverage(scores, total);
    double lowest = findLowest(scores,total);
    cout << "The average score is: " << average << endl;
    cout << "The lowest score is: " << lowest << endl;

    delete[] subjects;
    delete[] scores;
    
    return 0;
}

void Input(int total, string subjects[], int scores[]){

    int i = 0;
    while (i < total){
        cout << i+1 << ". Enter the subject: ";
        cin >> subjects[i];
        cout << i+1 << ". Enter the score: ";
        cin >> scores[i];
        while (scores[i]<0){
            cout << "Invalid score. Please enter a valid score: ";
            cin >> scores[i];
        }
        cout << endl << endl;
        i++;      
    }    

}

double calcAverage(int scores[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += scores[i];
    }
    return static_cast<double>(sum) / size;
}

int findLowest(int scores[],int size){
    int lowest = scores[0];
    for(int i = 1; i < size; i++){
        if(scores[i] < lowest){
            lowest = scores[i];
        }
    }

    return lowest;
}