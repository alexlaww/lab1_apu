# include <iostream>
using namespace std;

void add();
void add(int a, int b);
int Add();
int Add(int a, int b);

int a,b;
int main(){
    cout<<"Enter two integers: ";
    cin>>a>>b;
    add();
    add(a, b);
    cout<< "Sum: "<< Add() <<endl;
    cout<< "Sum: "<< Add(a, b) <<endl;

    return 0;
}

void add(){
    cout<< "Sum: " << a + b << endl ;
}

void add(int A, int B){
    cout<< "Sum: " << A + B << endl ;
}

int Add(){
    return a + b;
}

int Add(int A, int B){
    return A + B;
}