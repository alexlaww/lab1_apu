#include <iostream>
using namespace std;

int main(){
    double score;
    cout << "Enter the score: ";
    cin >> score;

    if(score >=80 && score <= 90){
        score += 5;
    }

    cout << "Score = " << score <<endl;

    return 0;
}