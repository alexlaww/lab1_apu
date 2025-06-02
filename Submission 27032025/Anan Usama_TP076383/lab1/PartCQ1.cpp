// C-1
#include <iostream>
#include <iomanip> 
using namespace std;

bool isLeapYear(int year) {  //check leap year
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDays(int month, int year) { //get num of days/month
    switch(month) {
        case 2: return isLeapYear(year) ? 29 : 28; //28/29days
        case 4: case 6: case 9: case 11: return 30; //30 days
        default: return 31; //others=31days
    }
}

int getStartDay(int month, int year) { 
    if (month < 3) {
        month += 12;
        year--;
    }
    int a = 1; //
    int b = month;
    int c = year % 100;  
    int d = year / 100;
    int e = (a + 13*(b + 1)/5 + c + c/4 + d/4 + 5*d) % 7;

    return (e + 6) % 7; //Convert Saturday=0 to Sunday=0
}

void printCalendar(int month, int year) {
        string months[] = {"", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
        
        int startDay = getStartDay(month, year);
        int daysInMonth = getDays(month, year);

        cout << "\n\tCalendar Title : " << months[month] << " - " << year << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday" << endl;
        cout << "------------------------------------------------------------" << endl;
    
        for (int i = 0; i < startDay; ++i) {
            cout << setw(8) << " ";
        }

        for (int day = 1; day <= daysInMonth; ++day) {
            cout << setw(8) << day;
            if ((day + startDay) % 7 == 0)
                cout << endl;
        }
        cout << "\n------------------------------------------------------------\n";


}

int main() {
    int month, year, again;

    do {
        cout << "Enter calendar's year: ";
        cin >> year;
        cout << "Enter calendar's month: ";
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month. Please enter a value between 1 and 12.\n";
            continue;
        }

        printCalendar(month, year);

        cout << "\nDo you want to see another month? (1 = Yes, 0 = No): ";
        cin >> again;

    } while (again == 1);

    cout << "Thanks for using the calendar app!\n";
    return 0;
}
