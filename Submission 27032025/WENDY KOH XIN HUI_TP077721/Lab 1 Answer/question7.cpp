#include <iostream>
using namespace std;

int main(){
    double W1,H1;
    double W2,H2;

    cout<< "Rectangle A:\n";
    cin>>W1;

    cout<<"Height: ";
    cin>>H1;

    cout<< "Rectangle B:\n";
    cin>>W2;

    cout<<"Height: ";
    cin>>H2;

    //calculate area
    double A1=W1*H1;
    double A2=W2*H2;

    if(A1>A2){
        cout<<"\n Area in Rectangle A is bigger than Rectnagle B\n";

    }else if(A1<A2){
        cout<<"\n Area in Rectangle B is bigger than Rectangle A \n";

    }else{
        cout<<"\n Both have same area";
    }


    return 0;
}