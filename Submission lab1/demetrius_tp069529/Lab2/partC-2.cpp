#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <ostream>

using namespace std;

int convertLetterString(string month) {
    if (month == "January") {
        return 1;
    } else if (month == "February") {
        return 2;
    } else if (month == "March") {
        return 3;
    } else if (month == "April") {
        return 4;
    } else if (month == "May") {
        return 5;
    } else if (month == "June") {
        return 6;
    } else if (month == "July") {
        return 7;
    } else if (month == "August") {
        return 8;
    } else if (month == "September") {
        return 9;
    } else if (month == "October") {
        return 10;
    } else if (month == "November") {
        return 11;
    } else if (month == "December") {
        return 12;
    } else {
        return 0;
    }
}

int findDaysInMonth(int month, int year) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        return 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else if (month == 2) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return 29;
        } else {
            return 28;
        }
    } else {
        return 0;
    }
}

void weatherReport(int hotDays, int rainyDays, int cloudyDays) {
    cout << "Number of hot days: " << hotDays << endl;
    cout << "Number of rainy days: " << rainyDays << endl;
    cout << "Number of cloudy days: " << cloudyDays << endl;
}

void displayReport() {}

int main() {
    string userInput, inputMonth;
    int days;
    int month;
    int year;
    char userInput2;

    int hotDays = 0;
    int rainyDays = 0;
    int cloudyDays = 0;

    while (true) {
        cout << "Enter your month and year (e.g., August 2019): ";
        getline(cin, userInput); // Use getline() to read the full input

        // Use a stringstream to split the input into month and year
        stringstream ss(userInput);
        ss >> inputMonth >> year;

        // Validate the input
        if (convertLetterString(inputMonth) == 0) {
            cout << "Invalid month provided!" << endl;
        } else if (year <= 0) {
            cout << "Invalid year provided!" << endl;
        } else {
            month = convertLetterString(inputMonth);
            days = findDaysInMonth(month, year);
            break;
        }
    }

    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, 'E' to end: ";
        cin.clear();
        cin >> userInput2;

        if (userInput2 == 'H') {
            hotDays++;
        }
        else if (userInput2 == 'R') {
            rainyDays++;
        }
        else if (userInput2 == 'C') {
            cloudyDays++;
        }
        else {
            break;
        }
    }

    weatherReport(hotDays, rainyDays, cloudyDays);

    return 0;
}