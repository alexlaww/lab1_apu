#include<iostream>
#include<string>
#include<cctype>


using namespace std;

bool valid(int hour,char c,int minite,char c2,int sec){
    if(hour>24||minite>60||sec>60||c!=':'||c2!=':'){
            cout<<"Invalid input."<<endl;
            cin.clear();
            return false;
        }else{
            return true;
            }
}

int main(){
    int hour ,minite,sec;
    char c,c2;

    ////string time;
    do{
        fflush(stdin);
        cout<<"Please enter your elapsed time(in HH:MM:SS format) = ";
        cin>>hour>>c>>minite>>c2>>sec;

    }while(!valid(hour,c,minite,c2,sec));
    cout<<"Elapsed time is : "<<(hour*60*60+minite*60+sec)<<" seconds.";

    return 0;
}
/*
void displayReport(char t,int h1,int h2,int h3,int day);
int FindDaysInMonth(string month,int year){
    int day;
    if(month=="january"||month=="march"||month=="may"||month=="july"||month=="august"||month=="december"){
        day=31;
    }else
    if(month=="february"){
        day=28;
            if(year%4==0){
                day++;
                }
    }else{
        day=30;
    }
    return day;
}

string ToLower(string t){
    for (int i = 0; t[i]!='\0'; i++)
  	{
  		if(t[i] >= 'A' && t[i] <= 'Z')
  		{
  			t[i] = t[i] +32;
		}
  	}
  	return t;
}

void convertLetterString(string &month,int *year,int *day){
    bool pass=false;
    do{
        cout<<"Enter Your Month(e.g. August 2019): ";
        cin>>month>>*year;
        month=ToLower(month);
        fflush(stdin);
        if(month!="january"&&month!="february"&&month!="march"&&month!="may"&&month!="july"&&month!="august"&&month!="december"&&(*year/1000<0)){
        cout<<"Invalid Month.Please enter again. "<<endl;
        pass=true;
        }
    }while(pass);

    *day=FindDaysInMonth(month,*year);
}

void weatherReport(int day){
    int r,r1,r2,r3;
    int c,c1,c2,c3;
    int h,h1,h2,h3;
    r=r1=r2=r3=0;
    c=c1=c3=c2=0;
    h=h1=h2=h3=0;
    char ans;

    for(int i=0;i<day;i++){
        do{
        cout<<"Day "<<i+1<<" : Enter \"H\" for Hot,\"R\" for Rainy,\"C\" for Cloudy, (\"E\" for End) :";
        cin>>ans;
        ans=tolower(ans);
        }while(cin.fail()||ans!='r'&&ans!='h'&&ans!='c'&&ans!='e');
        switch(ans){
        case 'c':
            c++;
            if(i>20)
                c3++;
            else if(i>10)
                c2++;
            else
                c1++;
            break;
        case 'r':
            r++;
            if(i>20)
                r3++;
            else if(i>10)
                r2++;
            else
                r1++;
            break;
        case 'h':
            h++;
            if(i>20)
                h3++;
            else if(i>10)
                h2++;
            else
                h1++;
            break;
        }
        if(ans=='e'){
            break;
        }

    }
    cout<<endl;
    cin.clear();
    cout<<"Number of hot days :"<<h<<endl;
    cout<<"Number of cloudy days :"<<c<<endl;
    cout<<"Number of rainy days :"<<r<<endl;
    cout<<endl<<"Press any key to continue...."<<endl;

    if(cin.get()){
        displayReport('h',h1,h2,h3,day);
        displayReport('r',r1,r2,r3,day);
        displayReport('c',c1,c2,c3,day);


    }

}

void displayReport(char t,int h1,int h2,int h3,int day){
    string type;
    if (t=='h')
        type="Hot";
    else if (t=='c')
        type="Cloud";
    else if (t=='r')
        type="Rainy";
    cout<<"\n\nThe analysis star design of "<<type<<" days as below: "<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    cout<<"  1 - 10 | ";
    for(int u=0;u<h1;u++){
        cout<<" * ";
    }
    cout<<endl;
    cout<<" 11 - 20 | ";
    for(int u=0;u<h2;u++){
        cout<<" * ";
    }
    cout<<endl;
    cout<<" 21 - "<<day<<" | ";
    for(int u=0;u<h3;u++){
        cout<<" * ";
    }
    cout<<endl;


}

int main(){
    int year,day;
    string month;
    convertLetterString(month,&year,&day);
    weatherReport(day);



    return 0;
}
*/
