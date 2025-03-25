#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    if (month == 2) return isLeapYear(year) ? 29 : 28;
    if (month == 4 || month == 6 || month == 9 || month == 11) return 30;
    return 31;
}

// Function to get the starting day of the month (Assuming Jan 1, 1900 was a Monday)
int getStartDay(int year, int month) {
    int totalDays = 0;
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }
    return (totalDays + 1) % 7; // 0 = Sunday, 1 = Monday, ..., 6 = Saturday
}

// Function to display the calendar for a given month and year
void displayCalendar(int month, int year) {
    string months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int days = getDaysInMonth(month, year);
    int startDay = getStartDay(year, month);
    
    cout << "\n   " << months[month] << " " << year << "\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";
    
    for (int i = 0; i < startDay; i++) cout << "    ";
    for (int day = 1; day <= days; day++) {
        printf("%3d ", day);
        if ((startDay + day) % 7 == 0) cout << endl;
    }
    cout << "\n";
}

int main() {
    int year, month;
    cout << "Enter calendar's year: ";
    cin >> year;
    cout << "Enter calendar's month (1-12): ";
    cin >> month;
    
    if (month < 1 || month > 12 || year < 1900) {
        cout << "Invalid input!\n";
        return 1;
    }
    
    displayCalendar(month, year);
    return 0;
}
