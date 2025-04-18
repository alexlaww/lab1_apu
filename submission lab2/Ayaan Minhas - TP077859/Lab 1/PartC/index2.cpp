#include <iostream>
#include <string>
#include <cctype> // For tolower

using namespace std;

int main() {
    string month_year_str;
    char weather_input;
    int hot_days = 0;
    int rainy_days = 0;
    int cloudy_days = 0;
    int day_count = 1;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month_year_str); // Read the whole line including spaces

    cout << "--- Enter Weather Forecast ---" << endl;
    cout << "(Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, 'E' to end)" << endl;

    while (true) {
        cout << "Day " << day_count << ": Enter weather ('H', 'R', 'C', or 'E' to end): ";
        cin >> weather_input;
        cin.ignore(10000, '\n'); // Clear buffer after reading char

        char lower_input = tolower(weather_input); // Convert to lowercase for easier comparison

        if (lower_input == 'e') {
            break; // Exit loop if 'E' or 'e' is entered
        } else if (lower_input == 'h') {
            hot_days++;
        } else if (lower_input == 'r') {
            rainy_days++;
        } else if (lower_input == 'c') {
            cloudy_days++;
        } else {
            cout << "Invalid input. Please enter H, R, C, or E." << endl;
            continue; // Skip day increment if input was invalid
        }

        day_count++; // Increment day number only for valid weather inputs (H/R/C)
    }

    cout << "\n--- Weather Summary for " << month_year_str << " ---" << endl;
    cout << "Number of hot days this month: " << hot_days << endl;
    cout << "Number of rainy days this month: " << rainy_days << endl;
    cout << "Number of cloudy days this month: " << cloudy_days << endl;

     // Keep console window open (optional)
    cout << "Press any key to continue . . .";
    cin.get(); 

    return 0;
}