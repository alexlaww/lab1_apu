// C-2
#include <iostream>
 
using namespace std;

int main() {
    string month;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;
    int day = 1;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month); //get user input

    while (true) {
        cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;
        weather = toupper(weather); // change all to uppercase

        if (weather == 'H') {
            hotDays++;
        } else if (weather == 'R') {
            rainyDays++;
        } else if (weather == 'C') {
            cloudyDays++;
        } else if (weather == 'E') {
            break; //after break then go to count
        } else {
            cout << "Invalid input. Please enter H, R, C, or E." << endl;
            continue; // Skip to next iteration without increasing the day
        }

        day++; 
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    cout << "Press any key to continue . . .";
    cin.ignore(); // Ignore leftnewline
    cin.get();    // Wait for user to press Enter

    return 0;
}