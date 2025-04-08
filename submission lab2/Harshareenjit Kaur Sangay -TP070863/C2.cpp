#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    int day = 1;
    
    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);
    
    while (true) {
        cout << "Day " << day << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end): ";
        cin >> weather;
        weather = toupper(weather);
        
        if (weather == 'E') {
            break;
        }
        
        switch (weather) {
            case 'H':
                hotDays++;
                break;
            case 'R':
                rainyDays++;
                break;
            case 'C':
                cloudyDays++;
                break;
            default:
                cout << "Invalid input! Please enter H, R, or C" << endl;
                continue;
        }
        
        day++;
    }
    
    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloud days this month: " << cloudyDays << endl;
    
    cout << "\nPress any key to continue . . .";
    cin.ignore();
    cin.get();
    
    return 0;
}