#include <iostream>
using namespace std;

int main() {
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    for (int day = 1; day <= 30; ++day) {
        cout << "Enter weather for day " << day << " (H=Hot, R=Rainy, C=Cloudy): ";
        cin >> weather;

        // Convert to uppercase in case user enters lowercase
        weather = toupper(weather);

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else {
            cout << "Invalid input. Please enter H, R, or C." << endl;
            day--; // Repeat this day's input
        }
    }

    cout << "\nSummary:" << endl;
    cout << "Hot days: " << hotDays << endl;
    cout << "Rainy days: " << rainyDays << endl;
    cout << "Cloudy days: " << cloudyDays << endl;

    return 0;
}
