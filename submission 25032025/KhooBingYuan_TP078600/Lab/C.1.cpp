#include <iostream>
#include <iomanip>  // For formatting output
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29; // February in a leap year
    }
    return daysInMonth[month - 1];
}

// Function to determine the starting day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
int getStartingDay(int year, int month) {
    int day = 1;
    int y = year;
    int m = month;

    // Zeller's Congruence Algorithm
    if (m < 3) {
        m += 12;
        y--;
    }

    int K = y % 100;
    int J = y / 100;
    int startDay = (day + (13 * (m + 1)) / 5 + K + (K / 4) + (J / 4) + (5 * J)) % 7;

    return (startDay + 6) % 7; // Convert to match Sunday = 0 format
}

// Function to get the month name
string getMonthName(int month) {
    string months[] = { "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };
    return months[month - 1];
}

// Function to print the calendar
void printCalendar(int year, int month) {
    int days = getDaysInMonth(month, year);
    int startDay = getStartingDay(year, month);

    cout << "\n\t\tCalendar Title : " << getMonthName(month) << " - " << year << "\n";
    cout << "---------------------------------------------------------\n";
    cout << "  Sunday   Monday   Tuesday  Wednesday  Thursday  Friday   Saturday \n";
    cout << "---------------------------------------------------------\n";

    // Print leading spaces for the first day
    int dayCounter = 0;
    for (int i = 0; i < startDay; i++) {
        cout << "         "; // Print 9 spaces to match setw(9)
        dayCounter++;
    }

    // Print the days
    for (int day = 1; day <= days; day++) {
        cout << setw(9) << day; // Ensure each day is printed within a fixed-width field
        dayCounter++;

        // Start a new line every 7 days (new week)
        if (dayCounter % 7 == 0) {
            cout << "\n";
        }
    }

    // Newline for formatting
    cout << "\n---------------------------------------------------------\n";
}


int main() {
    int year, month, choice;
    
    do {
        do {
            cout << "Enter calendar's year  (1900 - 2100) : ";
            cin >> year;
            if (year < 1900 || year > 2100) {
                cout << "Invalid year! Please enter a year between 1900 and 2100.\n";
            }
        } while (year < 1900 || year > 2100); // Keep looping until a valid year is entered

        // Validate Month Input
        do {
            cout << "Enter calendar's month (1 - 12) : ";
            cin >> month;
            if (month < 1 || month > 12) {
                cout << "Invalid month! Please enter a month between 1 and 12.\n";
            }
        } while (month < 1 || month > 12); // Keep looping until a valid month is entered


        // Print the calendar
        printCalendar(year, month);

        // Ask if the user wants to see another month
        cout << "Do you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;

    } while (choice == 1);

    cout << "Goodbye!\n";
    return 0;
}
