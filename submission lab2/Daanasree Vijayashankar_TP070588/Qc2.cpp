#include <iostream>
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
        return 0; // Invalid month
    }
}

int main() {
    string month;
    int year;
    
    cout << "Enter month and year (e.g., February 2019): ";
    cin >> month >> year;

    int daysInMonth = getDaysInMonth(month, year);

    if (daysInMonth == 0) {
        cout << "Invalid month entered!" << endl;
        return 1;
    }

    int hotDays = 0, coldDays = 0, rainyDays = 0;

    for (int day = 1; day <= daysInMonth; day++) {
        char weather;
        cout << "Enter weather for " << month << " " << day << " (H for Hot, C for Cold, R for Rain): ";
        cin >> weather;

        if (weather == 'H' || weather == 'h') {
            hotDays++;
        } else if (weather == 'C' || weather == 'c') {
            coldDays++;
        } else if (weather == 'R' || weather == 'r') {
            rainyDays++;
        } else {
            cout << "Invalid input! Please enter H, C, or R." << endl;
            day--; // Repeat input for the same day
        }
    }

    // Display summary
    cout << "\nWeather Summary for " << month << " " << year << ":\n";
    cout << "Hot days: " << hotDays << endl;
    cout << "Cold days: " << coldDays << endl;
    cout << "Rainy days: " << rainyDays << endl;

    return 0;
}
