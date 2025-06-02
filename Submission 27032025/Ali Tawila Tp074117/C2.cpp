#include <iostream>
using namespace std;

int main() {
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    char weather;
    
    cout << "weather tracker program\n";
    
    for (int day = 1; day <= 30; day++) { 
        cout << "enter weather for day " << day << " (H = hot, R = rainy, C = cloudy): ";
        cin >> weather;

        if (weather == 'H' || weather == 'h') {
            hotDays++;
        } else if (weather == 'R' || weather == 'r') {
            rainyDays++;
        } else if (weather == 'C' || weather == 'c') {
            cloudyDays++;
        } else {
            cout << "invalid input! try again.\n";
            day--; //repeat same day
        }
    }
    
    cout << "\nweather sumary for the month:\n";
    cout << "hot days: " << hotDays << endl;
    cout << "rainy days: " << rainyDays << endl;
    cout << "cloudy days: " << cloudyDays << endl;
    
    return 0;
}