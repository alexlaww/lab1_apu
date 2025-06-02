#include <iostream>
#include <string>
using namespace std;

// Convert month name into number of days
int DaysInMonth(string month, int year) {
    if (month == "january") return 31;
    if (month == "february") return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    if (month == "march") return 31;
    if (month == "april") return 30;
    if (month == "may") return 31;
    if (month == "june") return 30;
    if (month == "july") return 31;
    if (month == "august") return 31;
    if (month == "september") return 30;
    if (month == "october") return 31;
    if (month == "november") return 30;
    if (month == "december") return 31;
    return 0;
}

// Convert input month to lowercase
string convertLetterString(string month) {
    for (int i = 0; i < month.length(); i++) {
        month[i] = tolower(month[i]);
    }
    return month;
}

// Ask user for daily weather and count results
void weatherReport(int days, int &hot, int &rainy, int &cloudy) {
    char input;
    for (int i = 1; i <= days; i++) {
        cout << "Day " << i << " - Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> input;
        input = tolower(input);

        if (input == 'h') hot++;
        else if (input == 'r') rainy++;
        else if (input == 'c') cloudy++;
        else {
            cout << "Invalid input. Please enter H, R, or C only.\n";
            i--; // repeat this day
        }
    }
}

// Display the counts and star graph
void displayReport(int hot, int rainy, int cloudy) {
    cout << "\nNumber of hot days: " << hot << endl;
    cout << "Number of rainy days: " << rainy << endl;
    cout << "Number of cloudy days: " << cloudy << endl;

    cout << "\nThe analysis star design is as below:\n";
    cout << "Hot\t: ";
    for (int i = 0; i < hot; i++) cout << "*";
    cout << "\nRainy\t: ";
    for (int i = 0; i < rainy; i++) cout << "*";
    cout << "\nCloudy\t: ";
    for (int i = 0; i < cloudy; i++) cout << "*";
    cout << endl;
}

int main() {
    string month;
    int year, days;
    int hot = 0, rainy = 0, cloudy = 0;

    cout << "Enter your month (e.g. August): ";
    cin >> month;
    month = convertLetterString(month);

    cout << "Enter year: ";
    cin >> year;

    days = DaysInMonth(month, year);

    if (days == 0) {
        cout << "Invalid month entered." << endl;
        return 1;
    }

    weatherReport(days, hot, rainy, cloudy);
    displayReport(hot, rainy, cloudy);

    return 0;
}
