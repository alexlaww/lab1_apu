#include <iostream>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if (month == 2 && isLeapYear(year)) {
        return 29;  // February has 29 days in a leap year
    }
    
    return daysInMonth[month - 1]; // Return the correct number of days
}

// Function to find the starting day of the month
int getFirstDayOfMonth(int year, int month) {
    int totalDays = 0;

    // Count days from 1900 to the given year
    for (int y = 1900; y < year; y++) {
        totalDays += (isLeapYear(y)) ? 366 : 365;
    }

    // Count days from January to the given month
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }

    return (totalDays + 1) % 7; // 1st Jan 1900 was Monday, so add 1
}

// Function to display the calendar
void displayCalendar(int year, int month) {
    string daysOfWeek[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

    cout << "\n   Calendar - " << month << " / " << year << "\n";
    cout << "---------------------------------\n";

    // Print day names
    for (int i = 0; i < 7; i++) {
        cout << daysOfWeek[i] << " ";
    }
    cout << "\n---------------------------------\n";

    int days = getDaysInMonth(month, year);
    int startDay = getFirstDayOfMonth(year, month);

    // Print spaces before first day
    for (int i = 0; i < startDay; i++) {
        cout << "    "; 
    }

    // Print days of the month
    for (int day = 1; day <= days; day++) {
        cout << day << "   ";
        if ((day + startDay) % 7 == 0) { // New line after Saturday
            cout << endl;
        }
    }

    cout << "\n---------------------------------\n";
}

int main() {
    int year, month;
    char choice;

    do {
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a value between 1 and 12.\n";
            continue;
        }

        displayCalendar(year, month);

        cout << "Do you want to see another month? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
