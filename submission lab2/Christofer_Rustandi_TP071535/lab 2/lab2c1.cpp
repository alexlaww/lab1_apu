#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

bool validTime(int hh, int mm, int ss){
    return(hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main(){
    string input;
    char colon1, colon2;
    int hh,mm,ss;

    while(true){
        cout << "Please enter your elapsed time (in HH:MM:SS format): ";
        cin >> input;

        istringstream ssInput(input);
        if (ssInput >> hh >> colon1 >> mm >> colon2 >> ss && colon1 == ':' && colon2 == ':' && validTime(hh,mm,ss)){
            break;
        }

        cout << "Invalid value, try again";

    }

    int totalSec = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << totalSec << " seconds\n";
    return 0;
}