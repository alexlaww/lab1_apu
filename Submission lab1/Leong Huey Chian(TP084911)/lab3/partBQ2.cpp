#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void star(int x){
     for(int i=0;i<x;i++){
        cout<<" * ";
    }
}


int main(){
    int p0,p1,p2,p3,p4;
    int ran,numb,u=0;
    srand(time(0));
    p0=p1=p2=p3=p4=0;

    cout<<"Enter how many random numbers you want to do an analysis?\n";
    cin>>ran;
    int check[ran];
    cout<<"The random numbers (between 1 - 50) as below:"<<endl;
    for(int i=0;i<ran;i++){
        numb=(rand()%50)+1;
        if(numb>40){
            p4++;
            check[u]=numb;
            u++;
        }
        else if(numb>30)
            p3++;
        else if(numb>20)
            p2++;
        else if(numb>10)
            p1++;
        else
            p0++;

        cout<<numb<<" ";
    }

    cout<<"\n\nThe analysis star design as below:\n";
    cout<<"--------------------------------------------------------------";
    cout<<"\n1 - 10\t|";
    for(int i=0;i<p0;i++){
        cout<<" * ";
    }
    cout<<"\n11 - 20\t|";
    for(int i=0;i<p1;i++){
        cout<<" * ";
    }
    cout<<"\n21 - 30\t|";
    for(int i=0;i<p2;i++){
        cout<<" * ";
    }
    cout<<"\n31 - 40\t|";
    for(int i=0;i<p3;i++){
        cout<<" * ";
    }
    cout<<"\n41 - 50\t|";
    for(int i=0;i<p4;i++){
        cout<<" * ";
    }




    cout<<"\n\nTo verify the graph is correct : (display number of 41-50)\n";
    cout<<"--------------------------------------------------------------\n";

    for(int j=0;j<u;j++){

        cout<<check[j]<<" ";
        if(j==10){
            cout<<endl;
        }
    }



    return 0;
}
