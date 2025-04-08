#include <iostream>
#include <iomanip>
using namespace std;

// Function to validate year input
int yearInputValidation(int year) {
    while (year < 1) {
        cout << "Invalid year. Enter a valid year: ";
        cin >> year;
    }
    return year;
}

// Function to validate month input
int monthInputValidation(int month) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Enter a valid month (1-12): ";
        cin >> month;
    }
    return month;
}

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to find the number of days in a month and return the month name
int findDaysInMonth(int month, int year, string &monthName) {
    int days;
    switch (month) {
        case 1: monthName = "January"; days = 31; break;
        case 2: monthName = "February"; days = isLeapYear(year) ? 29 : 28; break;
        case 3: monthName = "March"; days = 31; break;
        case 4: monthName = "April"; days = 30; break;
        case 5: monthName = "May"; days = 31; break;
        case 6: monthName = "June"; days = 30; break;
        case 7: monthName = "July"; days = 31; break;
        case 8: monthName = "August"; days = 31; break;
        case 9: monthName = "September"; days = 30; break;
        case 10: monthName = "October"; days = 31; break;
        case 11: monthName = "November"; days = 30; break;
        case 12: monthName = "December"; days = 31; break;
    }
    return days;
}

// Function to display the calendar
void displayCalendar(int month, int year, int days, string monthName) {
    cout << "\n   Calendar Title : " << monthName << " - " << year << endl;
    cout << "------------------------------------------------------\n";
    cout << "  Sun   Mon   Tue   Wed   Thu   Fri   Sat\n";

    // Assuming the first day starts on Sunday (simplified for this example)
    int startDay = 0; 

    for (int i = 0; i < startDay; i++) {
        cout << "      ";
    }

    for (int day = 1; day <= days; day++) {
        cout << setw(5) << day << " ";
        if ((startDay + day) % 7 == 0) {
            cout << endl;
        }
    }
    cout << "\n------------------------------------------------------\n";
}

int main() {
    int year, month, days;
    string monthName;

    // Step 1: Get and validate year input
    cout << "Enter calendar's year: ";
    cin >> year;
    year = yearInputValidation(year);

    // Step 2: Get and validate month input
    cout << "Enter calendar's month (1-12): ";
    cin >> month;
    month = monthInputValidation(month);

    // Step 3: Get number of days in the month and month name
    days = findDaysInMonth(month, year, monthName);

    // Step 4: Display calendar
    displayCalendar(month, year, days, monthName);

    return 0;
}
