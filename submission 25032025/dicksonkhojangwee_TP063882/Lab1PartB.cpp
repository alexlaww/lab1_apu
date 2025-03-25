#include <iostream>
#include <sstream>
using namespace std;
bool isvalidtime(int hh,int mm,int ss){
    return (hh>= 0 && hh< 24 ) && (mm>=0 && mm< 60) && (ss >= 0 && ss < 60);
}

int main(){
    string inputt;
    int hh,mm,ss;
    char c1,c2;
    while(true){
    cout << "Please enter your elapsed time(in HH:MM:SS format) = ";
    cin >> inputt;
    stringstream ssTime(inputt);
    if(ssTime >> hh >> c1 >> mm >> c2 >> ss && c1 == ':' && c2 == ':'){
        if(isvalidtime(hh,mm,ss)){
            break;
        }
    }
    cout << "Invalid input.Please enter correct format";
    }
    int convertedsecond = (hh * 3600) + (mm * 60) + ss;
    cout << "Elapsed time: " << convertedsecond;
    return 0;
}