#include <iostream>
using namespace std;

//Check for leap year
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}

int yearInputValidation(int year) {
    while (year < 1) {
        cout << "Invalid year. Please enter a positive year: ";
        cin >> year;
    }
    return year;
}

int monthInputValidation(int month, int year) {
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month between 1 and 12: ";
        cin >> month;
    }
    return month;
}

int findDaysInMonth(int month, int year) {
    string monthNames[] = {"", "January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
    
    int days;
    
    switch (month) {
        case 2: // February
            days = isLeapYear(year) ? 29 : 28;
            break;
        case 4: case 6: case 9: case 11: 
            days = 30;
            break;
        default: 
            days = 31;
    }
    
    cout << "Month: " << monthNames[month] << endl;
    return days;
}

int getStartDay(int year, int month) {
    if (month < 3) {
        month += 12;
        year--;
    }
    
    int k = year % 100;
    int j = year / 100;
    
    int dayOfWeek = (1 + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;
    
    // Convert to 0-based index (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    return (dayOfWeek + 6) % 7;
}

void displayCalendar(int month, int year, int days) {
    string monthNames[] = {"", "January", "February","March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
                           
    cout << "\n---------------" << monthNames[month] << " " << year << "---------------" << endl;
    cout << " Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    int startDay = getStartDay(year, month);
    
    // Print spaces
    for (int i = 0; i < startDay; i++) {
        cout << "     ";
    }
    
    // Formatting
    for (int day = 1; day <= days; day++) {
        printf("%4d ", day);
        
        // After Saturday, start a new line
        if ((day + startDay) % 7 == 0 || day == days) {
            cout << endl;
        }
    }
    cout << endl;
}

int main(){
    int year, month, days;

    cout << "Enter year: ";
    cin >> year;
    year = yearInputValidation(year);

    cout << "Enter month: ";
    cin >> month;
    month = monthInputValidation(month, year);

    days = findDaysInMonth(month, year);
    
    displayCalendar(month, year, days);

    return 0;


}