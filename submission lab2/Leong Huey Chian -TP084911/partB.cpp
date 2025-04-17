#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

/*
//q1

void reverseDisplayNumber(int numb1, int numb2, int numb3){

        if(numb2<numb1){
            return;

        }
        if(numb2==numb1){
            cout<<numb2;
        }else{
            cout<<numb2<<"+";
        }
        reverseDisplayNumber(numb1,numb2-1,numb3);
}
int reverseDisplayNumberSum(int numb1,int numb2){
    if(numb1>numb2){
        return 0;
    }

    return numb2+reverseDisplayNumberSum(numb1,numb2-1);
}

int main(){
    int start,endn;
    cout<<"Enter a start value: ";
    cin>>start;
    cout<<"Enter a end value: ";
    cin>>endn;
    if(endn<start){
        cout<<"The start value should be small than end value."<<endl;
    }else{

     reverseDisplayNumber(start,endn,start);
     cout<<" = "<<reverseDisplayNumberSum(start,endn)<<endl;
    }
     return 0;
}
*/
/*

//q2
string reverseString(string text){
    string newt;
    int s=text.length()-1;
    int u=0;
    while(s>=0){
        newt+=text[s];
        u++;s--;
    }
    return newt;
}

bool compareString(string text,string text2){
    if(text==text2)
        return 1;
    else
        return 0;
}

int main(){
    string text;
    cout<<"Enter an string : ";
    getline(cin,text);

    string reversetext=reverseString(text);
    cout<<"Reverse entered string : "<<reversetext<<endl;

    if(compareString(reversetext,text)){
        cout<<"The entered string is a palindrome!"<<endl;
    }else{
        cout<<"The entered string is not a palindrome!"<<endl;
    }
    return 0;
}

*/
//q3

int yearInputValidation(int year){
    while(year/1000<0){
        cout<<"Invalid year.Please key in again. :";
        cin>>year;
    }
    return year;
}

int monthInputValidation(int month,int year){
    while(month>12||month<0){
        cout<<"Invalid month.Please key in again. :";
        cin>>month;
    }
    return month;
}

bool isLeapYear(int year){
    if(year%4==0)
        return true;
    else
        return false;
}

int findDaysInMonth(int month,int year){
    int day =0;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day=31;
            break;
        case 2:
            day=28;
            if(isLeapYear(year)){
                day++;
            }
            break;
        default:
            day=30;
            break;
    }
return day;
}

int getFirstDay(int year,int month){
    int dow=0;
    int day=1;
    int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
    if(month<3){
        year--;
    }
    dow=(year+year/4-year/100+year/400+t[month-1]+day)%7;

    return dow;
}

void displayCalendar(int m,int y,int d ){
    int startday=getFirstDay(y,m);
    int tday=d;
    int day =0;
    string mon[]={"January","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};
    string weekday[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    cout<<endl<<endl<<"Calender Title :"<<mon[m-1]<<" - "<<y<<endl;
    cout<<"-----------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<7;i++){
        cout<<setw(13)<<weekday[i];
    }
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    for(int u=0;u<99;u++){
        for(int l=0;l<7;l++){
            if(day<tday){
                if(day==0&&l!=startday){
                    cout<<setw(13)<<" ";
                }else{
                    day++;
                    cout<<setw(13)<<day;
                }
            }else{
            u=99;
            }
        }
        cout<<endl;
    }
    cout<<"\n-----------------------------------------------------------------------------------------------"<<endl;
}


int main(){
    int year, month,days,ans;
do{
    cout<<"Enter calendar's year: ";
    cin>>year;
    year=yearInputValidation(year);

    cout<<"Enter calendar's month: ";
    cin>>month;
    month=monthInputValidation(month,year);

    days=findDaysInMonth(month,year);

    displayCalendar(month,year,days);

    cout<<"\nDo you want see other month? 1 = Yes, others = No : ";
    cin>>ans;
}while(ans);
return 0;
}

