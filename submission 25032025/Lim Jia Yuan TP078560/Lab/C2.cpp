#include <iostream>
#include <string>
using namespace std;

int main()
{
    string month;
    int numberOfDays;
    char weather;
    int hotDays = 0, rainyDays = 0, cloudyDays = 0;

    cout << "Enter Your Month (e.g. August 2019): ";
    getline(cin, month);

    cout << "Enter number of days in the month: ";
    cin >> numberOfDays;

    for (int day = 1; day <= numberOfDays; ++day) {
        cout << "Day " << day << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
        cin >> weather;
        weather = tolower(weather); 

        if (weather == 'e') 
        {
            cout << "Input ended early by user.\n";
            break;
        }

        if (weather == 'h') 
        {
            hotDays++;
        } 
        
        else if (weather == 'r') 
        {
            rainyDays++;
        } 
        
        else if (weather == 'c')
        {
            cloudyDays++;
        } 
        
        else 
        {
            cout << "Invalid input. Please enter only 'H', 'R', 'C', or 'E'.\n";
            --day; 
        }
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;

    return 0;
}