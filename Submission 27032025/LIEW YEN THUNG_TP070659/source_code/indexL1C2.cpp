#include <iostream>
#include <cctype>

using namespace std;

int main(){

    string month;
    int days;
    char weather;
    int hotDays=0, rainyDays=0, cloudyDays=0;

    cout << "Enter Your Month: ";
    cin >> month;

    if (month == "January" || month == "March" || month == "May" || month == "July" ||
        month == "August" || month == "October" || month == "December")
    {
        days=31;
    } else if(month == "April" || month == "June" || month == "September" || month == "November"){
        days=30;
    } else if (month == "February"){
        days=28;
    } else{
        cout << "Invalid month entered!" << endl;
        return 1;
    }

    for (int i = 1; i < days+1; i++)
    {
        cout << "Day " << i << " : Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy: ";
        cin >> weather;

        weather = tolower(weather);

        if (weather == 'h'){
            hotDays++;
        } else if (weather == 'r'){
            rainyDays++;
        } else if (weather == 'c'){
            cloudyDays++;
        } else {
            cout <<"Invalid input! Please enter H, R, or C." << endl;
            i--;
        }
        
    }

    cout << "\nNumber of hot days this month: " << hotDays << endl;
    cout << "Number of rainy days this month: " << rainyDays << endl;
    cout << "Number of cloudy days this month: " << cloudyDays << endl;
    
    return 0;
}