#include <iostream>
#include <sstream>  // For stringstream (input validation)
using namespace std;

bool isValidTime(int hour, int minute, int second) {
    return (hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59) && (second >= 0 && second <= 59);
}

int main() {
    string input;
    int hour, minute, second;
    char colon1, colon2;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        getline(cin, input); 

        // Use stringstream to extract values
        stringstream ss(input);
        if (ss >> hour >> colon1 >> minute >> colon2 >> second && colon1 == ':' && colon2 == ':') {
            if (isValidTime(hour, minute, second)) {
                break; 
            }
        }

        cout << "Invalid input!\n";
    }

    int totalSeconds = (hour * 3600) + (minute * 60) + second;
    cout << "Elapsed time is: " << totalSeconds << " seconds.\n";

    return 0;
}
