#include<iostream>
using namespace std;

int main()

{
    string month;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;
    int daysInMonth;

    cout << "Enter Your Month (eg. August 2019): " << endl;
    getline(cin, month);

    cout << "Enter the number of days in Month: " << endl;
    cin >> daysInMonth;
    cin.ignore();

    for (int i = 1; i <= daysInMonth; i++)
    {
        cout << "Day " << i << ": Enter H for Hot, R for Rainy, C for Cloudy, (E to end): ";
        cin >> weather;
        cin.ignore();
        
        if (weather == 'E' || weather == 'e')
        {
            cout << "Existing...." << endl;
            break;
        }
        else if (weather == 'h' || weather == 'H')
        {
            hotDays ++;
            
        }
        else if (weather == 'r' || weather == 'R')
        {
            rainyDays ++;
        }
        else if (weather == 'c' || weather == 'C')
        {
            cloudyDays++;
        }
        else
        {
            cout << "Invalid Input";
        }
        
    }
    cout << "Number of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    return 0;
    
}