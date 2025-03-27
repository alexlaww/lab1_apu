#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int totalDays;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);

    cout << "Enter number of days in the month: ";
    cin >> totalDays;

    int hot = 0, rainy = 0, cloudy = 0;
    char weather;

    for (int day = 1; day <= totalDays; day++) {
        cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather;
        weather = tolower(weather);
        if (weather == 'e') {
            break;
        } else if (weather == 'h') {
            hot++;
        } else if (weather == 'r') {
            rainy++;
        } else if (weather == 'c') {
            cloudy++;
        } else {
            cout << "Invalid input! Try again." << endl;
            day--; 
        }
    }

    cout << "\nNumber of hot days this month: " << hot << endl;
    cout << "Number of rainy days this month: " << rainy << endl;
    cout << "Number of cloudy days this month: " << cloudy << endl;

    return 0;
}
