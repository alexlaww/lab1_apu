#include<iostream>

using namespace std;

int main(){
    double score;

    cout << "Enter your score: ";
    cin >> score;
    
    if (score > 80 && score < 90){
        cout << "Score: " << score + 5;
    }else{
        cout << "Score: " << score;
    }
}