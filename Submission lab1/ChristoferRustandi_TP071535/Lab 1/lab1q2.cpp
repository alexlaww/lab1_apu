#include <iostream>
using namespace std;

int main() {
    int daysInMonth;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    // Get the month and number of days
    cout << "Enter the number of days in the month: ";
    cin >> daysInMonth;

    // Loop through each day and get weather input
    for (int day = 1; day <= daysInMonth; day++) {
        cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;

        // Convert input to lowercase (optional)
        weather = tolower(weather);

        // Count the weather type
        if (weather == 'h') {
            hotDays++;
        } else if (weather == 'r') {
            rainyDays++;
        } else if (weather == 'c') {
            cloudyDays++;
        } else {
            cout << "Invalid input! Please enter 'H', 'R', or 'C'.\n";
            day--; // Repeat the input for the same day
        }
    }

    // Display results
    cout << "\nWeather Summary for the Month:\n";
    cout << "Hot days: " << hotDays << endl;
    cout << "Rainy days: " << rainyDays << endl;
    cout << "Cloudy days: " << cloudyDays << endl;

    return 0;
}
 