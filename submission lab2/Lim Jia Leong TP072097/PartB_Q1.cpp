#include <iostream>

using namespace std;

int main()
{
    int hours, minutes, seconds;
    int total;
    char colon1, colon2;

    while (true)
    {
        cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
        cin >> hours >> colon1 >> minutes >> colon2 >> seconds;

        if (hours <= 24 && minutes <= 60 && seconds <= 60 && colon1 == ':' && colon2 == ':')
        {
            total = (hours * 3600) + (minutes * 60) + seconds;
            cout << "Elapsed time is: " << total << " seconds." << endl;
            break;
        }
        else
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    return 0;
}