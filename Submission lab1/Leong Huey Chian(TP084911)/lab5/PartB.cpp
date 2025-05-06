#include<iostream>
using namespace std;

int main(){
    int *p,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    p=new int[n];
    cout<<"Enter the elements in the developed array: ";
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"The array elements = ";
    for(int i=0;i<n;i++){
        cout<<p[i]<<" , ";
    }

    return 0;
}
