#include <iostream>
using namespace std;

int getStartDay(int year, int month) {
    int day = 1, y = year;
    if (month < 3) { y--; month += 12; }
    return (day + (13 * (month + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
}

int getDaysInMonth(int month, int year) {
    if (month == 2) return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    return (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
}

void printCalendar(int year, int month) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    cout << "\n    Calendar Title : " << months[month - 1] << " - " << year << "\n";
    cout << "----------------------------------------------------\n";
    cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Satruday\n";

    int startDay = getStartDay(year, month);
    int days = getDaysInMonth(month, year);

    for (int i = 0; i < startDay; i++) cout << "       ";

    for (int day = 1; day <= days; day++) {
        cout << (day < 10 ? "      " : "     ") << day;
        if ((startDay + day) % 7 == 0) cout << "\n";
    }
    cout << "\n----------------------------------------------------\n";
}

int main() {
    int year, month, choice;
    do {
        cout << "enter calendars year: ";
        cin >> year;
        cout << "enter calendars month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "invalid month! try again.\n";
            continue;
        }

        printCalendar(year, month);

        cout << "do you want to see other month? 1 = yes, others = no:";
        cin >> choice;
    } while (choice == 1);

    return 0;
}