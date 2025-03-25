#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    int year,day,h=0,r=0,c=0;
    char ans;
    string month;

    cout<<"Enter Your Month(e.g. August 2019): ";
    cin>>month>>year;
    if(month=="January"||month=="March"||month=="May"||month=="July"||month=="August"||month=="December"){
        day=31;
    }else
    if(month=="February"){
        day=28;
            if(year%4==0){
                day++;
                }
    }else{
        day=30;
    }

    for(int i=0;i<day;i++){
        do{
        cout<<"Day "<<i+1<<" : Enter \"H\" for Hot,\"R\" for Rainy,\"C\" for Cloudy, (\"E\" for End) :";
        cin>>ans;
        ans=tolower(ans);
        }while(cin.fail()||ans!='r'&&ans!='h'&&ans!='c'&&ans!='e');
        switch(ans){
        case 'c':
            c++;
            break;
        case 'r':
            r++;
            break;
        case 'h':
            h++;
            break;
        }
        if(ans=='e'){
            break;
        }

    }
    cout<<"Number of hot days :"<<h<<endl;
    cout<<"Number of cloudy days :"<<c<<endl;
    cout<<"Number of rainy days :"<<r<<endl;






}
