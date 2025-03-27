#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the day number (0 = Sunday, ..., 6 = Saturday)
int dayNumber(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year -= month < 3; // If Jan or Feb, adjust the year
    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    if (month == 2) { // February
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return daysInMonth[month - 1];
}

// Function to print the calendar
void printCalendar(int month, int year) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    
    int daysInMonth = getDaysInMonth(month, year);
    int startDay = dayNumber(1, month, year);

    // Print header
    cout << "\n  " << months[month - 1] << " " << year << "\n";
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    // Print spaces for first row
    for (int i = 0; i < startDay; i++)
        cout << "     ";

    // Print days
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(5) << day; // Right-align numbers
        if ((startDay + day) % 7 == 0) // New line after Saturday
            cout << endl;
    }
    cout << endl;
}

// Main function
int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12 || year < 1) {
        cout << "Invalid input! Please enter a valid month and year.\n";
        return 1;
    }

    printCalendar(month, year);
    return 0;
}