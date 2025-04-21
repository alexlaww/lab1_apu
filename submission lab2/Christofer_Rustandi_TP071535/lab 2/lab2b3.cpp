#include <iostream>
#include <iomanip>
using namespace std;

// Check if the year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Validate the year input (must be positive)
int yearInputValidation(int year) {
    while (year < 1) {
        cout << "Invalid year. Please enter again: ";
        cin >> year;
    }
    return year;
}

// Validate the month input (must be between 1 and 12)
int monthInputValidation(int month, int year) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter again: ";
        cin >> month;
    }
    return month;
}

// Get number of days in a month (check leap year for February)
int findDaysInMonth(int month, int year) {
    switch (month) {
        case 1:  return 31;
        case 2:  return isLeapYear(year) ? 29 : 28;
        case 3:  return 31;
        case 4:  return 30;
        case 5:  return 31;
        case 6:  return 30;
        case 7:  return 31;
        case 8:  return 31;
        case 9:  return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;
        default: return 0;
    }
}

// Return the month name based on number
string getMonthName(int month) {
    string names[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    return names[month - 1];
}

// Find which day of the week the month starts on (0 = Sunday)
int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int day = (1 + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return (day + 6) % 7; // Adjust to make Sunday = 0
}

// Print the calendar layout
void displayCalendar(int month, int year, int days) {
    string monthName = getMonthName(month);

    cout << "\n\n\tCalendar Title : " << monthName << " - " << year << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Sunday   Monday   Tuesday  Wednesday  Thursday  Friday   Saturday\n";
    cout << "------------------------------------------------------------\n";

    int startDay = getStartDay(month, year);
    int currentDay = 1;

    // Add spacing before the first day
    for (int i = 0; i < startDay; i++) {
        cout << "         ";
    }

    // Print days of the month
    while (currentDay <= days) {
        cout << setw(5) << currentDay << "    ";
        if ((currentDay + startDay) % 7 == 0)
            cout << endl;
        currentDay++;
    }
    cout << endl;
}

int main() {
    int year, month, days;

    // Ask for year input
    cout << "Enter calendar's year: ";
    cin >> year;
    year = yearInputValidation(year);

    // Ask for month input
    cout << "Enter calendar's month: ";
    cin >> month;
    month = monthInputValidation(month, year);

    // Get the number of days in that month
    days = findDaysInMonth(month, year);

    // Display the calendar
    displayCalendar(month, year, days);

    return 0;
}
