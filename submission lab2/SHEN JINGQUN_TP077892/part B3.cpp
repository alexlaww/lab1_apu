#include <iostream>
#include <iomanip>
using namespace std;

// 验证年份输入
int yearInputValidation(int year) {
    while (year < 1) {
        cout << "Invalid year. Please enter a valid year (greater than 0): ";
        cin >> year;
    }
    return year;
}

// 验证月份输入
int monthInputValidation(int month, int year) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a valid month (1 - 12): ";
        cin >> month;
    }
    return month;
}

// 判断是否为闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算月份的天数并将月份值转换为文本
int findDaysinMonth(int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year) && month == 2) {
        daysInMonth[1] = 29;
    }
    return daysInMonth[month - 1];
}

// 显示每月日历
void displayCalendar(int month, int year, int days) {
    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    cout << "Calendar Title : " << monthNames[month - 1] << " - " << year << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << setw(10) << "Sunday" << setw(10) << "Monday" << setw(10) << "Tuesday"
         << setw(10) << "Wednesday" << setw(10) << "Thursday" << setw(10) << "Friday"
         << setw(10) << "Saturday" << endl;
    cout << "-------------------------------------------------------------" << endl;

    // 计算该月1号是星期几（这里简单假设从1900年1月1日开始计算，1900年1月1日是星期一）
    int startDay = 1;
    for (int y = 1900; y < year; y++) {
        if (isLeapYear(y)) {
            startDay = (startDay + 366) % 7;
        } else {
            startDay = (startDay + 365) % 7;
        }
    }
    for (int m = 1; m < month; m++) {
        int daysInPrevMonth = findDaysinMonth(m, year);
        startDay = (startDay + daysInPrevMonth) % 7;
    }

    for (int i = 0; i < startDay; i++) {
        cout << setw(10) << "";
    }
    for (int i = 1; i <= days; i++) {
        cout << setw(10) << i;
        if ((startDay + i - 1) % 7 == 6) {
            cout << endl;
        }
    }
    cout << endl;
    cout << "-------------------------------------------------------------" << endl;
}

int main() {
    // step 1: declare the required variables
    int year, month, days;

    // step 2: input + input validation
    cout << "Enter calendar's year: ";
    cin >> year;
    year = yearInputValidation(year);

    cout << "Enter calendar's month: ";
    cin >> month;
    month = monthInputValidation(month, year);

    // Step 3: process
    days = findDaysinMonth(month, year);

    // step 4: output
    displayCalendar(month, year, days);

    return 0;
}