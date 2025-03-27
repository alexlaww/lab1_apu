#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int daysInMonth, hotDays = 0, rainyDays = 0, cloudyDays = 0;
    string weather;

    cout << "Enter Your Month (e.g. Augusst 2019): ";
    cin >> daysInMonth;

    for (int day = 1; day <= daysInMonth; day++) {
        cout << "Enter weather forecast for day " << day << " (hot/rainy/cloudy): ";
        cin >> weather;
        
        if (weather == "hot") {
            hotDays++;
        } else if (weather == "rainy") {
            rainyDays++;
        } else if (weather == "cloudy") {
            cloudyDays++;
        } else {
            cout << "Invalid input. Please enter hot, rainy, or cloudy." << endl;
            day--; // Repeat the input for the current day
        }
    }
    
    cout << "\nWeather Summary for the Month:" << endl;
    cout << "Hot days: " << hotDays << endl;
    cout << "Rainy days: " << rainyDays << endl;
    cout << "Cloudy days: " << cloudyDays << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}