#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29;  // February in a leap year
    }
    return daysInMonth[month - 1];
}

// Function to get the starting day of a month
int getStartingDay(int year, int month) {
    int totalDays = 0;

    // Calculate total days from 1900 to the given year
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    // Add days for months in the current year
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }

    return (totalDays + 1) % 7;  // 1st Jan 1900 was a Monday (offset by 1)
}

// Function to display the calendar
void displayCalendar(int year, int month) {
    string months[] = {"January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};

    int days = getDaysInMonth(month, year);
    int startDay = getStartingDay(year, month);

    // Display header
    cout << "\n----------------------------------------\n";
    cout << "          " << months[month - 1] << " - " << year << endl;
    cout << "----------------------------------------\n";
    cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat \n";

    // Print leading spaces
    for (int i = 0; i < startDay; i++) {
        cout << "     ";
    }

    // Print the days of the month
    for (int day = 1; day <= days; day++) {
        cout << setw(5) << day;
        if ((startDay + day) % 7 == 0) { // New line after Saturday
            cout << endl;
        }
    }
    cout << "\n----------------------------------------\n";
}

int main() {
    int year, month, choice;

    do {
        // Get user input
        cout << "\nEnter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a value between 1 and 12.\n";
            continue;
        }

        // Display the calendar
        displayCalendar(year, month);

        // Ask if the user wants another calendar
        cout << "Do you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;
        
    } while (choice == 1);

    cout << "Thank you for using the calendar application!\n";
    return 0;
}
