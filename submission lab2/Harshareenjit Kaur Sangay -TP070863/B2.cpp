#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int min = 1;
    int max = 100;

    int target = min + rand() % (max - min + 1);
    int guess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "Guess Number between " << min << " to " << max << endl;
    
    while (true) {
        cout << "Your answer: ";
        cin >> guess;
        
        if (guess == target) {
            cout << "Congratulation! You won!" << endl;
            break;
        } else if (guess < target) {
            min = guess + 1;
            cout << "Guess Number between " << min << " to " << max << endl;
        } else {
            max = guess - 1;
            cout << "Guess Number between " << min << " to " << max << endl;
        }
    }
    
    return 0;
}
