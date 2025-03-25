#include<iostream>
#include<iomanip>
using namespace std;

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

int getDay(int y,int m){
    int day =0;
    switch(m){
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
            if(y%4==0){
                day++;
            }
            break;
        default:
            day=30;
            break;
    }
return day;
}

void display(int year,int month){
    int startday=getFirstDay(year,month);
    int tday=getDay(year,month);
    int day =0;
    string mon[]={"January","Feb","March","April","May","June","July","Aug","Sept","Oct","Nov","Dec"};
    string weekday[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    cout<<endl<<endl<<"Calender Title :"<<mon[month-1]<<" - "<<year<<endl;
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
    // 1
    int year,month;
    bool pass=false;
    do{
    cout<<"Enter calender's year:";
    cin>>year;
    cout<<"Enter calender's month:";
    cin>>month;
    if(year/1000<0||month<0||month>12){
        cout<<"Invalid input."<<endl;
        pass=true;
    }else{
    pass=false;
    }
    }while(pass);

    display(year,month);



    return 0;
}
