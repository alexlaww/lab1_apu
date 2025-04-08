#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 

    int low = 1;
    int high = 100;
    int secret = rand() % (high - low + 1) + low;
    int guess;

    cout << "Guess Number Game Started Now!" << endl;

    while (true) {
        cout << "Guess Number between " << low << " to " << high << endl;
        cout << "Your answer: ";
        cin >> guess;

        if (guess < secret) {
            cout << endl;
            low = guess + 1;
        } else if (guess > secret) {
            cout << endl;
            high = guess - 1;
        } else {
            cout << "\nCongratulations! You won!" << endl;
            break;
        }
    }

    return 0;
}
