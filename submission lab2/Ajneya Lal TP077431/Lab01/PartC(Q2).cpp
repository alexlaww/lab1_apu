#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int daysInMonth;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);

    cout << "Enter number of days in this month: ";
    cin >> daysInMonth;

    for (int day = 1; day <= daysInMonth; day++) {
        cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather;

        if (weather == 'E' || weather == 'e') {
            cout << "Early termination by user." << endl;
            break;
        }

        if (weather == 'H' || weather == 'h') {
            hotDays++;
        } else if (weather == 'R' || weather == 'r') {
            rainyDays++;
        } else if (weather == 'C' || weather == 'c') {
            cloudyDays++;
        } else {
            cout << "Invalid input! Please enter H, R, C, or E only." << endl;
            day--; // Don't count this as a valid day
        }
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    return 0;
}
