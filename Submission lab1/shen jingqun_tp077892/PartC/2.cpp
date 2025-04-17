#include <iostream>

using namespace std;

int main() {
    int days, hotCount = 0, rainyCount = 0, cloudyCount = 0;
    char weather;
    string month;

    cout << "Enter Month (e.g. August 2019): ";
    cin.ignore();
    getline(cin, month);

    cout << "Enter number of days in " << month << ": ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        do {
            cout << "Day " << i << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
            cin >> weather;
            weather = toupper(weather);
        } while (weather != 'H' && weather != 'R' && weather != 'C');

        if (weather == 'H') hotCount++;
        else if (weather == 'R') rainyCount++;
        else cloudyCount++;
    }

    cout << "\nNumber of hot days this month: " << hotCount << endl;
    cout << "Number of rainy days this month: " << rainyCount << endl;
    cout << "Number of cloudy days this month: " << cloudyCount << endl;

    return 0;
}
