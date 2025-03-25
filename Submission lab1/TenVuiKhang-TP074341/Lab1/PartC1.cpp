#include <iostream>
#include <iomanip>

using namespace std;

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysInMonth[month - 1];
}

int getStartDay(int year, int month) {
    int totalDays = 0;
    
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(m, year);
    }

    return (totalDays + 1) % 7;
}

void printCalendar(int year, int month) {
    string months[] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    
    cout << "\n\tCalendar Title : " << months[month] << " - " << year << "\n\n";
    cout << "  Sunday   Monday   Tuesday   Wednesday   Thursday   Friday   Saturday\n";
    cout << " ---------------------------------------------------------------------\n";
    
    int startDay = getStartDay(year, month);
    int daysInMonth = getDaysInMonth(month, year);
    
    for (int i = 0; i < startDay; i++) {
        cout << setw(9) << " ";
    }

    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(9) << day;
        if ((day + startDay) % 7 == 0) {
            cout << endl; 
        }
    }
    
    cout << "\n ---------------------------------------------------------------------\n";
}

int main() {
    int year, month, choice;

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter a number between 1 and 12.\n";
            continue;
        }

        printCalendar(year, month);

        cout << "\nDo you want to see another month? (1 = Yes, 0 = No): ";
        cin >> choice;
    } while (choice == 1);

    cout << "Goodbye!\n";
    return 0;
}
