#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int year, month;

    cout << "Enter calendar's year: ";
    cin >> year;

    cout << "Enter calendar's month: ";
    cin >> month;

    // Array storing month names (1-based index)
    string monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Array storing number of days in each month (1-based index)
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Predefined starting day index for each month in 2020 (Sunday = 0, Monday = 1, ..., Saturday = 6)
    int startDayIndex[] = {0, 3, 6, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2}; 

    // Leap year adjustment for February
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        daysInMonth[2] = 29;
    }

    // Validate month input
    if (month < 1 || month > 12) {
        cout << "Invalid month! Please enter a value between 1 and 12." << endl;
        return 1;
    }

    cout << "\n\tCalendar Title: " << monthNames[month] << " - " << year << endl;
    cout << "----------------------------------------------------\n";
    cout << "  Sun     Mon     Tue     Wed     Thu     Fri     Sat\n";
    cout << "----------------------------------------------------\n";

    int startDay = startDayIndex[month]; // Get predefined starting day

    // Print leading spaces for the first row
    for (int i = 0; i < startDay; i++) {
        cout << setw(7) << " ";
    }

    // Print days of the month
    for (int day = 1; day <= daysInMonth[month]; day++) {
        cout << setw(7) << day;
        if ((day + startDay) % 7 == 0) { // New line after Saturday
            cout << endl;
        }
    }
    
    cout << "\n----------------------------------------------------\n";

    return 0;
}
