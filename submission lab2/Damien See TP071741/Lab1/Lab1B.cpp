#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

bool isValidTimeFormat(int hour, int minute, int second) {
    if ((0 <= hour && hour < 24) && (0 <= minute && minute < 60) && (0 <= second && second < 60)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string userInput;
    int hour, minute, second;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (HH:MM:SS): ";
        cin >> userInput;

        stringstream ssInput(userInput);
        if (ssInput >> hour >> colon1 >> minute >> colon2 >> second && colon1 == ':' && colon2 == ':') {
            if (isValidTimeFormat(hour, minute, second)) {
                cout << "Passed!" << "\n";
                break;
            } else {
                cout << "Invalid input!" << "\n";
            }
        } else {
            cout << "Invalid input!" << "\n";
        }
    }

    int elapsedTime = (hour * 3600) + (minute * 60) + second;
    cout << "Elapsed time: " << elapsedTime << " seconds";
    
    return 0;
}