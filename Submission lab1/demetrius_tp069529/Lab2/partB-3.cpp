#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year);
int findDaysInMonth(int month, int year);
void monthInputValidation(int &month);
void yearInputValidation(int &year);
void displayCalendar(int month, int year);

int main() {
    int year, month;

    // Input validation
    cout << "Enter a year (yyyy): ";
    cin >> year;
    yearInputValidation(year);

    cout << "Enter a month's number (1-12): ";
    cin >> month;
    monthInputValidation(month);

    // Display the calendar
    displayCalendar(month, year);

    return 0;
}

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int findDaysInMonth(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 31;
    }
}

void monthInputValidation(int &month) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month's number (1-12): ";
        cin >> month;
    }
}

void yearInputValidation(int &year) {
    while (year < 1) {
        cout << "Invalid year. Please enter a valid year (yyyy): ";
        cin >> year;
    }
}

void displayCalendar(int month, int year) {
    const string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days = findDaysInMonth(month, year);

    cout << "+-----------------------------+" << endl;
    cout << "| Month/Year: " << months[month - 1] << " " << year << " |" << endl;
    cout << "+-----------------------------+" << endl;
    cout << "| Sun Mon Tue Wed Thu Fri Sat |" << endl;

    // Assuming the first day of the month is a Sunday for simplicity
    for (int i = 1; i <= days; i++) {
        cout << setw(3) << i << " ";
        if (i % 7 == 0) cout << endl;
    }
    cout << endl;
    cout << "+-----------------------------+" << endl;
}
