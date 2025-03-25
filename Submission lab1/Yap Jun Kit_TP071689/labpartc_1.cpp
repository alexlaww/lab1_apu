#include <iostream>
#include <iomanip>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29; // Leap year adjustment
    }
    return daysInMonth[month - 1];
}
// Function to determine the start day of a month (0 = Sunday, 1 = Monday, ...)
int getStartDay(int year, int month) {
    int totalDays = 0;
    
    // Count days from 1900 to given year
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    
    // Count days from January to previous month
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }
    
    return (totalDays + 1) % 7; // January 1, 1900 was a Monday
}
int main() {
    int year, month;
    
    cout << "Enter calendar's year: ";
    cin >> year;
    cout << "Enter calendar's month: ";
    cin >> month;
    
    int startDay = getStartDay(year, month);
    int days = getDaysInMonth(month, year);

    cout << "\nCalendar Title: " << year << " - " << month << "\n\n";
    cout << "Sunday    Monday    Tuesday   Wednesday  Thursday   Friday    Saturday\n";

    // Print initial spaces
    for (int i = 0; i < startDay; i++) {
        cout << "          ";
    }

    // Print the days of the month
    for (int day = 1; day <= days; day++) {
        cout << setw(8) << day << "   ";
        if ((day + startDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << "\n\n";
    
    return 0;
}
