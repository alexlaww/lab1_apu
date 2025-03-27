/*//Question 3
#include<iostream>
//for formating
#include<iomanip>
//for stringstream
#include<sstream>
using namespace std;

//checking input format is valid (function)
bool isValidTime(int hour,int min,int sec){
    return(hour>=0 && hour<24)&&(min>=0 && min<60)&&(sec>=0 && sec<60);
}




int main(){
    string time;
    int hour;
    int min;
    int sec;
    char colon1,colon2;

    cout<<"Please enter elapsed time(HH:MM:SS):";
    cin>>time;

    // Using stringstream to parse input
    stringstream ssInput(time);
    if (ssInput >> hour >> colon1 >> min >> colon2 >> sec && colon1 == ':' && colon2 == ':') {
        if (isValidTime(hour, min, sec)) {
            int totalSeconds = (hour * 3600) + (min * 60) + sec;
            cout << "Elapsed time in seconds = " << totalSeconds << " seconds" << endl;
        } else {
            cout << "Invalid input! Time values are out of range." << endl;
        }
    } else {
        cout << "Invalid input! Please enter time in HH:MM:SS format." << endl;
    }


    return 0;




}*/
#include<iostream>
#include<sstream>
#include <iomanip>

using namespace std;

//Function to validate and parde time
bool isValidTime(int hh,int mm,int ss){
    return(hh>=0 && hh<24) && (mm >=0 && mm<60) && (ss>=0 && ss<60);
}

int main(){
    string input;
    int hh,mm,ss;
    char colon1,colon2;

    while(true){
        cout<< "Pls enter your elapsed time in(HH:MM:SS format)= ";
        cin >> input;

        //use stringstream to parse the input
        stringstream ssInput(input);
        if (ssInput>>hh>>colon1>>mm>>colon2>>ss && colon1 ==':' && colon2 ==':'){
            if (isValidTime(hh,mm,ss)){
                break; //Valid input,exit loop
            }
        }
        cout<< "Invalid input! Please enter a valid time in HH:MM:SS foramt.\n";

        //convert time to seconds
        int totalSeconds=(hh*3600)+(mm*60) +ss;
        cout<< "Elapsed time in seconds= "<<totalSeconds<<"seconds\n";

        
    }
    return 0;
}
