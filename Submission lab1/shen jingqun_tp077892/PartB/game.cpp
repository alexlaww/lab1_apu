#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // 设置随机种子
    int lower = 1, upper = 100; // 你可以修改范围
    int secretNumber = lower + rand() % (upper - lower + 1);
    int guess;

    cout << "Guess Number Game Started Now!" << endl;
    cout << "Guess Number between " << lower << " to " << upper << endl;

    while (true) {
        cout << "Your answer: ";
        cin >> guess;

        if (guess < lower || guess > upper) {
            cout << "Invalid input! Please enter a number between " << lower << " and " << upper << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You won!" << endl;
            break;
        }
    }

    return 0;
}
