#include <iostream>
using namespace std;

int main(){
    float quiz,midterm,final;

    cout<<"Enter 3 scores (quiz, mid-term, and final) vales separated by space: 23 44 55 :";
    cin>>quiz>>midterm>>final;

    float average=(quiz+midterm+final)/3;

    char grade;
    if(average>=90){
        grade='A';
    }else if(average>=70){
        grade='B';
    }else if(average>=50){
        grade='C';
    }else{
        grade='F';
    }

    cout<<"Grade "<<grade<<endl;
    
    return 0;
}