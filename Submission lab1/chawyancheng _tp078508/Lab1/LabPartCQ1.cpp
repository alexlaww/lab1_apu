#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month
int getDaysInMonth(int year, int month) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) {
        return 29; // February in a leap year
    }
    return daysInMonth[month - 1];
}

// Function to calculate the first day of the month (0 = Sunday, 1 = Monday, ...)
int getFirstDayOfMonth(int year, int month) {
    int day = 1;
    int y = year - (14 - month) / 12;
    int x = y + y / 4 - y / 100 + y / 400;
    int m = month + 12 * ((14 - month) / 12) - 2;
    return (day + x + (31 * m) / 12) % 7;
}

int main() {
    int year, month, choice;
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    do {
        // Get user input
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month (1-12): ";
        cin >> month;
        
        // Validate input
        if (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a number between 1 and 12.\n";
            continue;
        }
        
        // Display calendar header
        cout << "\n      Calendar Title : " << months[month - 1] << " - " << year << "\n";
        cout << "------------------------------------------------------------\n";
        cout << "  Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";
        cout << "------------------------------------------------------------\n";
        
        // Get first day and number of days
        int firstDay = getFirstDayOfMonth(year, month);
        int daysInMonth = getDaysInMonth(year, month);
        
        // Print leading spaces
        for (int i = 0; i < firstDay; i++) {
            cout << "       ";
        }
        
        // Print the days of the month
        for (int day = 1; day <= daysInMonth; day++) {
            cout << setw(7) << day;
            if ((firstDay + day) % 7 == 0) {
                cout << endl;
            }
        }
        cout << "\n------------------------------------------------------------\n";
        
        // Ask if user wants to continue
        cout << "Do you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;
        
    } while (choice == 1);
    
    return 0;
}
