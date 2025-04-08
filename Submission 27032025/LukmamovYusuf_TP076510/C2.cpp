#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    string month;
    int year, numberOfDays;

    while (true)
    {
        cout << "Enter Your Month (e.g. August 2019): ";
        cin >> month >> year;
        cin.ignore();

        if (month == "January")
        {
            numberOfDays = 31;
        }
        else if (month == "February")
        {
            numberOfDays = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
        }
        else if (month == "March")
        {
            numberOfDays = 31;
        }
        else if (month == "April")
        {
            numberOfDays = 30;
        }
        else if (month == "May")
        {
            numberOfDays = 31;
        }
        else if (month == "June")
        {
            numberOfDays = 30;
        }
        else if (month == "July")
        {
            numberOfDays = 31;
        }
        else if (month == "August")
        {
            numberOfDays = 31;
        }
        else if (month == "September")
        {
            numberOfDays = 30;
        }
        else if (month == "October")
        {
            numberOfDays = 31;
        }
        else if (month == "November")
        {
            numberOfDays = 30;
        }
        else if (month == "December")
        {
            numberOfDays = 31;
        }

        char weather, key;
        int hot = 0, rainy = 0, cloudy = 0;

        for (int i = 0; i < numberOfDays; i++)
        {
            cout << "Day " << i + 1 << " : Enter \"H\" for Hot, \"R\" for Rainy, \"C\" for Cloudy, (\"E\" to end): ";
            cin >> weather;
            cin.ignore();

            if (weather == 'E')
            {
                break;
            }
            else if (toupper(weather) == 'H')
            {
                hot++;
            }
            else if (toupper(weather) == 'R')
            {
                rainy++;
            }
            else if (toupper(weather) == 'C')
            {
                cloudy++;
            }
        }

        cout << "Number of hot days this month: " << hot << endl;
        cout << "Number of rainy days this month: " << rainy << endl;
        cout << "Number of cloudy days this month: " << cloudy << endl;
        cout << "Press any key to continue . . .";
        cin >> key;

        return 0;
    }
}