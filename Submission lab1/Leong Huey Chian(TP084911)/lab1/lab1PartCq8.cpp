#include <iostream>
#include<iomanip>
#define gst 1.6
using namespace std;

int main(){
    double meal,tip;
    cout<<"The cost of meal: RM";
    cin>>meal;
    cout<<"The tip amount(in percentage):";
    cin>>tip;

    cout<<endl;
    cout<<"The total cost of the meal BEFORE GST and tipping : RM "<<fixed<<setprecision(2)<<meal<<endl;
    cout<<"The total cost of the meal AFTER GST : RM"<<fixed<<setprecision(2)<<meal*gst<<endl;
    cout<<"The total cost of the meal AFTER GST : RM"<<fixed<<setprecision(2)<<meal*gst+meal*(tip/100)<<endl;

}
