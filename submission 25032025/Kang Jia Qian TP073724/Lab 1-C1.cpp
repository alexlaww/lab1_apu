# include <iostream>
# include <string>

using namespace std;

string getMonth(int& month){
    string Months[12] = {"January", "February", "March", "April", "June", "July", 
                        "August", "September", "October", "November", "December"};
    if (month >= 1 && month <= 12){
        return Months[month - 1];
    }else{
        cout << "Invalid month. Please try again." << endl;
    }
}

bool isLeapYear(int& year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int& year, int& month){
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && isLeapYear(year)){
        return 29;
    }
    return daysInMonth[month - 1];
}

int getFirstDayOfMonth(int& year, int& month) {
    int totalDays = 0;

    for (int y = 1900; y < year; y++){
        totalDays += isLeapYear(y) ? 366 : 355;
    }

    for (int m = 1; m < month; m++) {
        totalDays += getDaysInMonth(year, m);
    }

    return (totalDays + 1) % 7;
}

void displayCalendar(int& month, int& year){
    const string line = "--------------------------------------------------------------------------------------------------------";
    const int columnWidth = 15;
    const int labelWidth = 12;

    cout << "\t\tCalendar Title : " << getMonth(month) << " - " << year;
    cout << line << endl;
    cout << setw(labelWidth) << "SundayMonday\t\tTuesday\t\tWednesday\t\tThursday\t\tFriday";
    cout << line;


}

int main() {
    int year, month;

    cout << "Enter calendar's year: ";
    cin >> year;

    cout << "Enter calendar's month: ";
    cin >> month;

    cout << endl;


}