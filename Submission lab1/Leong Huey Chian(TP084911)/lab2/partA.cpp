#include<iostream>
using namespace std;

 int a,b,r,r2;

void sum(){
    r=a+b;
}

void sum2(int a,int b){
    r2=a+b;
}

int sum3(){
    return a+b;
}

int sum4(int a,int b){
    return a+b;
}

int main(){
    int x,y;
    cout<<"Enter two integers : ";
    cin>>a>>b;
    x=a;y=b;
    sum();
    sum2(x,y);
    cout<<"(no parameter and no return)Sum : "<<r<<endl;
    cout<<"(have parameter and no return)Sum : "<<r2<<endl;
    cout<<"(no parameter and have return)Sum : "<<sum3()<<endl;
    cout<<"(have parameter and return)Sum : "<<sum4(x,y)<<endl;




}
