#include <iostream>
#include <iomanip>

using namespace std;

// 判断闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 获取月份天数
int getDaysInMonth(int year, int month) {
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4: case 6: case 9: case 11: return 30;
        default: return 31;
    }
}

// 获取该月第一天是星期几
int getStartDay(int year, int month) {
    int totalDays = 0;
    for (int y = 1900; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(year, m);
    }
    return (totalDays + 1) % 7; // 1900-01-01 是星期一 (星期天 = 0)
}

void displayCalendar(int year, int month) {
    cout << "   Calendar Title : " << month << " - " << year << endl;
    cout << "-------------------------------------------\n";
    cout << " Sunday Monday Tuesday Wednesday Thursday Friday Saturday\n";

    int startDay = getStartDay(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    // 打印空格
    for (int i = 0; i < startDay; i++) {
        cout << "       ";
    }

    // 打印日期
    for (int day = 1; day <= daysInMonth; day++) {
        cout << setw(7) << day;
        if ((startDay + day) % 7 == 0) cout << endl; // 换行
    }
    cout << "\n-------------------------------------------\n";
}

int main() {
    int year, month, choice;
    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month! Please enter again.\n";
            continue;
        }

        displayCalendar(year, month);

        cout << "Do you want to see another month? (1-Yes, 0-No): ";
        cin >> choice;
    } while (choice == 1);

    return 0;
}
