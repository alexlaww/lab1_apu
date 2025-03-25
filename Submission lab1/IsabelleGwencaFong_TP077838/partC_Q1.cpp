#include <iostream>
#include <iomanip>

using namespace std;

int dayNumber(int day, int month, int year)
{
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    if (month < 3)
    {
        year = year - 1;
    }

    return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;
}

int main()
{
    int year, month, numberOfDays;
    string monthName;

    while (true)
    {
        cout << "Enter calendar's year: ";
        cin >> year;
        cin.ignore();
        cout << "Enter calendar's month: ";
        cin >> month;
        cin.ignore();

        switch (month)
        {
        case 1:
            monthName = "January";
            numberOfDays = 31;
            break;
        case 2:
            monthName = "February";
            numberOfDays = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
            break;
        case 3:
            monthName = "March";
            numberOfDays = 31;
            break;
        case 4:
            monthName = "April";
            numberOfDays = 30;
            break;
        case 5:
            monthName = "May";
            numberOfDays = 31;
            break;
        case 6:
            monthName = "June";
            numberOfDays = 30;
            break;
        case 7:
            monthName = "July";
            numberOfDays = 31;
            break;
        case 8:
            monthName = "August";
            numberOfDays = 31;
            break;
        case 9:
            monthName = "September";
            numberOfDays = 30;
            break;
        case 10:
            monthName = "October";
            numberOfDays = 31;
            break;
        case 11:
            monthName = "November";
            numberOfDays = 30;
            break;
        case 12:
            monthName = "December";
            numberOfDays = 31;
            break;
        }

        cout << "\t\t Calendar Title: " << monthName << " - " << year << endl;

        for (int i = 0; i < 110; i++)
        {
            cout << "-";
        }

        cout << endl;

        cout << right << setw(15) << "Sunday";
        cout << right << setw(15) << "Monday";
        cout << right << setw(15) << "Tuesday";
        cout << right << setw(15) << "Wednesday";
        cout << right << setw(15) << "Thursday";
        cout << right << setw(15) << "Friday";
        cout << right << setw(15) << "Saturday" << endl;

        for (int i = 0; i < 110; i++)
        {
            cout << "-";
        }

        cout << endl;

        int startDay = dayNumber(1, month, year);
        int day = 1;

        for (int i = 0; i < startDay; i++)
        {
            cout << setw(15) << " ";
        }

        for (day = 1; day <= numberOfDays; day++)
        {
            cout << setw(15) << day;
            if ((day + startDay) % 7 == 0)
            {
                cout << endl;
            }
        }

        cout << endl;

        for (int i = 0; i < 110; i++)
        {
            cout << "-";
        }

        cout << endl
             << endl;

        int option;
        cout << "Do you want to see another month? 1 = Yes, others = No : ";
        cin >> option;

        if (option != 1)
        {
            break;
        }
    }

    return 0;
}