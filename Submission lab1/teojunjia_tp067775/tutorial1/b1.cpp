#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <sstream>
#include <ctime>
using namespace std;

int main(){
    int hours, minutes, seconds; //declare the values first
    char seperator1, seperator2; //as well as a variable to store the "seperators"
    cout << "Please enter your elapsed time (in HH:MM:SS format) = " << endl;
    cin >> hours >> seperator1 >> minutes >> seperator2 >> seconds; //this will seperate it by itself according to the diff variable types

    while(seperator1 != ':' || seperator2 != ':' || cin.fail() || hours < 0 || minutes < 0 || seconds < 0){
        cin.clear(); //to prevent the cin from looping
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input";
        cout << "Please enter your elapsed time (in HH:MM:SS format) = "; //loop back the cin if invalid input
        cin >> hours >> seperator1 >> minutes >> seperator2 >> seconds;
    }

    int total = (hours * 3600) + (minutes * 60) + seconds; //total up the seconds 
    cout << "Elapsed time in seconds = " << total << " seconds" << endl; //don

    return 0;
}