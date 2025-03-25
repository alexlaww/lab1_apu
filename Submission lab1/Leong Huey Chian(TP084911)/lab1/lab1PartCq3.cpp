#include <iostream>
#include<iomanip>
using namespace std;

int main(){

    double rate,x,result;
    int c;

    cout<<"Enter the exchange rate from dollars to RMB: ";
    cin>>rate;
    cout<<"Enter 0 to convert dollars to RMB and 1 vice verse: ";
    cin>>c;

    if(c==0){
        cout<<"Enter the dollar amount: ";
        cin>>x;
        result = x*rate;
        cout<<"$ "<<fixed<<setprecision(2)<<x<<" is "<<fixed<<setprecision(2)<<result<<" yuan."<<endl;
    }else{
        cout<<"Enter the RMB amount: ";
        cin>>x;
        result = x/rate;
        cout<<fixed<<setprecision(2)<<x<<" yuan."<<" is "<<"$ "<<fixed<<setprecision(2)<<result<<endl;

    }
return 0;

}
