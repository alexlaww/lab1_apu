#include <iostream>
#include <iomanip>
using namespace std;

// Function to check for leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

// Function to get number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 2:
            return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}

// Function to get month name
string getMonthName(int month) {
    string months[] = { "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };
    return months[month - 1];
}

// Zeller's Congruence to calculate the day of the week (0=Sunday, 1=Monday, ..., 6=Saturday)
int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int q = 1; // First day of month
    int k = year % 100;
    int j = year / 100;

    int h = (q + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
    return (h + 6) % 7; // Convert to 0=Sunday format
}

int main() {
    int year, month, choice;

    do {
        // Get user input
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month (1-12): ";
        cin >> month;

        // Display calendar header
        cout << "\n\tCalendar Title : " << getMonthName(month) << " - " << year << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday" << endl;
        cout << "--------------------------------------------------------" << endl;

        int days = getDaysInMonth(month, year);
        int startDay = getStartDay(month, year);

        // Print initial spaces
        for (int i = 0; i < startDay; ++i) {
            cout << setw(8) << " ";
        }

        // Print all days of the month
        for (int day = 1; day <= days; ++day) {
            cout << setw(8) << day;
            if ((day + startDay) % 7 == 0)
                cout << endl;
        }

        cout << "\n--------------------------------------------------------\n";
        cout << "\nDo you want to see another month? 1 = Yes, 0 = No: ";
        cin >> choice;
        cout << endl;

    } while (choice == 1);

    return 0;
}
