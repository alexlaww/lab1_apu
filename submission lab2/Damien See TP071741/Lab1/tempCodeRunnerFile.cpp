#include <iostream>
#include <iomanip>
#include <ctime>
#include <limits>
using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int year, int month) {
    if (month == 2) // February
        return isLeapYear(year) ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

int getFirstDayOfMonth(int year, int month) {
    if (year < 1900 || month < 1 || month > 12) {
        cerr << "Invalid year or month provided." << endl;
        return -1; // Return an invalid day
    }

    // Zeller's Congruence Algorithm
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int day = (1 + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;

    // Adjust result to match Sunday = 0, Monday = 1, ..., Saturday = 6
    return (day + 6) % 7;
}

void printCalendar(int year, int month) {
    cout << endl << setw(20) << " " << year << " - Month " << month << endl;
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

    int daysInMonth = getDaysInMonth(year, month);
    int firstDay = getFirstDayOfMonth(year, month);

    for (int i = 0; i < firstDay; i++)
        cout << "    ";

    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(3) << day << " ";
        if ((day + firstDay) % 7 == 0)
            cout << endl;
    }
    cout << endl;
}

int main() {
    int year, month;
    char choice;

    do {
        cout << "Enter a year: ";
        cin >> year;
        while (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid year: ";
            cin >> year;
        }
        cout << "Enter a month (1-12): ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month. Please try again." << endl;
            continue;
        }

        printCalendar(year, month);

        cout << "Do you want to see another month's calendar? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Ok bye bye" << endl;

    return 0;
}