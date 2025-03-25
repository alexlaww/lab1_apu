#include<iostream>
using namespace std;


int main(){
    double q,mid,f,ave;
    char grade;
    cout<<"Enter 3 scores (quiz, mid-term, and final) values separated by space: ";
    cin>>q>>mid>>f;

    ave=(q+mid+f)/3;
    if(ave>=90){
        grade='A';
    }else if(ave>=70){
        grade='B';
    }else if(ave>=50){
        grade='C';
    }else{
        grade='F';
    }
    cout<<"Grade "<<grade;

}
