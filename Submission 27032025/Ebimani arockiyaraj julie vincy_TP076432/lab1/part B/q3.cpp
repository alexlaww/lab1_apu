#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;


//check for correct format
//function need to be at top if not system cannot dectect
bool correctTime (int hh, int mm, int ss){
    return (hh >=0 && hh<24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60);
}

int main(){
string time;
int hh,mm,ss;
char colon1, colon2;

while (true)
{
    cout << "enter elapsed time (in HH:MM:SS format) = ";
    cin >> time;

    //ss is to parse the input
    stringstream ssTime(time);
    if (ssTime >> hh >> colon1 >> mm >> colon2 >> ss && colon1 ==':' && colon2==':'){
        if (correctTime(hh,mm,ss)){
            break;//exit loop
        }
    }
    cout<<"Invalid input!\n";
    
}
    //convert time to second    
    int elapsedSeconds = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time in seconds = " << elapsedSeconds << " seconds\n";
    
    return 0; 
}