# include <iostream>
# include <iomanip>
using namespace std;

int monthInputValidation();
int yearInputValidation();
int findDaysinMonth();
bool isLeapYear();
void displayCalendar();

int month, year;
int main(){

    cout << "Enter the month (1-12): ";
    cin >> month;
    month = monthInputValidation();
    cout << "Enter the year: ";
    cin >> year;
    year = yearInputValidation();
    displayCalendar();

    return 0;
}

int monthInputValidation(){
    while(month <= 0 || month > 12){
        cout << "Invalid month. Please enter a valid month (1-12): ";
        cin >> month;
    }
    return month;
}

int yearInputValidation(){
    while(year <= 0 || year > 9999){
        cout << "Invalid year. Please enter a valid year (1-9999): ";
        cin >> year;
    }
    return year;
}

bool isLeapYear(){
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int findDaysinMonth(){
    int m = month;
    int y = year;
    
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    
    int h = (1 + (13 * (m + 1)) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    
    return (h + 6) % 7;
}

void displayCalendar(){
    string monthNames[] = {"", "January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
    
    cout << string(10, ' ') << "Calendar for " << monthNames[month] << " " << year << endl;
    cout << string(40, '-') << endl;
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
    cout << string(40, '-') << endl;

    // Calculate days in the month
    int days;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        days = 31;
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        days = 30;
    } else {
        days = (isLeapYear()) ? 29 : 28;
    }
    
    int firstDay = findDaysinMonth();

    // Print spaces before the first day
    for (int k = 0; k < firstDay; k++) {
        cout << "     ";
    }

    // Print days
    int k = firstDay;
    for (int j = 1; j <= days; j++) {
        cout << setw(5) << j;
        if (++k > 6) { // Move to next row after Saturday
            k = 0;
            cout << endl;
        }
    }

    // Add a newline if needed
    if (k != 0) {
        cout << endl;
    }
    
    cout << string(40, '-') << endl;

    // Ask if user wants to see other months
    cout << "Do you want to see other months? 1 = Yes, others = No: ";
    int choice;
    cin >> choice;
    if (choice == 1) {
        cout << "Enter the month (1-12): ";
        cin >> month;
        month = monthInputValidation();
        cout << "Enter the year: ";
        cin >> year;
        year = yearInputValidation();
        displayCalendar(); // Recursive call for new month/year
    }
}


