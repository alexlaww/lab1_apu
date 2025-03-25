#include<iostream>
using namespace std;

double area(double a,double b){
    return a*b;
}

int main(){
    double h,w,h2,w2;
    cout<<"Rectangle A:"<<endl;
    cout<<"Width = ";
    cin>>w;
    cout<<"Height = ";
    cin>>h;
    cout<<"\nRectangle B:"<<endl;
    cout<<"Width = ";
    cin>>w2;
    cout<<"Height = ";
    cin>>h2;

    if(area(h,w)>area(h2,w2)){
    cout<<"\nArea in rectangle A is bigger rectangle B.";
    }else{
    cout<<"\nArea in rectangle B is bigger rectangle A.";
    }

return 0;
}
