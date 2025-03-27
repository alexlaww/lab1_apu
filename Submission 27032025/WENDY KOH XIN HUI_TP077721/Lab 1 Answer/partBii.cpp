#include <iostream>
#include <ctime>
#include <cstdlib> //for generate number==rand() and srand()

using namespace std;

int mian(){
    srand(time(0));//srand() use to generate random number

    int LB=1;
    int UB=100;
    int secretNo=LB+(rand()%UB);// select the random number from 1 to 100
    int guess;


    cout << "=====================================\n";
    cout << "  Guess Number Game Started Now!  \n";
    cout << "=====================================\n";

    while (true) {
        cout << "Guess Number between " << LB << " to " << UB << endl;
        cout << "Your answer: ";
        cin >> guess;

        if (guess < LB || guess > UB) {
            cout << "Invalid guess! Please enter a number within the range.\n";
            continue;
        }

        if (guess == secretNo) {
            cout << "Congratulations! You won!" << endl;
            break;
        } else if (guess < secretNo) {
            LB = guess + 1;  // Update range hint
        } else {
            UB = guess - 1;
        }
    }

    return 0;

}
