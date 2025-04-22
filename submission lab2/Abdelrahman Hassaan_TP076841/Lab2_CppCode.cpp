
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Function to convert the month string (for display)
void convertLetterString(string &month) {
    for (char &ch : month) {
        ch = toupper(ch);
    }
}

// Function to find the number of days in the month (dummy implementation for simplicity)
int findDaysInMonth(string month) {
    if (month == "FEBRUARY") return 28;  // Simple implementation, doesn't handle leap year
    if (month == "APRIL" || month == "JUNE" || month == "SEPTEMBER" || month == "NOVEMBER") return 30;
    return 31;
}

// Function to check time input validation
bool isValidTime(string time) {
    if (time.length() != 8) return false;
    if (time[2] != ':' || time[5] != ':') return false;
    return true;
}

// Function to calculate the elapsed time in seconds
int calculateElapsedTime(string time) {
    int hours, minutes, seconds;
    char colon;
    stringstream ss(time);
    ss >> hours >> colon >> minutes >> colon >> seconds;
    return (hours * 3600) + (minutes * 60) + seconds;
}

// Function to report weather stats
void weatherReport(int &hot, int &rainy, int &cloudy) {
    cout << "Enter weather for the month (hot, rainy, cloudy): ";
    string weather;
    for (int i = 1; i <= 30; i++) {
        cin >> weather;
        if (weather == "hot") hot++;
        else if (weather == "rainy") rainy++;
        else if (weather == "cloudy") cloudy++;
    }
}

// Function to display the results
void displayReport(int hot, int rainy, int cloudy) {
    cout << "Weather Report:" << endl;
    cout << "Hot days: " << hot << endl;
    cout << "Rainy days: " << rainy << endl;
    cout << "Cloudy days: " << cloudy << endl;
}

int main() {
    // Part 1: Weather report section
    string month;
    cout << "Enter the month: ";
    cin >> month;

    convertLetterString(month);
    int daysInMonth = findDaysInMonth(month);
    cout << "Days in " << month << ": " << daysInMonth << endl;

    int hot = 0, rainy = 0, cloudy = 0;
    weatherReport(hot, rainy, cloudy);
    displayReport(hot, rainy, cloudy);

    // Part 2: Time input and calculation section
    string time;
    cout << "Enter time in HH:MM:SS format: ";
    cin >> time;

    if (!isValidTime(time)) {
        cout << "Invalid time format." << endl;
        return 1;
    }

    int totalSeconds = calculateElapsedTime(time);
    cout << "Elapsed time in seconds: " << totalSeconds << endl;

    return 0;
}
