#include<iostream>
#include<sstream>
#include <string>
using namespace std;
bool isValidTime(int hh,int mm,int ss){
    return (hh>=0&&hh<=24)&&(mm>=0&mm<=60)&&(ss>=0&ss<=60);
}


int main(){
    string input;
    int hh,mm,ss;
    char colon1,colon2;
   
    while(true){
        cout<<"Please enter your elapsed time(in HH:MM:SS format) = ";
        cin>>input;
        stringstream ssInput(input);
        if(ssInput>>hh>>colon1>>mm>>colon2>>ss&&colon1==':'&&colon2==':'){
            if (isValidTime(hh,mm,ss)){
                break;
            }
        }

        cout<<"Invalid input!Please enter a valid time in HH:MM:SS format.\n";

    }
    int totalSecond=(hh*3600)+(mm*60)+ss;
    cout<<"Elapsed time un seconds = "<<totalSecond<<"seconds\n";
    return 0;
}