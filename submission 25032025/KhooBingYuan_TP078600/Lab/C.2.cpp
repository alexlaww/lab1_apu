#include <iostream>
#include <string>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(string month, int year) {
    if (month == "January" || month == "March" || month == "May" || month == "July" ||
        month == "August" || month == "October" || month == "December") {
        return 31;
    } else if (month == "April" || month == "June" || month == "September" || month == "November") {
        return 30;
    } else if (month == "February") {
        return isLeapYear(year) ? 29 : 28;
    } else {
        return -1; // Invalid month
    }
}

int main() {
    string month;
    int year;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;

    // Get month and year input
    cout << "Enter Your Month (e.g. August 2019): ";
    cin >> month >> year;

    // Get the number of days in the given month
    int daysInMonth = getDaysInMonth(month, year);

    if (daysInMonth == -1) {
        cout << "Invalid month entered. Please enter a valid month name.\n";
        return 1;
    }

    // Loop through each day of the month
    for (int day = 1; day <= daysInMonth; day++) {
        cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather;

        // Process input
        if (weather == 'H' || weather == 'h') {
            hotDays++;
        } else if (weather == 'R' || weather == 'r') {
            rainyDays++;
        } else if (weather == 'C' || weather == 'c') {
            cloudyDays++;
        } else if (weather == 'E' || weather == 'e') {
            break; // Allows early termination if 'E' is entered
        } else {
            cout << "Invalid input! Please enter H, R, C, or E.\n";
            day--; // Repeat the input for the same day
        }
    }

    // Display results
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    cout << "Press any key to continue . . .\n";

    return 0;
}
