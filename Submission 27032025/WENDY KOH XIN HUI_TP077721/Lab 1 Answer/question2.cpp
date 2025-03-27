#include <iostream>

using namespace std;

int main() {
    string month;
    int days;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    // Get month and number of days
    cout << "Enter Your Month (e.g August 2019): ";
    getline(cin, month);
    
    cout << "Enter number of days in " << month << ": ";
    cin >> days;
    cin.ignore();

    // Loop for each day to record weather
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;


        // Count based on user input
        if (weather == 'h' || weather == 'H') {
            hotDays++;
        } else if (weather == 'r' || weather == 'R') {
            rainyDays++;
        } else if (weather == 'c' || weather == 'C') {
            cloudyDays++;
        } else if (weather == 'e' || weather == 'E') {
            break; // Early exit
        } else {
            cout << "Invalid input! Please enter H, R, or C.\n";
            i--; // Retry the same day
        }
    }

    // Display results
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    return 0;
}
