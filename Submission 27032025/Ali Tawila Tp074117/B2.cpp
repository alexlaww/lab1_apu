#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int low = 1, high = 100;
    int secret = rand() % (high - low + 1) + low;
    int guess;

    cout << "guess number game started now!\n";
    cout << "---------------------------------\n";

    while (true) {
        cout << "guess number between " << low << " to " << high << "\n";
        cout << "your answer: ";
        cin >> guess;

        if (guess == secret) {
            cout << "congratss you won!\n";
            break;
        } else if (guess < secret) {
            low = guess + 1;
        } else {
            high = guess - 1;
        }
    }

    return 0;
}