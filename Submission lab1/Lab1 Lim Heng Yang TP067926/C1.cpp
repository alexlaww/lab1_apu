#include <iostream>
#include <iomanip>
#include  <ctime>


using namespace std;

int getfirstday(int year,int month)
{
    struct tm timeStruct = {0}; 
    timeStruct.tm_year = year - 1900; 
    timeStruct.tm_mon = month - 1;    
    timeStruct.tm_mday = 1;           
    mktime(&timeStruct); 
    return timeStruct.tm_wday; 
}

int getdaysinmonths(int year, int month)
{
    int daysinmonth;
    if (month == 2) { // February
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    }
    // Months with 31 days: Jan, Mar, May, Jul, Aug, Oct, Dec
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30; // April, June, September, November
    return 31; // Remaining months have 31 days
}

int main() {

    int year, month,firstday, totaldays;

    cout << "Enter the year: "; cin >> year;
    cout << "Enter the month: "; cin >> month;

    if(month < 1 || month > 12){
        cout << "Invalid month. Please enter a month between 1 and 12: ";
        cin >> month; 
    }

    firstday = getfirstday(year, month);
    // Get total days in the month
    totaldays = getdaysinmonths(year, month);

    cout << "calander Title: " << month << "/" << year << endl;
    cout << string(75, '-') << endl;
    cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";

 
    for (int i = 0; i < firstday; i++) {
        cout << "        "; 
    }

    for (int day = 1; day <= totaldays; day++) {
        cout << setw(8) << day; 
        if ((day + firstday) % 7 == 0) 
            cout << endl;
    }

    return 0;
         cout << "calander Title: " << month << "/" << year << endl;
         cout << string(75, '-') << endl;
         cout << " Sunday  Monday  Tuesday  Wednesday  Thursday  Friday  Saturday\n";

        for (int i = 0; i < firstday; i++) {
            cout << "        "; 
        }

        for (int day = 1; day <= totaldays; day++) {
            cout << setw(8) << day;
            if ((day + firstday) % 7 == 0) 
                cout << endl;
        }
    }



        
        