#include <iostream>
#include <string>

using namespace std;

int main() {
    string month;
    int days, hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;
    
    // Get month and number of days
    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);
    cout << "Enter number of days in the month: ";
    cin >> days;
    
    // Loop through each day
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;
        
        // Convert to lowercase if necessary
        weather = tolower(weather);
        
        // Count based on input
        if (weather == 'h') {
            hotDays++;
        } else if (weather == 'r') {
            rainyDays++;
        } else if (weather == 'c') {
            cloudyDays++;
        } else {
            cout << "Invalid input. Please enter H, R, or C." << endl;
            i--; // Repeat the current day input
        }
    }
    
    // Display results
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    
    return 0;
}
