#include<iostream>
#include <sstream>
#include <string>
using namespace std;

bool validateTimeFormat(const string& timeStr, int& hours, int& minutes, int& seconds) {
    char colon1, colon2;
    istringstream iss(timeStr);

    if (!(iss >> hours >> colon1 >> minutes >> colon2 >> seconds)) return false;
    if (colon1 != ':' || colon2 != ':') return false;

    // Check valid time ranges
    if (hours < 0 || hours > 23) return false;
    if (minutes < 0 || minutes > 59) return false;
    if (seconds < 0 || seconds > 59) return false;

    return true;
}

int computeElapsedSeconds(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
    string timeInput;
    int hour, minute, second;

    cout << "Please enter your elapsed time (in HH:MM:SS format) = ";
    cin >> timeInput;

    // Validate and parse time input
    if (validateTimeFormat(timeInput, hour, minute, second)) {
        int elapsedSeconds = computeElapsedSeconds(hour, minute, second);
        cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds" << endl;
    } else {
        cout << "Invalid time format! Please enter in HH:MM:SS (00-23:00-59:00-59) format." << endl;
    }
}