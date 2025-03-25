#include <iostream>
using namespace std;

int main(){



    // // Declare the variables
    // int x = 0 ;
    // int y ;
    
    // // asking the user to enter a number
    // cout << "Enter a number for Y value: " ;
    // cin >> y ;

    // if (y > 0){
    //     x = 1 ;
    //     cout << "The value of x is: " << x << endl ;
    // }
    // else{
    //     x = 0 ;
    //     cout << "The value of x is: " << x << endl ;
    // }


    double Score ;

    // asking the user to enter the score

    cout << "Enter the score: " ;
    cin >> Score ;

    if (Score >= 80 && Score <= 90){
        Score = Score + 5 ;
        cout << "The new score is: " << Score << endl ;
    }

    else {
        cout << "The score is: " << Score << endl ;
    } 

    
    return 0;
}