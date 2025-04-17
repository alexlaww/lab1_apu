#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function Prototypes
bool isLeapYear(int year);
int yearInputValidation(int year); // Loops until valid year > 0
int monthInputValidation(int month); // Loops until valid month 1-12
int findDaysInMonth(int month, int year);
string getMonthName(int month); // Gets month name from number
int getStartDay(int month, int year); // Calculates start day (0=Sun)
void displayCalendar(int month, int year); // Handles display logic

int main() {
    int year, month, choice;

    do {
        // --- Input & Validation using functions ---
        cout << "Enter calendar's year: ";
        int inputYear;
        cin >> inputYear;
        year = yearInputValidation(inputYear); // Validate and assign

        cout << "Enter calendar's month: ";
        int inputMonth;
        cin >> inputMonth;
        month = monthInputValidation(inputMonth); // Validate and assign

        // --- Display Calendar using function ---
        displayCalendar(month, year);

        // --- Ask to continue ---
        cout << "Do you want to see other month? (1 = Yes, others = No): ";
        cin >> choice;
        cout << endl;

    } while (choice == 1);

    cout << "Exiting Calendar Application." << endl;

    return 0;
}

// --- Function Definitions ---

// Checks if a year is a leap year
bool isLeapYear(int year) {
    // Year must be positive for calendar context
    if (year <= 0) return false;
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

// Validates year input (must be positive)
int yearInputValidation(int year) {
    while (year <= 0) {
        cout << "Invalid year. Please enter a positive year: ";
        cin >> year;
    }
    return year;
}

// Validates month input (must be 1-12)
int monthInputValidation(int month) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter month (1-12): ";
        cin >> month;
    }
    return month;
}

// Finds the number of days in a given month and year
int findDaysInMonth(int month, int year) {
    // We assume month and year are already validated here
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        // Months 1, 3, 5, 7, 8, 10, 12
        return 31;
    }
}

// Returns the string name for a given month number
string getMonthName(int month) {
    switch (month) {
        case 1: return "January";
        case 2: return "February";
        case 3: return "March";
        case 4: return "April";
        case 5: return "May";
        case 6: return "June";
        case 7: return "July";
        case 8: return "August";
        case 9: return "September";
        case 10: return "October";
        case 11: return "November";
        case 12: return "December";
        default: return "Invalid Month"; // Should not happen if validated
    }
}

// Calculates the starting day of the week for the 1st of the month
// Uses Zeller's Congruence (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
int getStartDay(int month, int year) {
    int m = month;
    int y = year;
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100; // Year of the century
    int j = y / 100; // Century
    int day = 1; // Day is the 1st

    int h = (day + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // Convert Zeller's result (0=Sat, 1=Sun, ..., 6=Fri) to (0=Sun, ..., 6=Sat)
    return (h + 6) % 7;
}

// Displays the calendar for the given month and year
void displayCalendar(int month, int year) {
    // --- Get Calendar Data ---
    string monthName = getMonthName(month);
    int numDays = findDaysInMonth(month, year);
    int startDay = getStartDay(month, year); // 0=Sun, 1=Mon, ..., 6=Sat

    // --- Print Header ---
    cout << endl;
    cout << "    Calendar Title : " << monthName << " " << year << endl;
    cout << "====================================" << endl;
    cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;
    cout << "====================================" << endl;

    // --- Print Leading Spaces ---
    for (int i = 0; i < startDay; ++i) {
        cout << "    "; // 4 spaces per day slot
    }

    // --- Print Days ---
    for (int day = 1; day <= numDays; ++day) {
        cout << setw(4) << day;
        // Check if we need to wrap to the next line (after Saturday)
        if ((startDay + day) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl; // Newline after the last day if it wasn't a Saturday
    cout << "====================================" << endl;
}