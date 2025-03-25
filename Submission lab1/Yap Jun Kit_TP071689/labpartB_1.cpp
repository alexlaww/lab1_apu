//Part B Question 1
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
// Function to validate and convert time to seconds
int convertToSeconds(const string& time) {
    int hh, mm, ss;
    char colon1, colon2;
    
    stringstream ssTime(time);
    if (!(ssTime >> hh >> colon1 >> mm >> colon2 >> ss) || colon1 != ':' || colon2 != ':') {
        cout << "Invalid input!\n";
        return -1;
    }

    if (hh < 0 || hh >= 24 || mm < 0 || mm >= 60 || ss < 0 || ss >= 60) {
        cout << "Invalid input!\n";
        return -1;
    }

    return (hh * 3600) + (mm * 60) + ss;
}

int main() {
    string timeInput;
    int seconds;

    while (true) {
        cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
        cin >> timeInput;

        seconds = convertToSeconds(timeInput);
        if (seconds != -1) break; // Valid input, exit loop
    }

    cout << "Elapsed time in seconds = " << seconds << " seconds" << endl;
    return 0;
}
