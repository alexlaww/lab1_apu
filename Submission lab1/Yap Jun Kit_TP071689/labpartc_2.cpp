#include <iostream>
using namespace std;

int main() {
    int days;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    cout << "Enter the number of days in the month: ";
    cin >> days;

    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " - Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;

        // Convert lowercase to uppercase
        weather = toupper(weather);

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else {
            cout << "Invalid input! Please enter 'H', 'R', or 'C'.\n";
            i--; // Repeat the same day input
        }
    }

    // Display results
    cout << "\nNumber of hot days: " << hotDays << endl;
    cout << "Number of rainy days: " << rainyDays << endl;
    cout << "Number of cloudy days: " << cloudyDays << endl;

    return 0;
}
