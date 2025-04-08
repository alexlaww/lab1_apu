#include <iostream>
#include <iomanip>
using namespace std;

int getStartDay(int year, int month) {
    int d = 1;
    if (month < 3) {
        month += 12;
        year--;
    }
    return (d + 2*month + (3*(month+1))/5 + year + year/4 - year/100 + year/400) % 7;
}

int getDaysInMonth(int year, int month) {
    if (month == 2) {
        // Leap year check
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

string getMonthName(int month) {
    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    return months[month - 1];
}

int main() {
    int year, month, again;

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        cout << "\n       Calendar Title : " << getMonthName(month) << " - " << year << "\n";
        cout << "-------------------------------------------------------------\n";
        cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";
        cout << "-------------------------------------------------------------\n";

        int startDay = getStartDay(year, month);
        int totalDays = getDaysInMonth(year, month);

        for (int i = 0; i < startDay; i++) {
            cout << "        ";
        }

        for (int day = 1; day <= totalDays; day++) {
            cout << setw(8) << day;
            if ((startDay + day) % 7 == 0) {
                cout << endl;
            }
        }

        cout << "\n-------------------------------------------------------------\n";
        cout << "Do you want to see other month? 1 = Yes, others = No: ";
        cin >> again;
        cout << endl;
    } while (again == 1);

    return 0;
}
