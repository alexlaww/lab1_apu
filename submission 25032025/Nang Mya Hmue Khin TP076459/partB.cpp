#include <iostream>
#include <sstream>
using namespace std;

bool isValidTime(int hh, int mm, int ss)
{
    return (hh >= 0 && hh <= 23) && (mm >= 0 && mm <= 59) && (ss >= 0 && ss <= 59);
}
    int main()
    {
        string input;
        int hh, mm, ss;
        char colon1, colon2;

        while (true)
        {
            cout << "Please enter your elapsed time in (hh:mm:ss) format: ";
            cin >> input;

            //Use stringsteam to parse the input
            stringstream ssInput(input);
            if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':')
            {
                if (isValidTime(hh, mm, ss))
                {
                    break;
                }
                
            }
            cout << "Invalid time format. Please try again." << endl;
        }
        
        //Convert time to seconds
        int totalSeconds = (hh * 3600) + mm * 60 + ss;
        cout << "Total seconds: " << totalSeconds << endl;
    }
