# include <iostream>
# include <cstdlib>
# include <ctime>

using namespace std;

int main() {
    srand(time(0)); //Seed the random number generator
    int minRange = rand() % 20 + 1;
    int maxRange = minRange + (rand() % 30 + 30);
    int secretNumber = rand() % (maxRange - minRange +1) + minRange;

    int guess;
    int attempts = 0;

    cout << "Guess Number Game Started Now! \n";
    cout << "-------------------------------\n";
    cout << "Guess Number between " << minRange << " to " << maxRange << "\n";

    do {
        cout << "Your answer: ";
        cin >> guess;
        attempts ++;

        if (guess > secretNumber) {
            cout << "Too high! Try again.\n\n";
        } 
        else if (guess < secretNumber){
            cout << "Too low! Try again.\n";
        } 
        else {
            cout << "Congratulation! You guessed the number in " << attempts << " attempts.\n";
        } 
    } while (guess != secretNumber);

    return 0;
}
